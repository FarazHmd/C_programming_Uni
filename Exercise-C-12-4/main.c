//developed & programing by Faraz_Hmd
//BST
#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *left, *right;
};


struct node* newNode(int item)
{
    struct node* temp
            = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}


void inorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("\t|%d|\t", root->key);
        inorder(root->right);
    }
}


struct node* insert(struct node* node, int key)
{

    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}


int main()
{
 int a=0;
    struct node* root = NULL;
    printf("Enter the head of tree \n");
    printf(">>");scanf("%d",&a);
    root = insert(root, a);
    int b[6];
    printf("\nEnter six number :\n");

    for (int i = 0; i <6 ; ++i) {
printf("Enter number %d\n",i+1);
printf(">>");scanf("%d",&b[i]);
        insert(root, b[i]);
    }


printf("\nThe Right Side of |%d| is Bigger & Left Side of |%d| is smaller \n",a,a);
    printf("\n______________________________________________________________________________________________________________\n");
    inorder(root);
    printf("\n______________________________________________________________________________________________________________\n");
    printf("\nJust Like a BST \n ");
    return 0;
}
