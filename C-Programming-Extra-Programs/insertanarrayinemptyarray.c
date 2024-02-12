//Program to insert an array in an empty array

#include<stdio.h>
void main(){
    int arr1[30],arr2[30],ele,num,i,loc;
    printf("enter the size of an array: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("Enter the elements arr[%d]: ",i);
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<num;i++){
        arr2[i]=arr1[i];
    }
    for(i=0;i<num;i++){
        printf("%d\t",arr2[i]);
    }
    for(i=num-1;i>=0;i--){
        printf("%d\t",arr1[i]);
    }
}