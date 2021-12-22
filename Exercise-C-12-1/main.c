//developed & programing by Faraz_Hmd
#include <stdio.h>
#include "STACK/stack.c"
#define num_size 10
int main() {
    struct StackNode* root = NULL;
    int num[num_size];
    int n;
    printf("how much number you want push to stack : \n ");
    printf(">>");scanf("%d",&n);
    for (int i = 0; i <n ; ++i) {
        printf("Number %d\n",i+1);
        printf(">>");scanf("%d",&num[i]);
        push(&root,num[i] );
    }
   printf("\n_________________________________________________________________________________________________\n");
    printf("|%d| popped from stack\n", pop(&root));
    printf("Top element is |%d|\n", peek(root));

    return 0;
}
