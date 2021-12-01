//developed & programming by Faraz-hmd;
#include <stdio.h>
int error=0;
void sorter(  double number[5]);                  //prototype func    sorter1
void sorter2( double number[3] );                 //prototype func    sorter2
double Get_input1(double arr[5]   );                 //prototype func  get arrays element
double Get_input2(double arr[3]  );                   //prototype func get arrays element
void sorter3_copy( double result[] ,  double arr1[], double arr2[] );   //prototype func   sorter & copy value
int main() {
     double arr1[5];
     double arr2[3];
    double arr_result[6];


   printf("\nInput the array elements for array 1 : \n");

   Get_input1( arr1);                                                   //call func
   printf("___________________________________________\n");

   printf("\nInput the array elements for array 2 : \n");

    Get_input2(arr2);                                                   //call func
    printf("___________________________________________\n");
    printf ("\nAscending order of numbers for Array 1 \n");
    sorter(arr1);                                                       //call func
    printf("___________________________________________\n");
    printf ("\nAscending order of numbers for Array 2 \n");
    sorter2(arr2);                                                     //call func
    printf("___________________________________________\n");
    printf ("\n Array Result :   ");
    printf("Community of two arrays  & (No repeats duplicate numbers) >>\n ");
    sorter3_copy(arr_result,arr1,arr2);                                //call func

    return 0;
}

double Get_input1(double arr1[] ){
    int element,dup;



        for (element = 0; element < 5; element++) {
            do {
                error = 0;
                printf("Enter place %d> ", element);
                scanf("%lf", &arr1[element]);





//Search for duplicates
                if (element != 0) {
                    for (dup = element - 1; dup >=
                                            0; dup--)                /*In order to search for repeats, start comparing element to the element just before element (dup=element-1), and repeat this search again until you get to arr[0] ("dup-- >0;" OR "dup>=0;")  */
                    {
                        if (arr1[element] == arr1[dup]) {
                            printf("Checked for element=%u  dup=%u :  DUPLICATE!! \a\n", element, dup);
                            element--;
                        }
//For Debugging Purposes Only

                    }        //ends for(dup=element-1;dup-->0;)  loop
                }            //ends if(element !=0) loop

            } while (error);        //if duplicate detected than go back and ask/scan all over, but without adding 1 to element.
        }
    }

  double Get_input2(double arr1[3]){
    int element,dup;
    for(element=0;element<3;element++)
    {
        do
        {
            error = 0;
            printf("Enter place %d> ",element);
            scanf("%lf",&arr1[element]);

//Search for duplicates
            if(element !=0)
            {
                for(dup=element-1;dup>=0;dup--)                /*In order to search for repeats, start comparing element to the element just before element (dup=element-1), and repeat this search again until you get to arr[0] ("dup-- >0;" OR "dup>=0;")  */
                {
                    if(arr1[element]==arr1[dup])
                    {
                        printf("Checked for element=%u  dup=%u :  DUPLICATE!! \a\n",element,dup);
                          element--;
                    }
//For Debugging Purposes Only

                }        //ends for(dup=element-1;dup-->0;)  loop
            }            //ends if(element !=0) loop

        }while(error);        //if duplicate detected than go back and ask/scan all over, but without adding 1 to element.
    }

}

void sorter( double number[5]){
    int i ,j;
    double a;
    for (i=0; i<5; ++i)

    {

        for (j=i+1; j<5; ++j)

        {

            if (number[i] > number[j])

            {

                a= number[i];

                number[i] = number[j];

                number[j] = a;


            }

        }

    }


    for (i=0; i<5; ++i){
        printf("___________________________________________");
        printf ("\n%lf\n",number[i]);
        printf("___________________________________________");
    }

}
void sorter2( double number[3] ){

    int i ,j;
    double a;
    for (i=0; i<3; ++i)

    {

        for (j=i+1; j<3; ++j)

        {

            if (number[i] > number[j])

            {

                a= number[i];

                number[i] = number[j];

                number[j] = a;


            }

        }

    }


    for (i=0; i<3; ++i){
        printf("___________________________________________");
        printf ("\n%lf\n",number[i]);
        printf("___________________________________________");
    }

}

void sorter3_copy( double number[6] ,double arr1[5], double arr2[3] ){


    int i ,j;
    double a  ;
    int b;





        number[0]=arr1[0];
    number[1]=arr1[1];
    number[2]=arr1[2];
    number[3]=arr1[3];
    number[4]=arr1[4];
      // hard way   >>>          if (number[0]!=arr2[0] && number[1]!=arr2[0]&& number[2]!=arr2[0] && number[3]!=arr2[0] && number[4]!=arr2[0]) {
     /*   number[5] = arr2[0];
    } else if (number[0]!=arr2[1] && number[1]!=arr2[1]&& number[2]!=arr2[1] && number[3]!=arr2[1] && number[4]!=arr2[1]){
        number[5] = arr2[1];
    } else if (number[0]!=arr2[2] && number[1]!=arr2[2]&& number[2]!=arr2[2] && number[3]!=arr2[2] && number[4]!=arr2[2]){
        number[5] = arr2[2];
    }
*/

    for (int k = 0; k <=4 ; k++) {                         // Optimal way !!   ( easy way )
        for (int l = 0; l <3 ; ++l) {
            if (number[k] != arr2[l]  ){
                number[5] = arr2[l];

            }
        }
        }/*
    for (int i1 = 0; i1 < 6 ; ++i1) {
        for (int l1 = 0; l1 <6 ; ++l1) {
            if (number[i1] != arr1[l1]){

                number[result] = arr1[l1];

            }
        }1
    }*/
    for (i=0; i<6; ++i)

    {

        for (j=i+1; j<6; ++j)

        {

            if (number[i] > number[j])

            {

                a= number[i];

                number[i] = number[j];

                number[j] = a;


            }

        }

    }


    for (i=0; i<6; ++i){
        printf("___________________________________________");
        printf ("\n%lf\n",number[i]);
        printf("___________________________________________");
    }
    }









