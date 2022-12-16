//S3R2-55 Siby C R  Binary Search

#include<stdio.h>
void main(){
    int search, max, i, Arr[50], first, last, mid;
    printf("Enter the size of the array: ");
    scanf("%d", &max);
    printf("\nEnter the elements: ");
    for(i=0; i<max; i++)
        scanf("%d", &Arr[i]);
    printf("\nEnter the value to be searched: ");
    scanf("%d", &search);

    first = 1;
    last = max;
    while(first <= last){
        mid = (first+last)/2;
        if(Arr[mid] == search){
            printf("\nElement found at position %d\n", mid+1);
            break;
        }
        else if(Arr[mid] > search)
            last = mid-1;
        else
            first = mid+1;
    }
    if(first > last)
        printf("\nElement not found\n");
}