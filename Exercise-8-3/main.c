//developed & programming by Faraz_hmd;
#include <stdio.h>
#define Max_Num 15
// Decimal to binary conversion
// using recursion
int find( long int number);

int main()
{
    int number[Max_Num],n=0 ;
    do {

    printf("\nThe Maximum is : %d\n",Max_Num);
    printf("Enter number of numbers >> "),
    scanf("%d",&n);
    if (n < 1 || n > Max_Num) {
        printf("\nInvalid Input Detected !!\a\n");
        printf("\tOR\n");
        printf("\nInput beyond the allowed limit !\n");
        while (getchar() == '\n');
    }}while (n < 1 || n > Max_Num);
    printf("\nHint : The Maximum number program can calculate is 512 !!! (To convert Decimal to binary) \n\a");

    for (int i = 0; i <n ; ++i) {

        printf("\nEnter %d number \n",n-i);
        printf("num %d >>",i);scanf("%d",&number[i]);

    }
    for (int j = 0; j <n ; ++j) {
        printf("\n____________________________________________________\n");
        printf("\n The binary Of  %d = %d\n",number[j], find(number[j]));
        printf("\n____________________________________________________\n");
    }

    return 0;
}
int find( long int number)
{
    if (number == 0)
        return 0;
    else
        return (number % 2 + 10 *find(number / 2));
}