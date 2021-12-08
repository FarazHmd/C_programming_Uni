//developed & programming by Faraz_Hmd
#include <stdio.h>
#include <string.h>
#define Max_size 10
void merge(int arr[], int l, int m, int r);           // func to marge 
void mergeSort(int arr[], int l, int r);            // func marge and sort the element
void printArray(int A[], int size);           //func printing arrays element
int main() {
    int num_1[Max_size],num_2[Max_size];
    printf("\n__________________________________________________\n");
    printf("\nEnter %d Elements for Array 1 \n",Max_size);
    printf("\n__________________________________________________\n");
    for (int i = 0; i < Max_size; ++i) {
        printf("number %d >>", i + 1 );scanf("%d", &num_1[i]);
    }
    printf("\n__________________________________________________\n");
    printf("\nEnter %d Elements for Array 2 \n",Max_size);
    printf("\n__________________________________________________\n");
    for (int j = 0; j < Max_size; ++j) {
        printf("number %d >>", j + 1 );scanf("%d", &num_2[j]);
    }
    int arr_size = sizeof(num_1) / sizeof(num_1[0]);
    printf("\nGiven array 1 is \n");
    printArray(num_1, arr_size);

    mergeSort(num_1, 0, arr_size - 1);
    printf("\nSorted array 1 is \n");
    printArray(num_1, arr_size);

    int arr2_size = sizeof(num_2) / sizeof(num_2[0]);
    printf("\nGiven array 2is \n");
    printArray(num_2, arr2_size);

    mergeSort(num_2, 0, arr2_size - 1);

    printf("\nSorted array 2 is \n");
    printArray(num_2, arr2_size);

    return 0;
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
    are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}