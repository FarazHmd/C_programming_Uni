#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <math.h>
int PrintInfo (int , char [20]  , char[20]);
int printAlert( );
void Replace ( char *str , char c1  , char c2 );
double Result (double ,double ,double );
int main() {

    char str[200],c1,c2;

    printf("Enter  the string : \n\n");
    gets(str);
    printf("Enter a character replace: \n\n");
    c1=getchar();
    printf("\nEnter character to replace  with  %c : \n\n",c1);
    c2=getchar();
    c2=getchar();
    printf("\n before replace:%s\n",str);
    Replace(str,c1,c2);
    printf("\nafter replace:%s\n",str);
    printf("________________________________________________________________\n");
            char name [15] , lastname [20];
            int id;
            printf("Enter your name >>   \n");
                gets(name);
                gets(name);
            printf("Enter your Lastname >>   \n");
                gets(lastname);

            printf("Enter your ID >>   \n");
                scanf("%i",&id);
                int info1;
                info1=PrintInfo(id,name,lastname);
                printf(" %d" ,info1 );
                printf("\n\n__________________________________________________________________________________________\n\n");
    double Number1 , Number2 , Number3;
    printf("Enter the number 1 : \n");
    scanf("%lf",&Number1);
    printf("Enter the number 2 : \n");
    scanf("%lf",&Number2);
    printf("Enter the number 3 : \n");
    scanf("%lf",&Number3);
    double res1;
    res1=Result(Number1,Number2,Number3);


                return 0;

}
    int PrintInfo(int id, char *name, char *last){
    printf("\n******************************\n\n");
    printf("your Information is : >>> \t\n\a");
    printf("id : %i\n",id);
    printf("name = %s\n", name);
    printf("lastname = %s\n" ,last );
    printf("\n******************************\n");
     printf("\n\n________________________________________________________________________________________\n\n");
     printAlert();
     return (0);
 }
 int printAlert(int beep ,int alert){
    int t;
    printf("how mach you want hear beep ? "  );
    scanf("%i",&beep);
    printf("how mach you want see *  ?"    );
    scanf("%i",&alert);
    for(t=1;t<=alert;t++)
    {
        printf("*");
    }
    for(t=1;t<=beep;t++)
    {
        printf("\a");
        Beep(800,800);

    }
    printf("\n____________________________________________________________\n");
    return 0;
}
void Replace(char *s,char c1,char c2)
{
    int i=0;


    for(i=0;s[i];i++)
    {
        if(s[i]==c1)
        {
            s[i]=c2;
        }
    }

}
double Result (double x , double y , double d){
double z;
z=x*y*d;
double k , a ;
a=24;
k=64;
double res2;
double z2;
z2=a+k;
double z3;
z3=z2/2;
printf("\n******************************************\n");
printf("The Multiply numbers  %lf * %lf * %lf =  %lf",x,y,d,z);
printf("\n******************************************\n");
printf("\nThe Sum of %lf + %lf = %lf\n",a,k,z2);
printf("\n The Split Number %lf by 2 =  %lf\n",z2,z3);
double x1 , x2 ;
x1 = 3;
x2=5;

res2=pow(x1,x2);
printf("\nThe %lf power %lf = %lf\n",x1 ,x2 , res2);

return 0 ;
}




