//Program to accessing array

#include <stdio.h>
void main(){
    int arr[]={1,22,35,5,4,6,8};
    int i;
    for(i=0;i<7;i++){
        printf("%d %d %d %d",arr[i],*(i+arr),*(arr+i),i[arr]);
    }
}