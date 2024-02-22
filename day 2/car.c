#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    int price;    
};

int main(){
    struct book my_book[3];
    for(int i=0;i<3;i++){
    printf("Enter the title of %dst/nd/rd book:\n",i+1);
    scanf("%s",my_book[i].title);
    printf("Enter the author name of %dst/nd/rd book:\n",i+1);
    scanf("%s",my_book[i].author);
    printf("Enter the price of %dst/nd/rd book:\n",i+1);
    scanf("%d",&my_book[i].price);
    }
    printf("\n\n");
    
    int min=0,max=0;
    for(int i=0;i<3;i++){
        if(min > my_book[i].price){
            min = i;
        }
        if(max<my_book[i].price){
            max = i;
        }
    }
    printf("\n\n");

    printf("The most expensive book is %s",my_book[max].title);
    printf(", written by %s.",my_book[max].author);
    printf("It costs $%d.\n",my_book[max].price);

    printf("The cheapest book is %s",my_book[min].title);
    printf(", written by %s.",my_book[min].author);
    printf("It only costs $%d.\n",my_book[min].price);

    return 0;
}