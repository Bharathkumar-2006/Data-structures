#include <stdio.h>
#include <stdlib.h>

int main(){
    int omulti=1,emulti=1,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));

    printf("\nEnter the elements of the array:");
     for(int i=0;i<n;i++){
        scanf("%d",arr+i);
        if(*(arr+i)%2==0){
            emulti *= *(arr+i);
        }else{
            omulti *= *(arr+i);
        }
    }
    printf("Odd multiplication:%d\n",omulti);
    printf("Even multiplication:%d\n",emulti);

    free(arr);
    return 0;

}