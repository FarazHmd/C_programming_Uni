//developed & programming by Faraz-Hmd;
#include <stdio.h>
double storage_calc(double ,double ,double ,double ,double );                                    //prototype  function : calculating the space storage ;

int main() {
    double  GB,Music_file, pic_file, doc_file, text_file;                                         // var for our item ;

    do {                                                                                          // loop to check if user enter right input ;
        printf("please enter your storage space (According to GB) >> \n");
        scanf("%lf", &GB);
        if (GB < 1) {
            printf("Invalid Input Detected !!\a\n");
        while (getchar() == '\n');
    }}while (GB<1);
    do {                                                                                           // loop to check if user enter right input ;
        printf("please enter how much you have Music file ? >> \n");
        scanf("%lf", &Music_file);
        if (Music_file < 1) {
            printf("Invalid Input Detected !!\a\n");
            while (getchar() == '\n');
        } }while (Music_file<1);

    do {                                                                                          // loop to check if user enter right input ;
        printf("please enter how much you have picture file ? >> \n");
        scanf("%lf", &pic_file);
        if (pic_file < 1) {
            printf("Invalid Input Detected !!\a\n");
            while (getchar() == '\n');
        } } while (pic_file<1);
    do {                                                                                        // loop to check if user enter right input ;
        printf("please enter how much you have document file ? >> \n");
        scanf("%lf", &doc_file);
        if (doc_file < 1) {
            printf("Invalid Input Detected !!\a\n");
            while (getchar() == '\n');
        } } while (doc_file<1);
        do {                                                                                    // loop to check if user enter right input ;
            printf("please enter how much you have text file ? >> \n");
            scanf("%lf", &text_file);
            if (text_file < 1) {
                printf("Invalid Input Detected !!\a\n");
                while (getchar() == '\n');
            }}while (text_file<1);
        storage_calc(GB, Music_file, pic_file, doc_file, text_file);
        return 0;
}
double storage_calc(double GB,double m ,double p,double d,double t){                                                 //our func
double space1 , files=0,space2,space3,space4;                                                                      // some var to Relate the variables
files = (files + 1000) ;                                                           // make the GB var to real Gigabyte (1024) but here we set to 1000 to make it easy
    (files*=GB);
    char ch1[3] = "GB";
char ch2[3] = "MB";

    space1=m*3;
    files=files-space1;                                                           // We subtract Music files from GB

    space2=p*4;
    files=files-space2;                                                           // We subtract pic files from GB

    space3=d*10;
    files=files-space3;                                                          // We subtract doc files from GB

    space4=t*2;
    files=files-space4;                                                          // We subtract txt files from GB

    printf("\nif we Assuming  that each music file is 3 megabytes   then : \n");
    printf("\nthe space of music files is  >>  %lf %s \n",space1,ch2);
    printf("\nif we Assuming  that each picture  file is 4 megabytes   then : \n");
    printf("\nthe space of picture files is  >>  %lf %s \n",space2,ch2);
    printf("\nif we Assuming  that each document file is 10 megabytes   then : \n");
    printf("\nthe space of document files is  >>  %lf %s \n",space3,ch2);
    printf("\nif we Assuming  that each text  file is 2 megabytes   then : \n");
    printf("\nthe space of text files is  >>  %lf %s \n",space4,ch2);
    printf("\n________________________________________________________________________\n");
    printf("\nyour storage in GB  without files  is   : %lf%s \n",GB,ch1);
    printf("\nAnd with files you have : %lf %s    free  \n" ,files,ch2  );

}