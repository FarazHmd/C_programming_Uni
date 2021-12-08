//developed & programming by Faraz_Hmd;
//list the name & lastname & age program
#include <stdio.h>
#include <string.h>
#define Max_len 30
 #define Max_Name 50

 int alpha_first(char *list[], int min_sub, int max_sub);                   //our sort by alphabet prototype function
 void select_sort_str(char *list[], int n);                     // our sorter prototype function

 int
 main(void) {

     char names[Max_Name][Max_len] = { 0 };                        //array string name and lastname ;
     char *alpha[Max_Name];char *age[Max_Name];                           // our 2 pointer arrays to send to func
     char ages[Max_Name][Max_len] = { 0 };                       //array ages

     int num_name,
     i;
     char one_char;


     printf("Enter number of Names (0 . . %d)\n> ", Max_Name);
     scanf("%d", &num_name);
     do
         scanf("%c", &one_char);
     while (one_char != '\n');

     printf("Enter names of applicants on separate lines of less than\n");
     printf(" 30 characters in the order in which they applied\n");
     for (i = 0; i < num_name; ++i) {
         printf("The name & lastname %d >>",i+1); gets(names[i]);
         printf("Enter the age of %d >> ",i+1); gets(ages[i]);
     }

      for (i = 0; i < num_name; ++i) {
          alpha[i] = names[i];
          age[i]=ages[i];
      }
     select_sort_str(alpha, num_name);                    //call the func

      printf("\n\n%-20s%s%8c%-30s\n\n", "ORIGINAL LIST ","Ages", ' ',
                 "Alphabetized List ");
      for (i = 0; i < num_name; ++i) {
          printf("\n__________________________________________________\n");
          printf("%-20s%s || %8c%-30s \n", names[i], ages[i], ' ', alpha[i]);                        //list the names and lastnames and ages || and sort of them
          printf("\n__________________________________________________\n");
      }
      return(0);
      }

int alpha_first(char *list[],                     //Our function returns a smaller char
 int min_sub,
 int max_sub)
 {
 int first, i;

 first = min_sub;
 for (i = min_sub + 1; i <= max_sub; ++i)
 if (strcmp(list[i], list[first]) < 0)
 first = i;

 return (first);
 }

 void select_sort_str(char *list[], int n)           // our sorter will work with alpha_first func that returned the first char that is smaller char
 {

 int fill,
 index_of_min;
 char *temp;

 for (fill = 0; fill < n - 1; ++fill) {
 index_of_min = alpha_first(list, fill, n - 1);
 if (index_of_min != fill) {
 temp = list[index_of_min];
 list[index_of_min] = list[fill];
 list[fill] = temp;
    }
   }
 }