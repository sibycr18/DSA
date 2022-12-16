#include<stdio.h>
#include <stdlib.h>
struct node{
    int coeff;
    int exp;
    struct node *link;
}*ptr1, *ptr2, *new, *first;
void main(){
    int degree, i, temp;

    printf("Enter degree of 1st polynomial: ");
    scanf("%d", &degree);
    for(i=degree; i>=0; i--){
        new = (struct node *)malloc(sizeof(struct node));
        if(first == NULL)
            first = new;
        ptr1 = first;
        while(ptr1->link!=NULL)
            ptr1 = ptr1->link;
        printf("Enter coefficient of x^%d: ", i);
        scanf("%d", &temp);
        if(temp!=0){
            new->coeff = temp;
            new->exp = i;
            new->link = NULL;
            if(ptr1!=new)
                ptr1->link = new;
        }
    }

    printf("Enter degree of 2 polynomial: ");
    scanf("%d", &degree);
    for(i=degree; i>=0; i--){
        new = (struct node *)malloc(sizeof(struct node));
        if(first == NULL)
            first = new;
        ptr1 = first;
        while(ptr1->link!=NULL)
            ptr1 = ptr1->link;
        printf("Enter coefficient of x^%d: ", i);
        scanf("%d", &temp);
        if(temp!=0){
            new->coeff = temp;
            new->exp = i;
            new->link = NULL;
            if(ptr1!=new)
                ptr1->link = new;
        }
    }
}