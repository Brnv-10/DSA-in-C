#include<stdio.h>

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void quicksort(int arr,int n){
    int i=0;
    int j=0;

    for(i=0;i<n-1;i++){
        if(arr[i]<arr[n-1]){
            j++;
        }
        else{
            swap(arr[i],arr[j])
        }
    }
    return 0;
}

int main(){
    int arr[100];
    int n;
    printf("enter the number of elements u want in the array");
    scanf("%d",7n);

    for(int i=0;i<n-1;i++){
        printf("enter %d element",n);
        scanf("%d",&arr[i]);
    }
    quicksort(arr,n);
    

}