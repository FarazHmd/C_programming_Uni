//developed && programming by Faraz Hmd
#include <stdio.h>
#include <string.h>
#include <io.h>
#include <windows.h>
#define Max_size_string 20
#define Max_num_string 3
 struct date_t{
    int production_date,purchase_date;         //struct of date
};
 struct tank_t{
    double Fuel_tank_flow,Fuel_tank_capacity;       // struct of Tank
};

 struct auto_t{
    char Company[Max_size_string];
     struct tank_t tank1;                      // struct of Cars type
     struct date_t date1;
 };

struct auto_t  auto1;
void func_scan_company( );         // scan func for cars type
void func_scan_tank();           // func scan type
void func_scan_date( );                 // scan date
void func_print_company();       //func print
void func_print_date();         //
void func_print_tank( );              //
void func_export_txt();              //

int main() {
    char sw;
func_scan_company();
func_scan_date();
func_scan_tank();
    do {
printf(" See Result in Console ['C'] \n");
printf("See Result as export to text file ['E']\n");
printf(">>");scanf("  %c",&sw);
    switch (sw) {
        case 'c':
            case 'C':
            func_print_company();
            func_print_date();
            func_print_tank();
            sw='c';
                break;
        case 'E':
            case 'e':
                func_export_txt();
                sw='c';
                break;
        default:
            printf("Invalid Input \n");
            printf("Please Select your chose from option \n");
            break;

    }}while (sw !='c');
    return 0;
}
void func_scan_company( ){
    printf("Enter the company name and model :   (like  mazda rx8 ) \n");
    printf(">>");gets(auto1.Company);
}
void func_scan_tank(){
    printf("Enter the flow : \n");
    printf(">>");scanf("%lf",&auto1.tank1.Fuel_tank_flow);
    printf("_______________________________________________\n");
    printf("Enter the Capacity : \n");
    printf(">>");scanf("%lf",&auto1.tank1.Fuel_tank_capacity);
    printf("________________________________________________\n");
}
void func_scan_date( ){
    printf("Enter The date production : \n");
    printf(">>");scanf("%d",&auto1.date1.production_date);
    printf("_____________________________________________________\n");
    printf("Enter the date purchase : \n");
    printf(">>");scanf("%d",&auto1.date1.purchase_date);
    printf("_____________________________________________________\n");

}
void func_print_company(){
    printf("\n_________________________________\n");
    printf("Company and model name   :");printf("%s",auto1.Company);
    printf("\n_________________________________\n");
}
void func_print_date(){
    printf("\n_________________________________\n");
    printf("\ndate production :");printf("%d",auto1.date1.production_date);
    printf("\ndate purchase   :");printf("%d",auto1.date1.purchase_date);
    printf("\n_________________________________\n");
}
void func_print_tank( ){
    printf("\n_________________________________\n");
    printf("\nThe flow  tank is   : %lf \n",auto1.tank1.Fuel_tank_flow);
    printf("\nThe tank capacity  is   : %lf\n",auto1.tank1.Fuel_tank_capacity);
    printf("\n_________________________________\n");
}
void func_export_txt(){
    char Comp[Max_size_string];
    double tank_f,tank_cap;
    int date_produc,date_purchase;
    strcpy(Comp,auto1.Company);
    tank_f=auto1.tank1.Fuel_tank_flow;
    tank_cap=auto1.tank1.Fuel_tank_capacity;
    date_produc=auto1.date1.production_date;
    date_purchase=auto1.date1.purchase_date;
    FILE *file1;
    file1 =fopen("Auto.txt","w");
    fprintf(file1,"Company name and model : %s\n",Comp);
    fprintf(file1,"date purchase : %d \n",date_purchase);
    fprintf(file1,"date production : %d \n",date_produc);
    fprintf(file1,"tank flow : %lf \n",tank_f);
    fprintf(file1,"tank capacity : %lf",tank_cap);
    fclose(file1);
    if (access("Auto.txt", F_OK) == 0) {
        printf("File %s created successfully \n","Auto.txt" );
    } else {
        printf("File %s not created successfully ! \a\n","Auto.txt");
    }
    system("Auto.txt");

}