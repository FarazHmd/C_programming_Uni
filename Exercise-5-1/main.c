//developed & programming by Faraz-Hmd;
#include <stdio.h>
void sorter(int n);                                            //prototype func
int main() {
   int num1 ;
double num11;
    do {                                                                          // loop to check if user enter right input ;

        printf("Enter the number >> \n");
        printf(":");scanf("%lf",&num11);
        num1=num11;
        if (num11 < 1) {
            printf("Invalid Input Detected !!\a\n");
            while (getchar() == '\n');
        }}while (num11<1);
    printf("__________________________________\n");
    sorter(num1);                                           //call func
    printf("___________________________________\n");

return 0;
}

void sorter(int n)                                     // this func split the number input like 120 to 1 , 2 , 0
{                                                       // and tell you the each number is odd or even
    double i;

    if(n>0) {
        {
            if (n % 2 == 0) {                                        //check odd or even

                i = n % 10;                                           //split number
                n = n / 10;                                             //
                sorter(n);
                printf("%lf\t", i); printf("this number is even !!\n");
            } else if (n % 2 != 0) {                                     //check odd or even

                i = n % 10;                                               //split number
                n = n / 10;                                                 //
                sorter(n);
                printf("%lf\t", i);printf("this number is odd ! \n");
            }


        }
    }
}