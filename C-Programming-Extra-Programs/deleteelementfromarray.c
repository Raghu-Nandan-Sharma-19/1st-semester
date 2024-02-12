//Program to delete the element from an array

#include<stdio.h>
void main(){
    int arr[30],num,i,loc;
    printf("\n enter the size of an array: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("enter the elements arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    //read the location delete
    printf("enter the location to delete: ");
    scanf("%d",&loc);
    while(loc<num){
        arr[loc-1]=arr[loc];
        loc++;
    }
    num--;
    //print the array
    for(i=0;i<num;i++){
        printf("%d  ",arr[i]);
    }
}