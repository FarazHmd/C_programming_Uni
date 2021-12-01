//developed & programming by Faraz-Hmd
#include <stdio.h>
#define Col 10                                                 //define for Columns and rows
#define Row 10
int main(void)
{
    int r ,c;
    int Num_Table[Col][Row];                                           //the 2D array
    printf("____________________________\n");
    printf(" Multiplication Table  \n");
    printf("____________________________\n");
    printf("\n");

    for (int j = 1; j <=Col ; ++j) {                              //for loop to print 0 to 10 from left to right
      printf("    %4d  ",j);
    }
    printf("\n____________________________________________________________________________");
    printf("_________________________\n");

    for (int i = 0; i <Row ; ++i) {                                      //for loop to print 0 to 10 Bottom-up
        r=i+1;
        printf("%2d ",r);
        for (int j = 1; j <=Col ; ++j) {
            c=j;
            Num_Table[i][j]=r*c;
            printf("|");
            printf("  %4d  ",Num_Table[i][j]);                 // print table
            printf("|");
        }
        printf("\n");
    }
    return 0;
}