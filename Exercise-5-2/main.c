//developed & programming by Faraz-Hmd;
#include <stdio.h>
#include <math.h>

double medicine1(double , double );                                                 // var for   Medical calculations
double medicine2(double  );                                                            // var for  Medical calculations
double medicine3(double , double ,double );                                            // var for  Medical calculations
double medicine4(double , double );                                                 // var for  Medical calculations

int main() {

    double a1 , a2 ,b1 ,c1 ,c2 ,c3,d1,d2 ;
    int input;
    while (input != 5){                                                     //while loop to restart
    printf("\nEnter the number of the problem you wish to solve.\nGIVEN A MEDICAL ORDER IN CALCULATE RATE IN\n");
    printf("(1) ml/hr& tubing drop factor drops / min\n");
    printf("(2) 1 L for n hr ml / hr\n");
    printf("(3) mg/kg/hr& concentration in mg/ml ml / hr\n");
    printf("(4) units/hr& concentration in units/ml ml / hr\n");
    printf("(5) QUIT\n");
    printf("Problem>\n");
    scanf(" %d",&input);
    switch (input) {
        case 1:
            printf("Enter rate in ml/hr=>\n");
            scanf("%lf",&a1);
            printf("Enter tubing's drop factor(drops/ml)=>\n");
            scanf("%lf",&a2);

            printf("The drop rate per minute is  : %lf .",medicine1(a1,a2));                //call func
            break;
            case 2:
                printf("Enter number of hours=>\n");
            scanf("%lf",&b1);
            printf("The drop rate per minute is  : %lf .",medicine2(b1));          //call func
                break;
                case 3:
                    printf("Enter rate in mg/kg/hr=>\n");
                    scanf("%lf",&c1);
                    printf("Enter patient weight in kg=>\n");
                    scanf("%lf",&c2);
                    printf("Enter concentration in mg/ml=>\n");
                    scanf("%lf",&c3);
                    printf("The rate in milliliters per hour is  : %lf . \n",medicine3(c1,c2,c3));     //call func
                    break;
                    case 4:
                        printf("Enter rate in units/hr=>\n");
                        scanf("%lf",&d1);
                        printf("Enter concentration in units/ml=> \n");
                        scanf("%lf",&d2);
                        printf("The rate in milliliters per hour is : %lf . \n",medicine4(d1,d2));      //call func
                        break;
                        case 5:
                            return 0;

        default:
            printf("Invalid Input detect \n");
            break;

    }}

    return 0;
}
double medicine1(double a1, double a2 ){                                    // our func
    double z;
    z=(a1*a2/60);


    return round(z);

}
double medicine2(double b1){                                // our func

    double z;
    z=1000/b1;
    return z;
}
double medicine3(double c1, double c2,double c3 ){                       // our func
    double z;
    z=c1*c2*c3;
    return z;
}
double medicine4(double d1, double d2 ){                        // our func
    double z;
    z=d1/d2;
return z;
}