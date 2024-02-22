#include <stdio.h>
#include <stdlib.h>

int main(){
    int osum=0,esum=0,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(int));

    printf("\nEnter the elements of the array:");
     for(int i=0;i<n;i++){
        scanf("%d",arr+i);
        if(*(arr+i)%2==0){
            esum += *(arr+i);
        }else{
            osum += *(arr+i);
        }
    }
    printf("Odd sum:%d\n",osum);
    printf("Even sum:%d\n",esum);

    free(arr);
    return 0;

}