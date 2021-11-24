//developed & programming by Faraz-Hmd;
#include <stdio.h>
#define cpu  415;
#define Ram  137;
#define Hard_ssd  227;
#define Network_adaptor 18;
#define  mouse  99;
void cash_checker1( int * x  );                                                                   //function prototype for func 1 to calculation operation & return result
void cash_checker2( int * y  );                                                                    //function prototype for func 2 to calculation operation & return result
void cash_checker3( int * q  );                                                                  //function prototype for func 3 to calculation operation & return result
void cash_checker4( int * e  );                                                                  //function prototype for func 4 to calculation operation & return result
void cash_checker5( int * p  );                                                                    //function prototype for func 5 to calculation operation & return result

int main() {

    char Dollar = '$';
    char ch;
    int cash;
    printf("\nPlease enter the amount of cash in your bank account  : \n");
    printf("The minimum amount of money is $ 100\n");
    printf("Enter amount cash >>"); scanf("%d", &cash);
    if (cash > 100) {                                                                             // minimum cash checker
    while (ch !='z') {                                                                            // while loop to restart the shop program until user press z key


            printf("\n\a___________________________________________________________Welcome To Shop_____________________________________________________\n");
            printf("\nWe have a number of tools for sale  :\n");
            printf("\nBuy  a 'Intel® Core™ i7-7700 Processor' for $ 415  >> Press the 'a' key\n");
            printf("\nBuy  a 'Crucial RAM 32GB Kit (2x16GB) DDR4 3200 MHz CL22 ' for $ 137   >> Press the 'b' key\n");
            printf("\nBuy  a 'SAMSUNG 970 EVO Plus SSD 2TB - M.2 NVMe ' for $ 227  >> Press the 'c' key\n");
            printf("\nBuy  a 'TP-Link AC600 USB WiFi Adapter for PC (Archer T2U Plus)- Wireless Network Adapter for Desktop with 2.4GHz, 5GHz High Gain Dual Band 5dBi ' for $ 18  >> Press the 'd' key\n");
            printf("\nBuy  a  ' MX MASTER 3'   for $ 99  >> Press the 'e' key\n ");
            printf("Press the 'z' key   to exit  \n");
           printf("Enter char >>"); scanf(" %c", &ch);

            if (ch == 'a' || ch =='A') {                                                                                                    //input checker to see the user select;
                if (cash >= 415) {
                    cash_checker1(&cash);                                                                                                   //call func 1
                    printf("your buy was successfully  ;\n");
                    printf("\n Your purchase will be sent to you as soon as possible. Thank you for your purchase  \n ");
                    printf("The rest of your money is : %d %c \n ", cash, Dollar);

                } else {
                    printf(" not enough cash  \n");
                }
            } else if (ch == 'b'|| ch == 'B') {                                                                                              //input checker to see the user select;
                if (cash >= 137) {
                    cash_checker2(&cash);                                                                                                   // call func 2
                    printf("your buy was successfully  ;\n");
                    printf("\n Your purchase will be sent to you as soon as possible. Thank you for your purchase  \n ");
                    printf("The rest of your money is : %d %c \n ", cash, Dollar);

                } else {
                    printf(" not enough cash  \n");
                }
            } else if (ch == 'c'||ch=='C') {                                                                                            //input checker to see the user select;
                if (cash >= 227) {
                    cash_checker3(&cash);                                                                                                  //call func 3
                    printf("your buy was successfully  ;\n");
                    printf("\n Your purchase will be sent to you as soon as possible. Thank you for your purchase  \n ");
                    printf("The rest of your money is : %d %c \n ", cash, Dollar);
                }else {
                    printf(" not enough cash  \n");
                }


            } else if (ch == 'd'||ch=='D'){                                                                                                   //input checker to see the user select;
                if (cash >= 18) {
                    cash_checker4(&cash);                                                                                                           //call func 4
                    printf("your buy was successfully  ;\n");
                    printf("\n Your purchase will be sent to you as soon as possible. Thank you for your purchase  \n ");
                    printf("The rest of your money is : %d %c \n ", cash, Dollar);
            }else {
                    printf(" not enough cash  \n");
                }

            } else if (ch == 'e'||ch=='E'){                                                                                                   //input checker to see the user select;
                if (cash >= 99) {
                    cash_checker5(&cash);                                                                                                        //call func 5
                    printf("your buy was successfully  ;\n");
                    printf("\n Your purchase will be sent to you as soon as possible. Thank you for your purchase  \n ");
                    printf("The rest of your money is : %d %c \n ", cash, Dollar);

            }else {
                    printf(" not enough cash  \n");
                }
        } else {
                printf("\aplease enter the valid character !!\n");
                printf("Enter char >>"); scanf(" %c", &ch);
            }
    }   // end loop
    }else {
        printf("\aplease enter the real amount of cash !!  \n");
        printf("\nPlease enter the amount of cash in your bank account  : \n");
        printf("\nThe minimum amount of money is $ 100\n");
        scanf(" %d", &cash);
    }
        printf("your shoping is  end ! have good day \n");
        printf("This is also the rest of your money : %d %c \n ", cash, Dollar);
        return 0;
    }

void cash_checker1(int * x ){                                    //func 1 : It takes money from the user & Reduces the amount of goods from money And returns the rest

  *x = *x -cpu
}

void cash_checker2( int * y  ){                              //func 2 : It takes money from the user & Reduces the amount of goods from money And returns the rest
    *y=*y-Ram
}
void cash_checker3( int * q  ){                              //func 3 : It takes money from the user & Reduces the amount of goods from money And returns the rest
    *q=*q-Hard_ssd
}
void cash_checker4( int * e  ){                              //func 4 : It takes money from the user & Reduces the amount of goods from money And returns the rest
    *e=*e-Network_adaptor
}
void cash_checker5( int * p  ){                                 //func 5 : It takes money from the user & Reduces the amount of goods from money And returns the rest
    *p=*p-mouse
}



