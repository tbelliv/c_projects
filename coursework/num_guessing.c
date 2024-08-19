#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    const int min = 1;
    const int max = 100;
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0)); //uses current time as seed
    
    answer = (rand() % max) + min;

    /*generates random number between 1 and 100 (% max + min)*/

    //test expected answer output: printf("\n%d\n", answer);

    do {
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
        if(guess > answer){
            printf("\nToo high!\n");
        }
        else if(guess < answer){
            printf("\nToo low!\n");
        }
        else{
            printf("Correct!");
        }
        guesses++;
    } while(guess != answer);

    printf("\n********************\n");
    printf("\nAnswer: %d, Guesses: %d\n", answer, guesses);
    printf("\n********************\n");
    
    return 0;
}