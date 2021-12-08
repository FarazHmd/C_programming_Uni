//developed & programming by Faraz_hmd;
//find common of the 2 array string ;
#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#define Max_len 30

int *CountArray(char *str);                         //prototype func1
int CountCommonChar(char *str1, char *str2);             //prototype func2

int main()
{
    char str1[100],str2[100];
    int i,j,t;
    printf("\n__________________________________________________________\n");
    printf("\nEnter  Name,Lastname 1: ");
    gets(str1);
    printf("\n__________________________________________________________\n");
    printf("\nEnter  Name,Lastname 2: ");
    gets(str2);
    printf("\n__________________________________________________________\n");

    int n=CountCommonChar(str1,str2);
    printf("\n\nCommon char & each times used  = |%d|\n\n",n);
    printf("\n__________________________________________________________\n");
    printf("\nCommon characters are :\n");
    for(i=0;str1[i]!='\0';i++)
    {
        for(j=i-1;j>=0;j--)

            if(str1[i]==str1[j])
                break;
        if(j==-1)
            for(t=0;str2[t]!='\0';t++)

                if(str1[i]==str2[t])
                {
                    printf("|\t%c\t|",str1[i]);
                    break;
                }
    }

    getch();
    return 0;
}





int *CountArray(char *str)
{
    int *count=(int *)calloc(sizeof(int),Max_len);
    int i;
/* Count frequency of each character in  string */
    for(i=0;*(str+i);i++)
    {
        count[*(str+i)]++;
    }
    return count;
}
int CountCommonChar(char *str1, char *str2) //func that count each common char used in 2 string and this func work with above func
{
    int *count=CountArray(str1);
    int i,count_char=0;
    for(i=0;*(str2+i);i++)
    {
        if(count[*(str2+i)]!=0)
        {
            count_char++;
            count[*(str2+i)]--;
        }
    }

    return count_char;
}


