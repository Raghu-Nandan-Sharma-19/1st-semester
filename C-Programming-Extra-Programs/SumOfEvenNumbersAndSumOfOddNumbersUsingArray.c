#include<stdio.h>
void main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int a[n],i,sum=0,sum1=0;
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        int sum=sum+a[i];
        if(a[i]%2==0)
        sum=sum+a[i];
        else
        sum1=sum1+a[i];
        }
        printf("Sum of even elements in array= %d",sum);
        printf("\nSum of odd elements in array= %d",sum1);
    }
