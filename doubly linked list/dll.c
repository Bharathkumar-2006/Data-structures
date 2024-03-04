#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

insert_end(struct node**q,int d){
	while(q->next != NULL){
		q = q->next;
	}
	q->
}

int main(){

    struct node *head;
	int num;
    printf("Enter 1 for inserting a node at end or 2 for displaying the linked list\n");
	scanf("%d",&num);

    switch(num){
		case 1:
		insert_end(&head,num);
		break;
		case 2:
		display(&head);
		break;
		default:
		printf("Invalid input");
		break;
	}
    return 0;
}