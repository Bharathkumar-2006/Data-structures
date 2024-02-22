#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int *arr1 = (int*)malloc(n*sizeof(int));
    int *arr2 = (int*)malloc(n*sizeof(int));
    int *arr3 = (int*)malloc(n*sizeof(int));

    printf("Enter the elements of the first array:");
    for(int i=0;i<n;i++){
        scanf("%d",arr1+i);              
    }

    printf("\nEnter the elements of the second array:");
    for(int i=0;i<n;i++){
        scanf("%d",arr2+i);  
        *(arr3+i)= *(arr1+i) + *(arr2+i);            
    }
    printf("The sum of two array elements:");
    for(int i=0;i<n;i++){
        printf(" %d\t",*(arr3+i));
    }
    free(arr1);
    free(arr2);
    free(arr3);
    return 0;
    
}