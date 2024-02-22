#include <stdio.h>

int main(){
    int n,num;

    printf("Enter the size of the array:");
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    printf("\nEnter the elements of the array:");

    for(int i=0;i<n;i++){
        scanf("%d",arr+i);        
    }
    printf("\nEnter the array element to check:");
    scanf("%d",&num);

    for(int i=0;i<n;i++){

        if(num == *(arr+i)){
        printf("The array element is found at position %d",i+1);
        break;
        }

    }
    free(arr);
    return 0;
}

    
