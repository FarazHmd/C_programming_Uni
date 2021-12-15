//developed && programming by Faraz Hmd;
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define year 20
#define OutputFile "Output.txt"
struct Housing_loan{                //our struct
int num_payment;
double interest , pricipal;
}Loan;
void fun_get_input(int );                         //func to set value to  struct elements
void func_print(int ,double );                        // func to display result and write in file (output)
double func_calc_payment(int , double , double );               // func to calc payment
int main() {
    int num_pay;
    num_pay=Loan.num_payment;
    printf("total number of payment\n"
           "intrest pricipal \n");
    printf(">>");scanf("%d",&num_pay);
    fun_get_input(num_pay);
    return 0;
}
void fun_get_input(num_pay){
    double pric , interest ,result;


        printf("Enter Principal (amount you borrow) : \n");
        printf(">>");scanf("%lf",&pric);
        printf("Enter montly intrest rate :  \n");
        printf(">>");scanf("%lf",&interest);
    Loan.interest=interest;
        Loan.pricipal=pric;


    result=func_calc_payment(num_pay,interest,pric);
    func_print(num_pay,result);
}
double func_calc_payment(int num_pay, double intrest, double pric){
double payment;
payment=(intrest*pric)/1-pow(1.0+intrest,-num_pay);
return payment;

}
void func_print(int n ,double x){

    for (int j = 0; j <n ; ++j) {
     printf("\nInterest Rate : [%lf]\t Month Amount Duration :[%d]\tMonthly Payment:[%lf]\tTotal payment:[%lf] ",Loan.interest , year ,x/n,x  );
     printf("\nInterest Rate : [%lf]\t Month Amount Duration :[%d]\tMonthly Payment:[%lf]\tTotal payment:[%lf] ",Loan.interest , year +5 ,x/n,x  );
     printf("\nInterest Rate : [%lf]\t Month Amount Duration :[%d]\tMonthly Payment:[%lf]\tTotal payment:[%lf] ",Loan.interest , year +10,x/n,x  );
    }
    FILE *input;           //create a file
    input=fopen(OutputFile,"w"); // with the define name
    for (int k = 0; k <n ; ++k) {
        fprintf(input,                       // printing to file
                "\nInterest Rate : [%lf]\t Month Amount Duration :[%d]\tMonthly Payment:[%lf] Total payment:[%lf] ",
                Loan.interest, year, x / n, x);
        fprintf(input,
                "\nInterest Rate : [%lf]\t Month Amount Duration :[%d]\tMonthly Payment:[%lf] Total payment:[%lf] ",
                Loan.interest, year + 5, x / n, x);
        fprintf(input,
                "\nInterest Rate : [%lf]\t Month Amount Duration :[%d]\tMonthly Payment:[%lf] Total payment:[%lf] ",
                Loan.interest, year + 10, x / n, x);
    }
    fclose(input);     // closing  the file
system(OutputFile);         //open file with console ( in text editor );
}
