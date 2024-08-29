#include <stdio.h>
#include <omp.h>

#define SIGHTINGS 1000000  // total bear sightings reported near NCAR

int main() {
    int bear_sightings[SIGHTINGS];
    long long total_sightings = 0;

    // init array to simulate bear sightings (between 1 and 3 per sighting)
    for (int i = 0; i < SIGHTINGS; i++) {
        bear_sightings[i] = (i % 3) + 1; // sim varying sightings per report
    }

    // parallel bear sighting count using OpenMP
    #pragma omp parallel for reduction(+:total_sightings) //creates local sum to avoid racing then finds sum once finished
    for (int i = 0; i < SIGHTINGS; i++) {
        total_sightings += bear_sightings[i];  // each thread counts sightings locally
    }

    printf("Total black bear sightings near NCAR: %lld\n", total_sightings);

    return 0;
}