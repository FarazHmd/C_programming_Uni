//developed & program by Faraz-hmd;
#include <stdio.h>
double sum_func(double ,double );                                      //prototype func calc 1 to calculate the Addition
double sub_func(double  ,double );                                     //prototype  func calc 2 to calculate the Subtraction
double mult_func(double , double );                                    // prototype func calc 3 to calculate the Multiplication
double div_func (double ,double );                                          // prototype func calc 4 to calculate the Division
int fact_func (int , int );                                           //prototype  func calc 4 to calculate the Factorial
int main() {
    double x ,y;                                                       //var for our input
    int x1 ,y1;
    int input ;

while (input != 6){                                                   // while loop to returning
        printf("1: Addition\n");
        printf("2: Subtraction \n");
        printf("3: Multiplication \n");
        printf("4: Division \n");
        printf("5: Factorial \n");
        printf("6: Quit \n");
        printf("select your target to start calculation operation : \n");
        printf("\nEnter the choice => \n ");
        scanf(" %d", &input);



    switch (input) {
        case 1:
            printf("\nEnter two numbers => \n");
            printf("Number 1 >>");scanf("%lf",&x);
            printf("Number 2 >>");scanf("%lf",&y);

            printf("the Sum  %lf + %lf = %lf", x, y, sum_func(x, y));
            break;
        case 2:
            printf("\nEnter two numbers => \n");
            printf("Number 1 >>");scanf("%lf",&x);
            printf("Number 2 >>");scanf("%lf",&y);
            printf("the Subtraction  %lf - %lf = %lf", x, y, sub_func(x, y));
            break;
        case 3:
            printf("\nEnter two numbers => \n");
            printf("Number 1 >>");scanf("%lf",&x);
            printf("Number 2 >>");scanf("%lf",&y);
            printf("the Multiplication  %lf * %lf = %lf", x, y, mult_func(x, y));
            break;
        case 4:
            printf("\nEnter two numbers => \n");
            printf("Number 1 >>");scanf("%lf",&x);
            printf("Number 2 >>");scanf("%lf",&y);
            printf("the Division  %lf / %lf = %lf", x, y, div_func(x, y));
            break;
        case 5:
            printf("\nEnter two numbers => \n");
            printf("Number 1 >>");scanf("%lf",&x);
            printf("Number 2 >>");scanf("%lf",&y);
            x1 = x;
            y1 = y;
            fact_func(x1,y1);
            break;
        case 6:
            return 0;
        default:
            printf("\aInvalid Input detected !!\n");
            break;
    }}
    return 0;
}
double sum_func(double x , double y){                              // our functions that do calculations operations
    double z;
    z= x+y;
    return z;
}
double sub_func(double x ,double y){                                 // our functions that do calculations operations
    double z;
    z=x-y;
    return z;
}
double mult_func(double x ,double y){                                // our functions that do calculations operations
    double z;
    z=x*y;
    return z;
}
double div_func (double x,double y ){                                  // our functions that do calculations operations
    double z;
    z=x/y;
    return z;
}
int fact_func (int x, int y){                                        // our functions that do calculations operations
    int fact1=1 , fact2=1;
    for (int i = 1; i <= x; i++) {
        fact1=fact1*i;

    }

    for (int j = 1; j <= y ; ++j) {                                    // our functions that do calculations operations

        fact2=fact2*j;
    }
    printf("\n %d! is : %d \n  ",x,fact1);
    printf("\n %d! is : %d \n  ",y,fact2);

}