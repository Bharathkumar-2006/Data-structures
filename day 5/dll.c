#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev, *next;
};

void create(struct node **q, int data){
    struct node *nn;
    nn = (struct node*)malloc(sizeof(struct node));
    nn->next = nn->prev= NULL;
    nn->data=data;
    if(*q==NULL){
        *q =nn;
    }    
    printf("%d",nn->data);
}

int main(){

    struct node *head = NULL;
    create(&head,11);    
}