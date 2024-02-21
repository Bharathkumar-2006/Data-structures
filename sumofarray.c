#include <stdio.h>

int main(){
    int sum=0;
    int *arr = (int*)malloc(5*sizeof(int));

    printf("Enter the elements of the array:");

    for(int i=0;i<5;i++){
        scanf("%d",arr+i);
    }
    for(int i=0;i<5;i++){
        printf("%d\t",*(arr+i));
    }
    return 0;

}
