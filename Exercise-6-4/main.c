//developed & programming by Faraz-Hmd;
#include <stdio.h>
void Select_Sort(double array[],int n);                                                      //sorter prototype func
int main()
{
    double array[100] ;                     //our arrays we set size to 100 but we can set any size because its temp now
    int n=0,i;                                                 //var for loop and size array

do{                                                                       //do while to check input if is number !
        printf("Enter Size of elements >> \n");
        printf(":");
        scanf("%d", &n);                                             // get real array size
    if (n < 1) {
        printf("Invalid Input Detected !!\a\n");
        while (getchar() == '\n');
    }}while (n < 1);
    printf("Enter %d Numbers\n", n);
    for(i = 0; i < n; i++) {

        printf("The place number %d :  ", i);                                 //gets elements
        scanf("%lf", &array[i]);
    }
    Select_Sort(array,n);                          //call func
    return 0;

}
void Select_Sort(double array[], int n)                                //the sorter func ( selection sort )
{
    int i, j, position, swap;                                        // var for loop and temp position & swap
    for(i = 0; i < (n - 1); i++)
    {
        position=i;                                                   // copy i value to temp (position)
        for(j = i + 1; j < n; j++)
        {
            if(array[position]>array[j])
                position=j;                                        // copy j value to temp (position)
        }
        if(position != i)
        {
            swap=array[i];                                         // copy array [i] to swap
            array[i]=array[position];                             // copy array [position ] to array [i]
            array[position]=swap;                                 // copy array swap to array [position ]
        }
    }
    printf("\nSorted Array:\n");
    for(i = 0; i < n; i++){
        printf("___________________________\n");
printf("\n>>");printf("  %lf", array[i]);printf("\t<<\n");
        printf("___________________________\n");
}
}