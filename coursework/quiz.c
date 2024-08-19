#include <stdio.h>
#include<ctype.h>

int main(){

    //welcome to the quiz game!

    char questions[][100] = {
    "\n1. Who was the first President of the United States?", 
    "\n2. What ancient civilization built the pyramids?", 
    "\n3. In which year did Christopher Columbus first arrive in the Americas?", 
    "\n4. What was the name of the ship that brought the Pilgrims to America in 1620?", 
    "\n5. Who wrote the Declaration of Independence?"
    };

    char options[][100] = {
    "\na) Thomas Jefferson", "b) George Washington", "c) Abraham Lincoln", "d) John Adams",
    "\na) Romans", "b) Greeks", "c) Egyptians","d) Incas",
    "\na) 1492", "b) 1607", "c) 1776", "d) 1804",
    "\na) Santa Maria", "b) Mayflower", "c) Titanic", "d) Beagle",
    "\na) Benjamin Franklin", "b) Thomas Jefferson", "c) Alexander Hamilton", "d) John Hancock"
    };

    char answers[5] = {'b', 'c', 'a', 'b', 'b'};

    int num_of_qs = sizeof(questions)/sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("\n**********");
    printf("\nQuiz Game!\n");
    printf("**********\n");
    printf("\n");
    printf("\n");

    for(int i =0; i < num_of_qs; i++){

        printf("********************");
        printf("\n%s\n",questions[i]);
        printf("\n********************\n");

        for(int j = (i*4); j < (i*4)+4; j++){
            printf("\n%s\n",options[j]);
            printf("\n");
        }

        printf("Guess: ");
        scanf("%c", &guess);
        scanf("%c"); // clear new line from input buffer

        guess = tolower(guess);

        if(guess == answers[i]){

            printf("\nCorrect!\n");
            score++; 

        }

        else{

            printf("\nWrong!\n");
            printf("%c", answers[i]);
            printf("\n");

        }

        printf("\nFinal Score: %d/%d\n", score,num_of_qs);

    }

    return 0;
}