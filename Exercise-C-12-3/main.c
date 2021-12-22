//developed & programing by Faraz_Hmd
#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

/* Given a reference (pointer to pointer) to the head of a
   list and an int, inserts a new node on the front of the
   list. */
void push(struct Node** head_ref, int new_data)
{
    /* 1. allocate node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    /* 2. put in the data  */
    new_node->data = new_data;

    /* 3. Make next of new node as head and previous as NULL */
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    /* 4. change prev of head node to new node */
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    /* 5. move the head to point to the new node */
    (*head_ref) = new_node;
}

void deleteNode(struct Node** head_ref, int key)
{
    // Store head node
    struct Node *temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next; // Changed head
        free(temp); // free old head
        return;
    }

    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL)
        return;

    // Unlink the node from linked list
    prev->next = temp->next;

    free(temp); // Free memory
}

// This function prints contents of linked list starting
// from the given node

void printList(struct Node* node)
{
    struct Node* last;
    printf("\n Forward Direction LIST\n");
    while (node != NULL) {
        printf(" %d ", node->data);
        last = node;
        node = node->next;
    }

    printf("\nReverse Direction LIST : \n");
    while (last != NULL) {
        printf(" %d ", last->data);
        last = last->prev;
    }
}
void printList_After(struct Node* node) {

    while (node != NULL) {
        printf(" %d ", node->data);

        node = node->next;
    }
}
// Driver code
int main() {
    /* Start with the empty list */
    int  n=0,z=0;
    char ch;
    struct Node *head = NULL;
printf("How many Node You want create : \n");
printf(">>");scanf("%d",&n);
printf("\n=========================================================\n");
int a[n];
    for (int i = 0; i < n; ++i) {
        printf("Enter Number %d \n",i+1);
        printf(">>");scanf("%d",&a[i]);
        push(&head,a[i]);
    }

    printf("\n___________________________________________________________________\n");
    printList(head);
    printf("\n___________________________________________________________________\n");
    do {
        printf("Do you want del a node ?\n");
        printf("Y , N\n");
        printf(">>");
        scanf(" %c", &ch);
        switch (ch) {
            case 'N':
            case 'n':
                ch='y';
                return 0;

            case 'y':
            case 'Y':
                printf("Enter the node num to del \n");
                printf(">>");
                scanf("%d", &z);
                deleteNode(&head, z);
                printf("\nLinked List after Deletion of %d: \n", z);
                printList_After(head);
                ch='y';
                break;
            default:
                printf("INVALID INPUT \n\a");
                break;
        }
    }while (ch!='y');
    return 0;
}