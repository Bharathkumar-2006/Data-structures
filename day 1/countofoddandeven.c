#include <stdio.h>
#include <stdlib.h>

int main(){
    int odd=0,even=0,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));

    printf("\nEnter the elements of the array:");
     for(int i=0;i<n;i++){
        scanf("%d",arr+i);
        if(*(arr+i)%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("Odd count:%d\n",odd);
    printf("Even count:%d\n",even);

    free(arr);
    return 0;

}