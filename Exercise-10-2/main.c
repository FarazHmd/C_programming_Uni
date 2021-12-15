#include <stdio.h>
#include <stdlib.h>


int main()
{
    char ch;
FILE *File1,*File2,*File3;
File1=fopen("File1.txt","w");
fprintf(File1,"\n_____________________________________________________________________________________\n");
fprintf(File1,"\nA binary file is a file whose content must be interpreted by a program or a hardware processor that understands in advance exactly how it is formatted. ... "
              "Programmers often talk about an executable program as a binary and will ask another programmer to send me the binaries.\n"
              "(A synonym for this usage is object code .)\n");
fprintf(File1,"\n_____________________________________________________________________________________\n");
fclose(File1);
File2=fopen("File2.txt","w");
fprintf(File2,"\nIn computing, a null pointer or null reference is a value saved for indicating"
              " that the pointer or reference does not refer to a valid object. ... "
              "It might compare equal to other, valid pointers; "
              "or it might compare equal to null pointers."
              " It might do both at different times;"
              " or the comparison might be undefined behaviour.\n");
    fprintf(File2,"\n_____________________________________________________________________________________\n");
fclose(File2);
File1=fopen("File1.txt","r");
File2=fopen("File2.txt","r");
    if (File1 == NULL || File2 == NULL)
    {
        perror("Error ");
        printf("Press any key to exit...\n");
        exit(EXIT_FAILURE);
    }
File3=fopen("File3.txt","w");
    while ((ch = fgetc(File1)) != EOF)
        fputc(ch,File3);

    while ((ch = fgetc(File2)) != EOF)
        fputc(ch,File3);

    printf("The two files were merged into |%s| file successfully.\n", "File3.txt");

    fclose(File1);
    fclose(File2);
    fclose(File3);
    system("File3.txt ");




    return 0;
}
