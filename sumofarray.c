#include <stdio.h>

int main(){
    int sum=0,n;

    printf("Enter the size of the array:");
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    printf("Enter the elements of the array:");

    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
        sum += *(arr+i);
    }
    for(int i=0;i<n;i++){
        printf("%d\t",*(arr+i));
    }
    printf("\nSum of the array:%d",sum);
    free(arr);
    
    return 0;

}
