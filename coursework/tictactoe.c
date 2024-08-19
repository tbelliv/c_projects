#include<stdio.h>
#include<ctype.h>
#include<time.h>

char board[3][3];
const char PLAYER = 'x';
const char COMPUTER = 'o';


void reset_board();
void print_board();
int check_free_spaces();
void player_move();
void computer_move();
char check_winner();
void print_winner(char winner[]);

int main(){

    char winner = ' ';

    reset_board();

    while(winner == ' ' && check_free_spaces()!=0){

        print_board();

    }
        
    return 0;
}

void reset_board(){

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            board[i][j] = ' '; //clears each space on board

        }



    }

}

void print_board(){

    printf("\n\n");
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n\n\n");

}

int check_free_spaces(){

    int free_spaces = 9;

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 3; j++){

            if(board[i][j]!=' '){
                free_spaces--;
            }

        }

    }

    return free_spaces;


























































































}

void player_move(){



}

void computer_move(){



}

char check_winner(){



}

void print_winner(char winner[]){



}