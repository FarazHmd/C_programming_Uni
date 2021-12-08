//developed & programming by Faraz-Hmd
#include <stdio.h>

int fact(int );                                   // prototype func to calculate factorial
int main() {
    int num=0 ;
    char one_char;
    do {
        do {                                                                                // loop to check input is integer
            printf("Please Enter an Integer between 0-9 or -1 Quit >>  \n");
            scanf("%d", &num);
            if (num==-1){
                return 0;
            }
            if (num < 0) {
                printf("Invalid Input Detected !!\a\n");
                while (getchar() == '\n');
            }
        }while (num < 0);
        do {                                                                             // skips rest of line after number
            scanf("%c", &one_char);
        }while (one_char != '\n');



        printf("\n*****************************************************\n");
        printf("|| Factorial of %d is: %d ||", num, fact(num));                         //call func
        printf("\n*****************************************************\n");

    }while (num !=-1);

    return 0;
}
int fact(int num ){                                             //our func

    if (num == 0){
        return 1;
    } else {
        if (num ==1){
            printf(" %d\t ",num  );
        } else {
            printf(" %d x ", num);
        }
        return  num*fact(num-1);


    }
}

