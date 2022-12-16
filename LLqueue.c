//S3R2 55 - Siby C R
//Queue using Linked List

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
}*first,*new,*ptr,*temp;

void insert(){
    new = (struct node *)malloc(sizeof(struct node));
    if(new==NULL){
        printf("\nNo memory...\n");
        return;
    }
    printf("Enter the element: ");
    scanf("%d",&new->data);
    printf("\n%d is inserted\n",new->data);
    if (first==NULL){
        first=new;
        first->link=NULL;
    }
    else{
        ptr=first;
        while (ptr->link!=NULL)
            ptr=ptr->link;
        ptr->link=new;
        new->link=NULL;
    }
}

void delete(){
    if(first==NULL){
        printf("\nList is empty...\n");
        return;
    }
    ptr=first;
    first=first->link;
    free(ptr);
}


void display(){
    if(first==NULL){
        printf("\nList is empty...\n");
        return;
    }
    ptr=first;
    printf("\n");
    while (ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->link;
    }
    printf("\n");
}

void main(){
    int ch;
    do{
		printf("\n******MENU****** \n1:INSERT \n2:DELETE \n3:DISPLAY\n4:Exit \n**************** \n\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: insert();
					break;
			case 2: delete();
					break;
			case 3: display();
					break;
			case 4: printf("\nProgram Terminated...\n");
                    exit(1);
			default:printf("\nWrong choice.... Try again\n");
		}
	}while(ch!=4);
}