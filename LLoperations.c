//S3R2-55 Siby C R  LL Operations

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
}*first,*new,*ptr,*temp;

void insert_end(){
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element: ");
    scanf("%d",&new->data);
    printf("\n%d is inserted at the end\n",new->data);
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

void insertion_after(){    //after a given node
    int DATA;
    if(first==NULL){
        printf("\nList is empty...\n");
        return;
    }
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to insert: ");
    scanf("%d",&new->data);
    printf("Enter value after which to insert: ");
    scanf("%d",&DATA);
    ptr=first;
    while(ptr->data!=DATA)
        ptr=ptr->link;
    new->link=ptr->link;
    ptr->link=new;
}

void insertion_before(){    //before a given node
    int DATA;
    if(first==NULL){
        printf("\nList is empty...\n");
        return;
    }
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element to insert: ");
    scanf("%d",&new->data);
    printf("Enter value before which to insert: ");
    scanf("%d",&DATA);
    ptr=first;
    while(ptr->data!=DATA){
        temp=ptr;
        ptr=ptr->link;
    }
    temp->link=new;
    new->link=ptr;
}

void insert_beginning(){
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element: ");
    scanf("%d",&new->data);
    printf("\n%d is inserted at the beginning\n",new->data);
    new->link=first;
    first=new;
}

void delete_end(){
    if(first==NULL){
        printf("\nList is empty...\n");
        return;
    }
    ptr=first;
    while (ptr->link!=NULL)    {
        temp=ptr;
        ptr=ptr->link;
    }
    if(ptr!=first)
        temp->link=NULL;
    else
        first=NULL;
    free(ptr);
}

void delete_between(){
    int DATA;
    if(first==NULL){
        printf("\nList is empty...\n");
        return;
    }
    printf("Enter value before which to insert: ");
    scanf("%d",&DATA);
    ptr=first;
    while(ptr->data!=DATA){
        temp=ptr;
        ptr=ptr->link;
    }
    temp->link=ptr->link;
    free(ptr);
}

void delete_beginnng(){
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
		printf("\n******MENU****** \n1:Insert at Beginning \n2:Insert at End \n3:Insert before a node \n4:Insert after a node \n5:Delete at Beginnng \n6:Delete in Between \n7:Delete at End \n8:Display \n9:EXIT\n**************** \n\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: insert_beginning();
					break;
			case 2: insert_end();
					break;
			case 3: insertion_before();
					break;
            case 4: insertion_after();
                    break;
            case 5: delete_beginnng();
                    break;
            case 6: delete_between();
                    break;
            case 7: delete_end();
                    break;
            case 8: display();
                    break;
			case 9: printf("\nProgram Terminated...\n");
                    exit(1);
			default:printf("\nWrong choice.... Try again\n");
		}
	}while(ch!=9);
}