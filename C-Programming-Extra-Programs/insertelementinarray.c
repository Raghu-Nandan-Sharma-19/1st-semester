//Progra to insert an element in an array

#include<stdio.h>
void main(){
    int arr[30],ele,num,i,loc;
    printf("enter the size of an array: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("Enter the elements arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d",&ele);
    printf("Enter the location: ");
    scanf("%d",&loc);
    for(i=num;i>=loc;i--){
        arr[i]=arr[i-1];
    }
    num++;
    arr[loc-1]=ele;
    //print the result after insert
    for(i=0;i<num;i++){
        printf("\n %d",arr[i]);
    }
}