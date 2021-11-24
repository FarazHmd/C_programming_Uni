//developed & programming by Faraz-Hmd
#include <stdio.h>
#define PI 3.1415926535897932384626433832795
double calc1(double ,double );                                       //prototype function Area of a parallelogram
double calc2(double ,double );                                        //prototype function Area of a triangle
double calc3(double ,double ,double );                                // prototype function   Area of a trapezoid
double calc4(double  );                                                //prototype function Area of a circle
int main() {
    double x1,y1,x2,y2,x3,y3,f3,r;                                                //var for input
    int a;
    do {                                                                   // do  while loop to restart main
    printf("_____________________________________________________\n");
    printf("(1)Area of a parallelogram\n");
    printf("(2)Area of a triangle\n");
    printf("(3)Area of a trapezoid\n");
    printf("(4)Area of a circle\n");
    printf("(5)QUIT\n");
    printf("______________________________________________________\n");
   printf("Enter your select >>"); scanf("%d",&a);
    switch (a) {
        case 1:
            printf("Please enter the base of the side parallelogram \n");
            scanf("%lf",&x1);
            printf("Please enter the height of the side parallelogram \n");
            scanf("%lf",&y1);
            printf("Area of the parallelogram is : %lf\n",calc1(x1,y1));                         //call function
            break;
        case 2:
            printf("Please enter the base of the side triangle\n");
            scanf("%lf",&x2);
            printf("Please enter the height of the side triangle \n");
            scanf("%lf",&y2);
            printf("Area of the parallelogram is : %lf\n",calc2(x2,y2));                //call function
            break;
        case 3:
            printf("Please enter the long base of the side trapezoid\n");
            scanf("%lf",&x3);
            printf("Please enter the short base of the side trapezoid\n");
            scanf("%lf",&y3);
            printf("Please enter the height of the side trapezoid \n");
            scanf("%lf",&f3);
            printf("Area of the parallelogram is : %lf\n",calc3(x3,y3,f3));                //call function
            break;
        case 4:

            printf("Please enter the Radius of the circle \n");
            scanf("%lf",&r);
            printf("Area of the circle is : %lf\n",calc4(r));                         //call function
            break;
            case 5:
                return 0;
        default:
            printf("\aInvalid Input detected !!\n");

    }}while (a !=5);
    return 0;
}
double calc1(double x1 , double y1){                                 // our functions
    double z;
    z=x1*y1;
    return z;
}
double calc2(double x2 , double y2){                                     // our functions
    double z;
    z=(x2*y2)/2;
    return z;
}
double calc3(double x3 , double y3 , double f3){                              // our functions
    double z;
    z=(x3+y3)/2*f3;
    return z;
}
double calc4(double r){                                                  // our functions
    double z;
    z=PI*r*r;
    return  z;
}