#include<stdio.h>

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void heapify(int arr[], int n, int i){
    int largest=i;
    /*let the root be largest*/
    int l=2*i+1;
    /*l is the left child*/
    int r=2*i+2;
    /*r is the right child*/

    if(l<n && arr[l]>arr[largest]){
        largest=l;
    }
    if(r<n && arr[r]>arr[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(&arr[i], &arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[], int n)
{
 
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
 
        heapify(arr, n, i);
 
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
 
        swap(&arr[0], &arr[i]);
 
        // Heapify root element
        // to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}
 

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 

int main()
{
    int arr[] = {12,100,-1,13,42,0,31,78 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    heapSort(arr, n);
    printf("Sorted array is\n");
    printArray(arr, n);
}
 