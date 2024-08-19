/* 8.

The following table shows the daily flights from one city to another:

Departure time        Arrival time
8:00 am               10:16 am
9:43 am               11:52 am
11:19 am              1:31 pm
12:47 pm              3:00 pm
2:00 pm               4:00 pm
3:45 pm               5:55 pm
7:00 pm               9:20 pm
9:45 pm               11:58 pm

Write a program that asks user to enter a time (expressed in hours and minutes, using the 24hour clock). The program then displays the departure and arrival times for the flight whose departure time is closest to that entered by the user:

Enter a 24-hour time: 13:15

Closest departure time is 12:47 p.m., arriving at 3:00 p.m.

Hint: Convert the input into a time expressed in minutes since midnight, and compare it to the departure times, also expressed in minutes since midnight. For example. 13:15 is 13 x 60+ 15 = 795 minutes since midnight, which is closer to 12:47 p.m. (767 minutes since midnight) than to any of the other departure times.

*/

#include <stdio.h>

int main(void) {
    int hour, minute, user_time;
    int dep_times[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arr_times[] = {616, 712, 811, 900, 960, 1075, 1220, 1438}; 

    printf("Enter a 24-hour time (HH:MM): ");
    scanf("%d:%d", &hour, &minute);

    user_time = hour * 60 + minute;

    int closest_index = 0;
    int min_diff = user_time - dep_times[0];

    for (int i = 1; i < 8; i++) {
        int diff = user_time - dep_times[i];
        if ((diff >= 0 && diff < min_diff) || (diff < 0 && -diff < min_diff)) {
            min_diff = diff;
            closest_index = i;
        }
    }

    int dep_hour = dep_times[closest_index] / 60;
    int dep_minute = dep_times[closest_index] % 60;
    int arr_hour = arr_times[closest_index] / 60;
    int arr_minute = arr_times[closest_index] % 60;

    printf("Closest departure time is %.2d:%.2d %s, arriving at %.2d:%.2d %s\n",
           dep_hour % 12 == 0 ? 12 : dep_hour % 12, dep_minute, dep_hour < 12 ? "a.m." : "p.m.",
           arr_hour % 12 == 0 ? 12 : arr_hour % 12, arr_minute, arr_hour < 12 ? "a.m." : "p.m.");

    return 0;
}
