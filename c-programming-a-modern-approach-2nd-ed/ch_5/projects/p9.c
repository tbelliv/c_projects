/*Write a program that prompts the user to enter two dates and then indicates which date comes earlier on the calendar:

Enter first date (mm/dd/yy): 3/6/08 Enter second date (mm/dd/yy): 5/17/07 5/17/07 is earlier than 3/6/08*/

//It does not make sense to use 'yy' in scanf as the question stated. I choose to use 'yyyy' format for efficiency.

#include<stdio.h>

typedef struct{

    int mm;
    int dd;
    int yyyy;

}dates;

int main(void){

    dates date1;
    dates date2;
    
    printf("\nEnter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&date1.mm,&date1.dd,&date1.yyyy);

    printf("\nEnter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&date2.mm,&date2.dd,&date2.yyyy);

    if(date1.yyyy > date2.yyyy){

        printf("\n%d/%d/%d is earlier than %d/%d/%d\n\n",date1.mm,date1.dd,date1.yyyy,date2.mm,date2.dd,date2.yyyy);

    }

    else if(date2.yyyy > date1.yyyy){

        printf("\n%d/%d/%d is earlier than %d/%d/%d\n\n",date2.mm,date2.dd,date2.yyyy,date1.mm,date1.dd,date1.yyyy);

    }

    else if(date1.yyyy == date2.yyyy){

        if(date1.mm > date2.mm){

            printf("\n%d/%d/%d is earlier than %d/%d/%d\n\n",date1.mm,date1.dd,date1.yyyy,date2.mm,date2.dd,date2.yyyy);

        }

        else if(date2.mm > date1.mm){

            printf("\n%d/%d/%d is earlier than %d/%d/%d\n\n",date2.mm,date2.dd,date2.yyyy,date1.mm,date1.dd,date1.yyyy);

        }

        else if(date2.mm == date1.mm){

            if(date1.dd > date2.dd){

                printf("\n%d/%d/%d is earlier than %d/%d/%d\n\n",date1.mm,date1.dd,date1.yyyy,date2.mm,date2.dd,date2.yyyy);

            }

            else if(date2.dd > date1.dd){

                printf("\n%d/%d/%d is earlier than %d/%d/%d\n\n",date2.mm,date2.dd,date2.yyyy,date1.mm,date1.dd,date1.yyyy);

            }

            else if(date1.dd == date2.dd){

                printf("\n%d/%d/%d is equal to %d/%d/%d\n\n",date2.mm,date2.dd,date2.yyyy,date1.mm,date1.dd,date1.yyyy);

            }

        }

    }

    else{

        printf("\nSomething went wrong.\n\n");

    }

    return 0;
}