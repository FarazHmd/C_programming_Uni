//developed && programming by Faraz Hmd
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Size_string 80
#define Max_Names 12
#define Day_Of_Week 7
struct measured_data_t{
int Site_ID,
Wind_speed,
day_of_month,
temperature;
}AIR_Site_1[Day_Of_Week],AIR_Site_2[Day_Of_Week],AIR_Site_3[Day_Of_Week],temp,temp2,temp3;
void func_scan (int );
void func_print(int );
int main() {
    func_scan(Day_Of_Week);
    func_print(Day_Of_Week);
    return 0;
}
void func_scan(int n){
    int Site_ID_1,Site_ID_2,Site_ID_3;
    printf("The Site ID IS a four digit number like ([1234])\n");
printf("Enter The ID of Site 1 : \n");
printf(">>");scanf("%4d",&Site_ID_1);
printf("Enter The ID of Site 2 : \n");
printf(">>");scanf("%4d",&Site_ID_2);
printf("Enter The ID of Site 3 : \n");
printf(">>");scanf("%4d",&Site_ID_3);
printf("\n________________________________________________________________________________________________________________________\n");

    for (int i2 = 0; i2 <n ; ++i2) {
        AIR_Site_1[i2].Site_ID = Site_ID_1;
        AIR_Site_1[i2].temperature = 10 + 5 + i2;
        AIR_Site_1[i2].day_of_month = 10 + i2;
        AIR_Site_1[i2].Wind_speed = 3 + 5 + 4 + i2;
    }
    for (int j1 = 0; j1 <n ; ++j1) {
        AIR_Site_2[j1].Site_ID=Site_ID_2;
        AIR_Site_2[j1].temperature=13+5+5+j1;
        AIR_Site_2[j1].day_of_month=10+j1;
        AIR_Site_2[j1].Wind_speed=3+6+3+4+j1;
    }
    for (int i = 0; i < n ; ++i) {
        AIR_Site_3[i].Site_ID=Site_ID_3;
        AIR_Site_3[i].day_of_month=10+i;
        AIR_Site_3[i].Wind_speed=3+7+5+6+i;
        AIR_Site_3[i].temperature=15+5+8+i;
    }
}
void func_print(int n ){
    int k,k4,k5,k11,k12,k14 ;
    for (int j = 0; j <n ; ++j) {
        printf("\nSite ID : [%d]", AIR_Site_1[j].Site_ID);
        printf("\tDay : [%d]", AIR_Site_1[j].day_of_month);
        printf("\tWind Speed: [%d]", AIR_Site_1[j].Wind_speed);
        printf("\tTemperature:[%d]", AIR_Site_1[j].temperature);
    }
 printf("\n________________________________________________________________________________________________________________________\n");
    for (int l = 0; l <n ; ++l) {
        printf("\nSite ID : [%d]",AIR_Site_2[l].Site_ID);
        printf("\tDay : [%d]",AIR_Site_2[l].day_of_month);
        printf("\tWind Speed: [%d]",AIR_Site_2[l].Wind_speed);
        printf("\tTemperature:[%d]",AIR_Site_2[l].temperature);
    }
 printf("\n________________________________________________________________________________________________________________________\n");
    for (int k2 = 0; k2 <n ; ++k2) {
        printf("\nSite ID : [%d]",AIR_Site_3[k2].Site_ID);
        printf("\tDay : [%d]",AIR_Site_3[k2].day_of_month);
        printf("\tWind Speed: [%d]",AIR_Site_3[k2].Wind_speed);
        printf("\tTemperature:[%d]",AIR_Site_3[k2].temperature);
    }

    for (k = 1; k < n; k++){
        for (k11 = 0; k11 < n - k; k11++) {
            if (AIR_Site_1[k11].Wind_speed < AIR_Site_1[k11 + 1].Wind_speed)   {
                temp = AIR_Site_1[k11];
                AIR_Site_1[k11] = AIR_Site_1[k11 + 1];
                AIR_Site_1[k11 + 1] = temp;
            }
        }
    }

      for (k4 = 1; k4 < n; k4++)
      for (k12 = 0; k12 < n - k4; k12++) {
          if (AIR_Site_2[k12].Wind_speed < AIR_Site_2[k12 + 1].Wind_speed)   {
              temp2 = AIR_Site_2[k12];
              AIR_Site_2[k12] = AIR_Site_2[k12 + 1];
              AIR_Site_2[k12 + 1] = temp2;
          }

      }
  for (k5 = 1; k5 < n; k5++)
      for (k14 = 0; k14 < n - k5; k14++) {
          if (AIR_Site_3[k14].Wind_speed < AIR_Site_3[k14 + 1].Wind_speed)   {
              temp3 = AIR_Site_3[k14];
              AIR_Site_3[k14] = AIR_Site_3[k14+ 1];
              AIR_Site_3[k14 + 1] = temp3;
          }
      }


    printf("\n\nList Sorted By Maximum wind speed And Temperature \n");
      for (int i2 = 0; i2 < n; ++i2) {
        printf("\nSite ID : [%d] \t Wind Speed :[%d]  \t Temperature :[%d]  ",AIR_Site_1[i2].Site_ID,AIR_Site_1[i2].Wind_speed,
               AIR_Site_1[i2].temperature);
    }
      printf("\n");
    for (int i3 = 0; i3 < n; ++i3) {
        printf("\nSite ID :[%d] \t Wind Speed :[%d]  \t Temperature :[%d]  ",AIR_Site_2[i3].Site_ID,AIR_Site_2[i3].Wind_speed,
               AIR_Site_2[i3].temperature);
    }
    printf("\n");
    for (int i4 = 0; i4 < n; ++i4) {
        printf("\nSite ID :[%d] \t Wind Speed :[%d]  \t Temperature :[%d]  ",AIR_Site_3[i4].Site_ID,AIR_Site_3[i4].Wind_speed,
               AIR_Site_3[i4].temperature);
    }
    printf("\n");

FILE *Output;
Output=fopen("OUTPUT.txt","w");
    fprintf(Output,"\n\nList Sorted By Maximum wind speed And Temperature \n");
    for (int i4 = 0; i4 <n ; ++i4) {
        fprintf(Output,"\nSite ID : [%d]", AIR_Site_1[i4].Site_ID);
        fprintf(Output,"\tWind Speed: [%d]", AIR_Site_1[i4].Wind_speed);
        fprintf(Output,"\tTemperature:[%d]", AIR_Site_1[i4].temperature);
    }
    fprintf(Output,"\n");
    for (int i5 = 0; i5 <n ; ++i5) {
        fprintf(Output,"\nSite ID : [%d]", AIR_Site_2[i5].Site_ID);
        fprintf(Output,"\tWind Speed: [%d]", AIR_Site_2[i5].Wind_speed);
        fprintf(Output,"\tTemperature:[%d]", AIR_Site_2[i5].temperature);
    }
    fprintf(Output,"\n");
    for (int i6 = 0; i6 <n ; ++i6) {
        fprintf(Output,"\nSite ID : [%d]", AIR_Site_3[i6].Site_ID);
        fprintf(Output,"\tWind Speed: [%d]", AIR_Site_3[i6].Wind_speed);
        fprintf(Output,"\tTemperature:[%d]", AIR_Site_3[i6].temperature);
    }
    fprintf(Output,"\n");

fclose(Output);
    system("OUTPUT.txt");
}




