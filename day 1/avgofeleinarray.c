#include <stdio.h>

int main(){
    int sum=0,avg,n;

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
    avg=sum/n;
    printf("\nSum of the array:%d",sum);
    printf("\nAverage of the array:%d",avg);
    free(arr);
    
    return 0;

}
