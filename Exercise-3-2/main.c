//developed and programming by Faraz.Hmd;
#include <stdio.h>

int main() {
    int A , B ;
    int co1,co2 , co3 , co4 ;

    printf("Input the values for  A  coordinate : \n");

    scanf("%d",&co1);
    printf("______________________________\n");                                         // get coordinate A from user ;
    scanf("%d",&co2);
    A = co1 + co2;
    B = co3 + co4;

    if (A > 0) {                                                                            // check if coordinate A is positive or Negative ;
        printf("The coordinate of 'A' is Positive : A=(%d,%d) \n", co1, co2);

    } else{
        printf("The coordinate of 'A' is Negative : A=(%d,%d) \n", co1, co2);
    }
    printf("\n____________________________________________________________________________________________________\n");

    printf("Input the values for  B  coordinate : \n");
    scanf("%d",&co3);
    printf("______________________________\n");
    scanf("%d",&co4);
    B = co3 + co4;
    if (B > 0){                                                                             // check if coordinate A is positive or Negative ;
        printf("The coordinate of 'B' is Positive : B=(%d,%d) \n", co3, co4);
    }else {
        printf("The coordinate of 'B' is Negative : B=(%d,%d) \n", co3, co4);
    }
    return 0;
}
