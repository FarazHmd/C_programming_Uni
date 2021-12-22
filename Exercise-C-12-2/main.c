//developed & programing by Faraz_Hmd
#include <stdio.h>
#include "POSTFIX/postfix.c"
#define Max_postfix_element_size 30
int main()
{
    char exp[Max_postfix_element_size];
    printf("Enter the postfix element : \n");
    printf(">>");gets(exp);
    printf("\n_________________________________________________________________________________________\n");
    printf("The Postfix Result : ");
    printf ("|%d|", evaluatePostfix(exp));
    return 0;
}