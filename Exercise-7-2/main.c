//developed & programming by Faraz_Hmd;
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define st_size 20                                                           //the size of array string
void verb_checker(char [st_size],char [st_size],char [st_size]);              //prototype func
int main() {
    char st1[st_size], st2[st_size], st3[st_size];                                        //our 3 array string ;

    printf("please Enter 3 verb  >>\n");


    while (1) {
        printf("verb1:");
        gets(st1);
        if (strpbrk(st1, "0123456789") == NULL) {                   //filter the input for just string

            break;
        } else {
            printf("\a\nInvalid input detected !!!\n");
            printf("Hint: only alphabet char is valid a-z \n");
        }
    }
    printf("\n");
    while (1) {
            printf("verb2:");
            gets(st2);
            if (strpbrk(st2, "0123456789") == NULL) {                        //filter the input for just string
                break;
            } else {
                printf("\a\nInvalid input detected !!!\n");
                printf("Hint: only alphabet char is valid a-z \n");
            }
        }
        printf("\n");
    while (1) {
            printf("verb3:");
            gets(st3);
            if (strpbrk(st3, "0123456789") == NULL) {                     //filter the input for just string
                break;
            } else {
                printf("\a\nInvalid input detected !!!\n");
                printf("Hint: only alphabet char is valid a-z \n");
            }
        }
        printf("\n");
        printf("\n%s\n", st1);
        verb_checker(st1, st2, st3);                            //call func


        return 0;
    }


    void verb_checker(char string[st_size], char string2[st_size], char string3[st_size]) {      //our function make the verb to past
        char ch1 = 'd', ch2 = 's', ch3 = 'g', ch32 = 'h';
        char ce = 'e';
        printf("\n_________________________________________________________________________\n");
        if (string[strlen(string) - 1] == 'e') {
            strncat(string, &ch1, 1);
            printf("Past verb  : %s \n", string);
        } else if (strncmp(&string[strlen(string) - 1], &ch2, 1) == 0 &&
                   strncmp(&string[strlen(string) - 2], &ch2, 1) == 0 ||
                   strncmp(&string[strlen(string) - 1], &ch3, 1) == 0 &&
                   strncmp(&string[strlen(string) - 2], &ch32, 1) == 0) {
            strncat(string, &ce, 1);
            strncat(string, &ch1, 1);
            printf("Past verb  : %s \n", string);
        } else {
            printf("maybe the verb you enter  :[%s] is Irregular past tense verb \n", string);
        }
        printf(" last char in func :%c\n", string[strlen(string) - 1]);
        printf("\n_________________________________________________________________________\n");
        if (string2[strlen(string2) - 1] == ce) {
            strncat(string2, &ch1, 1);
            printf("Past verb  : %s \n", string2);
        } else if (strncmp(&string2[strlen(string2) - 1], &ch2, 1) == 0 &&
                   strncmp(&string2[strlen(string2) - 2], &ch2, 1) == 0 ||
                   strncmp(&string2[strlen(string2) - 1], &ch3, 1) == 0 &&
                   strncmp(&string2[strlen(string2) - 2], &ch32, 1) == 0) {
            strncat(string2, &ce, 1);
            strncat(string2, &ch1, 1);
            printf("Past verb  : %s \n", string2);
        } else {
            printf("maybe the verb you enter  :[%s] is Irregular past tense verb \n", string2);
        }
        printf(" last char in func :%c\n", string2[strlen(string2) - 1]);
        printf("\n_________________________________________________________________________\n");
        if (string3[strlen(string3) - 1] == ce) {
            strncat(string3, &ch1, 1);
            printf("Past verb  : %s \n", string3);
        } else if (strncmp(&string3[strlen(string3) - 1], &ch2, 1) == 0 &&
                   strncmp(&string3[strlen(string3) - 2], &ch2, 1) == 0 ||
                   strncmp(&string3[strlen(string3) - 1], &ch3, 1) == 0 &&
                   strncmp(&string3[strlen(string3) - 2], &ch32, 1) == 0) {
            strncat(string3, &ce, 1);
            strncat(string3, &ch1, 1);
            printf("Past verb  : %s \n", string3);
        } else {
            printf("maybe the verb you enter  :[%s] is Irregular past tense verb \n", string3);
        }


    }
