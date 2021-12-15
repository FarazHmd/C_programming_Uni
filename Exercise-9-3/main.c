//developed && programming by Faraz Hmd
#include <stdio.h>
#include <string.h>
#define Max_string_size 64
struct travel_data{
    char Name[Max_string_size];
    char destinations[Max_string_size];
    int  distance,time;
     char Direction;
}travel1[11],temp;
void func_scan_travel_data(int );
void func_print_travel_data(int );
int main() {
    int num=0;
    printf("Enter Number of travelers : \n");
    printf(">>");scanf("%d",&num);
    func_scan_travel_data(num);
    func_print_travel_data(num);
    return 0;
}
void func_scan_travel_data(n){
    for (int i = 0; i < n ; ++i) {
        printf("Enter Tha name of Traveler %d\n",i+1);
        printf(">>");scanf("%s",travel1[i].Name);
        printf("_________________________________________________________________________\n");
        printf("Enter The Destination of Traveler [%d] :\n",i+1);
        printf(">>");gets(travel1[i].destinations);gets(travel1[i].destinations);
        printf("\n_______________________________________________________________________\n");
        printf("Enter The Direction of Traveler [%d] :\n",i+1);
        printf("The Direction : |'N'| North  , |'S'| South , |'E'|  East , |'W'| West )\n");
        printf(">>");scanf(" %c",&travel1[i].Direction);
        printf("\n_______________________________________________________________________\n");
        printf("Enter The Distance of  Traveler [%d] : (in km) \n",i+1);
        printf(">>");scanf(" %d",&travel1[i].distance);
        printf("\n_______________________________________________________________________\n");
        printf(" Enter the length of time the Traveler intends to stay (per day) :\n");
        printf(">>");scanf(" %d",&travel1[i].time);
    }


}
void func_print_travel_data(n){
    for (int i = 0; i <n ; ++i) {
        printf("\nThe Name Traveler %d is [%s] ",i+1,travel1[i].Name);
        printf("\tThe destination of Traveler [%d] is : [%s]",i+1,travel1[i].destinations);
        printf("\tThe Direction of Traveler [%d]  is : [%c] ",i+1,travel1[i].Direction);
        printf("\tThe Distance of Traveler [%d] is : [%d Km] ",i+1,travel1[i].distance);
        printf("\tThe duration of stay of Traveler [%d] is :[%d day]\n",i+1,travel1[i].time);
    }
    int k,l;
    for (k = 1; k < n; k++)
        for (k = 0; k < n - k; k++) {
            if (strcmp(travel1[k].destinations, travel1[k + 1].destinations) > 0) {
                temp = travel1[k];
                travel1[k] = travel1[k + 1];
                travel1[k + 1] = temp;
            }
        }
    printf("\n\n The (Sorted By Dst Name) List of Travelers   \n");
    for (l = 0; l < n; l++) {
        printf("\n|%s|\t\t|%s|\t\t|%d day|",travel1[l].Name,travel1[l].destinations,travel1[l].time);
    }


}