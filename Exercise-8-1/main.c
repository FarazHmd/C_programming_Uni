//developed & programming by Faraz_hmd
#include <stdio.h>
#include <string.h>
void rec(char *s);                      //func that list split one by one char in array string
void rec2(char *s);                    //func that list split 2 by 2 char in array string
void rec3(char *s);                      // func that list split 3 by 3 char in array string
void rec4(char *s);                      // func that list split 4 by 4 char in array string
#define Max_len 20
int main() {
    char str1[Max_len];
    printf("< Enter the characters >\n");
    printf("The Max Char input is %d   \n",Max_len);
    printf("Enter Without space (like 'abc') >>"); gets(str1);
    printf("\nOne_Element_Subs\n");
    rec(str1);
    printf("\nTwo_Element_Subs\n");
    rec2(str1);
    printf("\nThree_Element_Subs\n");
    rec3(str1);
    printf("\nFour_Element_Subs\n");
    rec4(str1);


    return 0;
}
void rec(char *s)
{

    if (*s == '\0'){
        return;
    } else {
        printf("\n______\n");
    printf("{'%c'}", *s);
        printf("\n______\n");
    rec(s + 1);
    }
}
void rec2(char *s)
{

    if (*s == '\0'){
        return ;
    } else {
        printf("\n___________________________\n");
     printf("{'%c'}{'%c'}", *s,*s+1);
        printf("\n___________________________\n");
     printf("{'%c'}{'%c'}", *s,*s+2);
        printf("\n___________________________\n");
        rec2(s+1);
       
    }
}
void rec3(char *s)
{

    if (*s == '\0'){
        return ;
    } else {
        printf("\n________________________________________\n");
     printf("{'%c'}{'%c'}{'%c'}", *s,*s+1,*s+2);
        printf("\n________________________________________\n");
     printf("{'%c'}{'%c'}{'%c'}", *s,*s+2,*s+3);
        printf("\n________________________________________\n");
     printf("{'%c'}{'%c'}{'%c'}", *s,*s+3,*s+4);
        printf("\n________________________________________\n");
     rec3(s+1);

    }
}
void rec4(char *s)
{

    if (*s == '\0'){
        return ;
    } else {
        printf("\n_____________________________________________________\n");
     printf("{'%c'}{'%c'}{'%c'}{'%c'}", *s,*s+1,*s+2,*s+3);
        printf("\n_____________________________________________________\n");
     printf("{'%c'}{'%c'}{'%c'}{'%c'}", *s,*s+2,*s+3,*s+4);
        printf("\n_____________________________________________________\n");
     printf("{'%c'}{'%c'}{'%c'}{'%c'}", *s,*s+3,*s+4,*s+5);
        printf("\n_____________________________________________________\n");
     printf("{'%c'}{'%c'}{'%c'}{'%c'}", *s,*s+4,*s+5,*s+6);
        printf("\n_____________________________________________________\n");
     rec4(s+1);

    }
}
