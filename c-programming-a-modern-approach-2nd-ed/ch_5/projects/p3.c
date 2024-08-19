/* Modify the broker.c program of Section 5.2 by making both of the following changes:

(a) Ask the user to enter the number of shares and the price per share, instead of the value of the trade.

(b) Add statements that compute the commission charged by a rival broker (S33 plus 3C per share for fewer than 2000 shares; $33 plus 2c per share for 2000 shares or more). Dis¬ play the rival’s commission as well as the commission charged by the original broker.*/

//Original Program:

/*Calculates a broker's commission

#include <stdio.h>

int main(void)

{

float commission, value;

printf("Enter value of trade: "); scanf("%f", &value);

if (value < 2500.OOf)

commission = 30.OOf + .017f * value; else if (value < 6250.OOf)

commission = 56.OOf + .0066f * value; else if (value < 20000.OOf)

commission = 76.OOf + .0034f * value; else if (value < 50000.OOf)

commission = 100. OOf + .0022f * value; else if (value < 500000.OOf)

commission = 155.OOf + .OOllf * value; else

commission = 255.OOf + .0009f * value;

if (commission < 39.OOf) commission = 39.OOf;

printf("Commission: $%.2f\n", commission); return 0;

}*/

#include <stdio.h>

int main(void) {

    float commission;
    float rival_commission; 
    float price_per_share;
    int shares;
    float value;

    printf("Enter number of shares: ");
    scanf("%d", &shares);

    printf("Enter price per share: ");
    scanf("%f", &price_per_share);

    value = shares * price_per_share;

    if (value < 2500.00f)
        commission = 30.00f + 0.017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + 0.0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + 0.0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + 0.0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + 0.0011f * value;
    else
        commission = 255.00f + 0.0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    if (shares < 2000)
        rival_commission = 33.00f + 0.03f * shares;
    else
        rival_commission = 33.00f + 0.02f * shares;

    printf("Commission: $%.2f\n", commission);
    printf("Rival's Commission: $%.2f\n", rival_commission);

    return 0;
}
