//developed and programming by Faraz.Hmd;
#include <stdio.h>
#include <math.h>
double rect_area(double l,double w);                   // >
double rect_perimeter(double l,double w);              // >>
double Square_area(double l);                          // >>>
double Square_perimeter(double l);                     // >>>>  prototype Functions  for calculation operation ;
double circle_perimeter(double r);                     // >>>
double circle_area(double r);                          //>>
                                                       //>

int main() {

    double sender1, sender2, sender3, sender4, sender5, sender6;          //Transmitter variables to send values ​​to functions
    char ch;                                                                   //var char for input a character ;
    int num;                                                                   // var number for input a number ;
    double x, y;                                                             // var x, y to ready for calculation operation ;
    restarter2:                                                                //recursive point 2
    printf("\nEnter a character & Number for select the Calculation operation  \n");
    printf("\n_______________________________((HINT Table))____________________________________________________________________________\n");
    printf("\n \aHint : m & 1 for calculate the square perimeter |\t|  n & 1 for calculate the Area square  \n");
    printf("\n___________________________________________________________________________________________________________\n");
    printf("\n \aHint : m & 2 for calculate the Rectangle perimeter |\t| n & 2 for calculate the Area Rectangle  \n");
    printf("\n___________________________________________________________________________________________________________\n");
    printf("\n \aHint : m & 3 for calculate the Circle perimeter |\t|  n & 3 for calculate the Area Circle  \n");
    printf("\n___________________________________________________________________________________________________________\n");
    restarter:                                                                  //recursive point
    printf("Enter character :\n");
    ch = getchar();
    printf("Enter Number   :\n");
    scanf("%d", &num);

    if (num == 1) {
        printf("enter the Width of the square : \n");
        scanf("%lf", &x);
        sender2 = Square_area(x);                                                //>>> calling functions
        sender1 = Square_perimeter(x);                                           //>>

    } else if (num == 2) {
        printf("enter the Width of the Rectangle : \n");
        scanf("%lf", &x);
        printf("enter the Length of the Rectangle : \n");
        scanf("%lf", &y);
        sender3 = rect_area(x, y);                                                //>>> calling functions
        sender4 = rect_perimeter(x, y);                                           //>>
    } else if (num == 3) {
        printf("enter the Radius of the Circle: \n");
        scanf("%lf", &x);
        sender5 = circle_area(x);                                              //>>> calling functions
        sender6 = circle_perimeter(x);                                         //>>

    } else {
        printf("\nThe Number you entered is Invalid !! \n");
        printf("\nplease Enter a valid number from Hint-table \n ");
        printf("\nfor see the Hint Table Press the Z key\n");
        switch (ch) {
            case 'z':
                goto restarter2;                                            //calling  recursive point
            default:
                goto restarter;                                             //calling  recursive point

        }

    }

    if (num == 1) {
        switch (ch) {
            case 'n':

                printf("The Area for square is : %lf \n ", sender2);
                break;
            case 'm':
                printf("The Perimeter for square is : %lf \n ", sender1);
                break;
            default:
                printf("Invalid character input Please try again !! \n");
                goto restarter;

        }
    }
    if (num == 2) {
        switch (ch) {
            case 'n':
                printf("The Area for Rectangle is : %lf \n ", sender3);
                break;
            case 'm':
                printf("The Perimeter for Rectangle is : %lf \n ", sender4);
                break;
            default:
                printf("Invalid character input Please try again !! \n");
                goto restarter;
        }
    }
    if (num == 3) {
        switch (ch) {
            case 'n':
                printf("The Area for Circle is : %lf \n ", sender5);
                break;
            case 'm':
                printf("The Perimeter for Circle is : %lf \n ", sender6);
                break;
            default:
                printf("Invalid character input Please try again !! \n");
                goto restarter;

        }

    }
    return 0;
}






double rect_area(double l,double w)
{
    double area;
    area=l*w;
    return area;
}
double rect_perimeter(double l,double w)
{
    double p;
    p=2*(l+w);
    return p;
}
double Square_area(double l)
{
    double area;

    area=l*4;
    return area;
}
double Square_perimeter(double l)
{
    int p;
    p=pow(l,2);
    p++;
    return p;
}
double circle_perimeter(double r){
    double p;
    p =2*3.14*r;
   return p;
}
double circle_area(double r){
double p ;
p=3.14*r*r;
return p;
}