#include <stdio.h>
#include <stdlib.h>
#define INPUT_FILE      "input.txt"
#define OUTPUT_FILE     "output.txt"

int main()
{
    int i;
    int upper=0,lower=0;
    char ch[100];

    printf("Enter the String:\n");
    gets(ch);


    //  1.Create a File & open that .
    FILE *inputFile = fopen(INPUT_FILE, "w");
    fprintf(inputFile,"%s\n",ch);
    fclose(inputFile);
     inputFile = fopen(INPUT_FILE, "rt");
    if (NULL == inputFile) {
        printf("ERROR: cannot open the file: %s\n", INPUT_FILE);
        return -1;
    }

    // 2. Open another file
    FILE *outputFile = fopen(OUTPUT_FILE, "wt");
    if (NULL == inputFile) {
        printf("ERROR: cannot open the file: %s\n", OUTPUT_FILE);
        return -1;
    }
    for(i=0; ch[i]!=0; i++){

        if(ch[i]>='A' && ch[i]<='Z'){
            upper++;
            fprintf(outputFile,"%c\t",ch[i]);
        }
        else if(ch[i]>='a' && ch[i]<='z'){
            lower++;
        }
    }


    printf("Lowercase letters: %d",lower);
    printf("\nUppercase letters: %d",upper);

    // 6. Close all file handles
    fclose(inputFile);
    fclose(outputFile);
    system(OUTPUT_FILE);

    return 0;
}