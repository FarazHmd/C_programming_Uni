// developed and programming by Faraz-Hmd
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prototype Function to implement the game

int game(char you, char computer);

int main()
{
    // Stores the random number
    int n , y=0 ,c=0;
    char  you , computer, result;

    while (you != 'z'){
   // Chooses the random number
    // every time
    srand(time(NULL));

    // Make the random number less
    // than 100, divided it by 100
    n = rand() % 100;

    if (n < 33)
    // Using simple probability 100 is
        // roughly divided among rock,
     // paper, and scissor
        // r is denoting rock
        computer = 'r';

    else if (n > 33 && n < 66)
        // p is denoting Paper
        computer = 'p';

      // s is denoting Scissor
    else
        computer = 's';

    printf("\nEnter 'r' for Rock 'p' for PAPER and 's' for SCISSOR and 'z' for exit the game  \n\t");

    // input from the user
    scanf(" %c", &you);

    // Function Call to play the game
    result = game(you, computer);

    if (result == -1) {
        printf("\nGame Draw!\n");
        printf("\nYour score is :  %d \n ",y);
        printf("\nand computer score is : %d \n",c);
        printf("\nYou choose : %c and Computer choose : %c\n",you, computer);

    }
    else if (result == 1) {
        printf("\n\nWow! You have won the game!\n");
        y ++ ;
        printf("\nYour score is :  %d \n ",y);
        printf("\nand computer score is : %d \n",c);
        printf("\nYou choose : %c and Computer choose : %c\n",you, computer);

        } else {
        printf("\nOh! You have lost the game!\n");
        c ++ ;
        printf("\nYour score is :  %d \n ",y);
        printf("\nand computer score is : %d \n",c);
        printf("\nYou choose : %c and Computer choose : %c\n",you, computer);

    }
        if (y == 3  ){
            printf("\n\aYou won the game !! \n");
            y=='z';
            return 0;
    } else if (c == 3){
            printf("\n\aYou lose the game !! \n");
            y=='z';
            return 0;
        }



    }

    printf("\nYou choose : %c and Computer choose : %c\n",you, computer);
    return 0;
    }



int game(char you, char computer)
{
    // If both the user and computer
    // has chose the same thing
    if (you == computer)
        return -1;

    // If user's choice is rock and
    // computer's choice is paper
    if (you == 'r' && computer == 'p')
        return 0;

        // If user's choice is paper and
        // computer's choice is stone
    else if (you == 'p' && computer == 'r') return 1;

    // If user's choice is rock and
    // computer's choice is scissor
    if (you == 'r' && computer == 's')
        return 1;

        // If user's choice is scissor and
        // computer's choice is rock
    else if (you == 's' && computer == 'r')
        return 0;

    // If user's choice is paper and
    // computer's choice is scissor
    if (you == 'p' && computer == 's')
        return 0;

        // If user's choice is scissor and
        // computer's choice is paper
    else if (you == 's' && computer == 'p')
        return 1;
    else if (you == 'z'){
        printf("The Game Is End \a\n");
    }
}