//S3R2-55 Siby C R  Sorting

#include<stdio.h>
#include<stdlib.h>
int n,A[50];

void bubble_sort(){
    int i,j,t;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(A[j]>A[j+1]){
                t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
}

void selection_sort(){
    int i,j,t;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(A[i]>A[j]){
                t=A[i];
                A[i]=A[j];
                A[j]=t;
            }
        }
    }
}

void insertion_sort(){
    int i,j,key;
    for(i=1; i<n; i++){
        key=A[i];
        j=i-1;
        while(j>=0 && A[j]>key){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
    }
}

void createArray(){
    int i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
}

void display(){
    int i;
    printf("Sorted array:\n");
    for(i=0; i<n; i++)
        printf("%d\t", A[i]);
    printf("\n");
}

void main(){
    int i,ch;
    do{
        printf("****MENU****\n 1.Bubble Sort\n 2.Selection Sort\n 3.Insertion Sort\n 4.Exit\n************\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: createArray();
                    bubble_sort();
                    display();
                    break;
            case 2: createArray();
                    selection_sort();
                    display();
                    break;
            case 3: createArray();
                    insertion_sort();
                    display();
                    break;
            case 4: printf("\nProgram Terminated...\n");
                    exit(1);
            default: printf("Enter a valid choice");
        }
    } while(ch!=4);
}