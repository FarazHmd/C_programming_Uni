//developed and programming by Faraz.Hmd;
#include <stdio.h>

int main() {
    int age, weight;
    printf("\nEnter your age to se your Weekly sports program  >>  \n ");
    scanf("%d", &age);
    printf("\nEnter your Weight to se your Weekly sports program  >>  \n ");
    scanf("%d", &weight);
    if (age > 1 && age <= 29 && weight > 10 && weight <= 60) {
        printf("1:Mountaineering once a week \n ");
        printf("2: two hours of exercise a day \n");
        printf("3:Volleyball or basketball 1 times a week\n");
        printf("4:and The most important thing in every day is playing chess !! \n");

    } else if (age > 1 && age <= 29 && weight > 60 && weight <= 80) {
        printf("1: Mountaineering twice a week \n ");
        printf("2: four hours of exercise a day \n");
        printf("3: Volleyball or basketball 2 times a week\n");
        printf("4: 3 hours of tennis per week\n");
        printf("5: Pool twice a week\n");
        printf("6: and The most important thing in every day is playing chess !!\n");
    } else {
        if (age > 29 && age <= 39 && weight > 10 && weight <= 60) {
            printf("1:Mountaineering once a week  \n ");
            printf("2: an hour and a half of exercise a day \n");
            printf("3:Light diet\n");
            printf("4: Pool twice a week\n");
            printf("5:and The most important thing in every day is playing chess !!\n");
        } else {
            if (age > 29 && age <= 39 && weight > 60 && weight <= 80) {
                printf("1:Mountaineering once a week  \n ");
                printf("2: an hour and a half of exercise a day \n");
                printf("3:Heavy diet\n");
                printf("4: Pool twice a week\n");
                printf("5:and The most important thing in every day is playing chess !!\n");
            } else {
                if (age > 39 && age <= 49 && weight > 10 && weight <= 60) {
                    printf("1: Mountaineering 2 times a month\n ");
                    printf("2: 1 hour  of exercise a day \n");
                    printf("3: Pool three times a week\n");
                    printf("4:Walk twice a week\n");
                    printf("5:and The most important thing in every day is playing chess !!\n");

                } else {
                    if (age > 39 && age <= 49 && weight == 80 ) {
                        printf("1: Mountaineering 3 times a month \n ");
                        printf("2: 1 hour  of exercise a day \n");
                        printf("3: Pool three times a week\n");
                        printf("4:Walk twice a week\n");
                        printf("5:and The most important thing in every day is playing chess !!\n");

                    } else {
                        if (age > 49 && age <= 59 && weight > 10 && weight <= 60) {
                            printf("1: 1 hour  of Flexibility Exercises a day \n ");
                            printf("2: 1 hour  of exercise a day \n");
                            printf("3: Pool 2 times a week\n");
                            printf("4: Walk everyday \n");
                            printf("5:Medium diet\n");
                            printf("6:and The most important thing in every day is playing chess !!\n");
                        } else if (age > 49 && age <= 59 && weight >59 && weight <= 89){
                            printf("1: 1 hour  of Flexibility Exercises a day \n ");
                            printf("2: 1 hour  of exercise a day \n");
                            printf("3: Pool 2 times a week\n");
                            printf("4: Walk everyday \n");
                            printf("5:Medium diet\n");
                            printf("6:and The most important thing in every day is playing chess !!\n");

                        } else {
                            printf("1:  Flexibility Exercises 1 times in a day \n ");
                            printf("2: 1 hour  of exercise a day \n");
                            printf("3: Pool 2 times a week\n");
                            printf("4: Walk everyday \n");
                            printf("5:Medium diet\n");
                            printf("6:Mountaineering once a week\n");
                            printf("7:and The most important thing in every day is playing chess !!\n");
                        }
                    }
                }
            }
        }
        return 0;
    }
}
