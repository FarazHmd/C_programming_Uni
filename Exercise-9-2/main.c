//developed && programming  by Faraz Hmd
#include <stdio.h>
#include <windows.h>
#include <string.h>
#define Max_names 30
#define Max_size_string 60
  struct workers_personal_info{
    int  id ,age;
    char phone_num[11];
    char name[Max_size_string];
    char city[Max_size_string];

}workers1[Max_names],temp;

void func_scan (int );
void func_print(int );
int main() {
    int num=0;
    do {
        printf("Enter number of workers : \n");
        printf(">>");
        scanf("%d", &num);
        if (num < 1 ) {
            printf("\nInvalid Input Detected !!\a\n");
            while (getchar() == '\n');
        }}while (num < 1);
    func_scan(num);
    func_print(num);
    return 0;
}
void func_scan (int num){

    for (int i = 0; i <num ; ++i) {
        printf("Enter The Name worker %d \n",i+1);
        printf(">>");scanf("%s",workers1[i].name);
        printf("__________________________________\n");
        printf("Enter The Id of Workers %d \n",i+1);
        printf(">>");scanf("%d",&workers1[i].id);
        printf("__________________________________\n");
        printf("Enter The age of worker %d \n",i+1);
        printf(">>");scanf("%d",&workers1[i].age);
        printf("__________________________________\n");
        printf("Enter The city of worker %d \n",i+1);
        printf(">>");scanf("%s",workers1[i].city);
        printf("__________________________________\n");
        printf("Enter The phone number of worker %d \n ",i+1);
        printf(">>");scanf("%s",workers1[i].phone_num);
        printf("___________________________________\n");
    }

}
void func_print(num){
    int i,k,l;
    for (int j = 0; j <num ; ++j) {
        printf("\nName %d: |%s| ",j+1,workers1[j].name);
        printf("\tIds  %d: |%d|",j+1 ,workers1[j].id);
        printf("\tAges %d: |%d|",j+1,workers1[j].age);
        printf("\tCities %d:|%s|",j+1,workers1[j].city);
 printf("\tPhone numbers %d:|%s|",j+1,workers1[j].phone_num);
    }


    for (i = 1; i < num; i++)
        for (k = 0; k < num - i; k++) {
            if (strcmp(workers1[k].city, workers1[k + 1].city) > 0) {
                temp = workers1[k];
                workers1[k] = workers1[k + 1];
                workers1[k + 1] = temp;
            }
        }
printf("\n\n The (Sorted By City Name) List of Workers  \n");
    for (l = 0; l < num; l++) {
        printf("\n|%s|\t\t|%s|\t\t|%d|",workers1[l].city,workers1[l].name,workers1[l].id);
    }

}

