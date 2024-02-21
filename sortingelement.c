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
    for(int i=0;i<n;i++){
        if(*(arr+i) > *(arr+i+1)){
            int temp = *(arr+i);
            (arr+i) = *(arr+i+1);
            arr+i+1 = temp;
        }
    }
    printf("\nThe sorted array is:");
    for(int i=0;i<n;i++){
        printf("%d\t",*(arr+i));
    }
    return 0;
}