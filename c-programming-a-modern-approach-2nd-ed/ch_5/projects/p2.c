#include <stdio.h>

int main(void) {

    int milhrs;
    char milmins[3];
    
    printf("\nPlease enter a 24hr (military) time.\nPlease include the character ':': ");
    scanf("%d:%2s", &milhrs, milmins);
    
    if (milhrs >= 12 && milhrs != 24) {
        switch (milhrs) {
            case 12:
                printf("\nEquivalent 12-hr time: 12:");
                break;
            case 13:
                printf("\nEquivalent 12-hr time: 1:");
                break;
            case 14:
                printf("\nEquivalent 12-hr time: 2:");
                break;
            case 15:
                printf("\nEquivalent 12-hr time: 3:");
                break;
            case 16:
                printf("\nEquivalent 12-hr time: 4:");
                break;
            case 17:
                printf("\nEquivalent 12-hr time: 5:");
                break;
            case 18:
                printf("\nEquivalent 12-hr time: 6:");
                break;
            case 19:
                printf("\nEquivalent 12-hr time: 7:");
                break;
            case 20:
                printf("\nEquivalent 12-hr time: 8:");
                break;
            case 21:
                printf("\nEquivalent 12-hr time: 9:");
                break;
            case 22:
                printf("\nEquivalent 12-hr time: 10:");
                break;
            case 23:
                printf("\nEquivalent 12-hr time: 11:");
                break;
            default:
                printf("\nTime not valid.");
                break;
        }

        printf("%s PM", milmins);
    }

    else if (milhrs == 24) {
        printf("\nEquivalent 12-hr time: 12:");
        printf("%s PM", milmins);
    }

    else {
        switch (milhrs) {
            case 0:
                printf("\nEquivalent 12-hr time: 12:");
                break;
            case 1:
                printf("\nEquivalent 12-hr time: 1:");
                break;
            case 2:
                printf("\nEquivalent 12-hr time: 2:");
                break;
            case 3:
                printf("\nEquivalent 12-hr time: 3:");
                break;
            case 4:
                printf("\nEquivalent 12-hr time: 4:");
                break;
            case 5:
                printf("\nEquivalent 12-hr time: 5:");
                break;
            case 6:
                printf("\nEquivalent 12-hr time: 6:");
                break;
            case 7:
                printf("\nEquivalent 12-hr time: 7:");
                break;
            case 8:
                printf("\nEquivalent 12-hr time: 8:");
                break;
            case 9:
                printf("\nEquivalent 12-hr time: 9:");
                break;
            case 10:
                printf("\nEquivalent 12-hr time: 10:");
                break;
            case 11:
                printf("\nEquivalent 12-hr time: 11:");
                break;
            default:
                printf("\nTime not valid.");
                break;
        }

        printf("%s AM", milmins);
    }

    return 0;
}
