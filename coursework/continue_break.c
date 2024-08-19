#include<stdio.h>

int main(){
    //continue -- skips rest of code & forces the next iteration of the loop
    //break -- exits a loop/switch

    for(int i = 1; i <= 20; i++)
    {
        if(i == 13)
        {
            continue; //will skip 13 and go from printing 12 to 14
        }
        else if(i == 19) //will skip printing 19 and no other numbers will be printed
        {
            break;
        }
        else
        {
            printf("%d\n", i);
        }   
    }
    return 0;
}