//programming & develop by Faraz.hmd;
#include <stdio.h>
double calculator(double x,double y,char );

int main(void ) {
         double Number1 , Number2  ;
         char c  ;
            printf("Enter the one character :\n");
                 c = getchar();

            printf("Enter the number 1 : \n");
                 scanf("%lf",&Number1);
            printf("Enter the number 2 : \n");
                 scanf("%lf",&Number2);
                 int calc1;
                 calc1=calculator(Number1,Number2,c);

            printf(" %i",calc1);

    return 0;
}
double calculator(double x, double y , char c ) {
        double z;
            z = x*y;

        printf("**********************************\n");
        printf("\n new you see the Multiply the first and second numbers  >> %c %lf %c \n",c,z,c);
        printf("**********************************\n");


    return 0;
}
