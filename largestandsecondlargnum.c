#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Enter the size of the array:");
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    printf("Enter the elements of the array:");

    for(int i=0;i<n;i++){
        scanf("%d",arr+i);        
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    
    printf("The first and second largest number in the array is %d and %d.",*(arr+n-1),*(arr+n-2));
    return 0;
}