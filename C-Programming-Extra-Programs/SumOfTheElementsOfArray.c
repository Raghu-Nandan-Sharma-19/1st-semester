#include <stdio.h>
void main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n],i,sum=0;
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of the array= %d",sum);
}