//developed & programming by Faraz-Hmd ;
#include <stdio.h>
#include <strings.h>
int Account_billing(char[12] , char , int ,int  );                                                         //function prototype for function 1 ;
int Internet_usage(char [12], char , int  );                                                               //function prototype for function 1 ;
char irr ='R';
int main() {
    char pn[12];                                                                                                     //adoc = Approximate_duration_of_calls
    int noct, iupd, adoc;                                                                             // pn = phone_number              ,noct = number_of_calling_times
    char toc;                                                                                              // toi = (type of internet )using ;
    char toi;                                                                                             // iupd= internet_usage_per_day   ,toc =  type_of_calling
    printf("\nplease enter your phone number : \n");
    gets(pn);
    printf("\nplease enter the number of calling times per day: \n");
    scanf("%d", &noct);

    printf("\nplease enter the Approximate duration of calls in minute : \n");
    scanf("%d", &adoc);
    printf("\nplease enter the internet usage per day in minute : \n");
    scanf("%d", &iupd);
    printf("\nplease enter the type of calling ( 'e' external or 'i' internal ) :\n");
    scanf("  %c", &toc);



        if (toc == 'e' || toc == 'i') {                                                                           // check the input 1  if user enter valid char continue
            printf("\nplease enter the type of internet using ( 'e' for external , 'i' internal )  :");
            scanf(" %c", &toi);
            if (toi == 'e' || toi == 'i') {                                                                      // check the input 2   if user enter valid char continue
                Account_billing(pn, toc, noct, adoc);                                                           //call func 1
                printf("_________________________________________________________\n");
                Internet_usage(pn, toi, iupd);                                                                   //call func 2

            } else {                                                                                           // check the input 1 if user enter invalid char
                printf("\ainvalid input please enter the valid char from table !! \n  ");
                printf("\nplease enter the type of internet using ( 'e' for external , 'i' internal )  :");
                scanf(" %c", &toi);
                Account_billing(pn, toc, noct, adoc);                                                         //call func 1
                printf("_________________________________________________________\n");
                Internet_usage(pn, toi, iupd);                                                              //call func 2
            }

        } else {                                                                                                // check the input 2      if user enter invalid char
            printf("\ainvalid input please enter the valid char from table !! \n  ");
            printf("\nplease enter the type of calling ( 'e' external or 'i' internal ) :\n");
            scanf("  %c", &toc);
            printf("\nplease enter the type of internet using ( 'e' for external , 'i' internal )  :");
            scanf(" %c", &toi);
            if (toi == 'e' || toi == 'i') {
                Account_billing(pn, toc, noct, adoc);                                                         //call func 1
                printf("_________________________________________________________\n");
                Internet_usage(pn, toi, iupd);                                                              //call func 2

            } else {
                printf("\ainvalid input please enter the valid char from table !! \n  ");
                printf("\nplease enter the type of internet using ( 'e' for external , 'i' internal )  :");
                scanf(" %c", &toi);
                Account_billing(pn, toc, noct, adoc);                                                             //call func 1
                printf("_________________________________________________________\n");
                Internet_usage(pn, toi, iupd);                                                                   //call func 2
            }

        }


    return 0;
}
int Account_billing(char pn[12] , char toc , int noct ,int adoc ){                                                         // our function 1
    int cost=1 , min;                                                                                                    // var for calculate the cost and var for minute
    min = adoc;
    if (toc=='e'){
    for (int i = 0; i < noct ; ++i) {                                                                                // for loop to continue the calculation operation n times
                                                                                                                      // this (for loop) work with noct var we definition
        cost =cost +(4000 * 30) ;
        min *=cost;
    }
        printf("\nDear subscriber to the number  : %s \n",pn);
        printf("Price of your bill is: %d%c \n",cost,irr);
        printf("\n 1R for Taxation ! \n");

    } else if (toc=='i'){
        for (int i = 0; i < noct ; ++i) {                                                                       // for loop to continue the calculation operation n times
                                                                                                                    // this (for loop) work with noct var we definition

            cost =cost + (150 * 30);
            min *=cost;

        }
        printf("\nDear subscriber to the number  : %s \n",pn);
        printf("Price of your bill is: %d%c \n",cost,irr);
        printf("\n 1R for Taxation ! \n");

    }
}

int Internet_usage(char pn [12] , char toi , int iupd ){                                                                                 // our function 2
    int cost=1 , min;
    min = iupd;
    if (toi == 'i'){
            for (int j = 0; j < iupd ; ++j) {                                                                        // for loop to continue the calculation operation n times
                                                                                                                      // this (for loop) work with iupd var we definition

                cost = cost +(800 * 30);
                min *=cost;
            }
        printf("\nDear subscriber to the number  : %s \n",pn);
        printf("Price of your Internet bill is: %d%c \n",cost,irr);
        printf("\n 1R for Taxation ! \n");
    }  else if (toi == 'e'){
        for (int j = 0; j <iupd ; ++j) {                                                                           // for loop to continue the calculation operation n times
                                                                                                                   // this (for loop) work with iupd var we definition
            cost = cost +(1300 * 30);
            min *=cost;
        }
        printf("\nDear subscriber to the number  : %s \n",pn);
        printf("Price of your Internet bill is: %d%c \n",cost,irr);
        printf("\n 1R for Taxation ! \n");

    }

}