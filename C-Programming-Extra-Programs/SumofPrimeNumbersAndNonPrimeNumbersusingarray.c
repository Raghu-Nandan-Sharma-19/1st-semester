#include<stdio.h>
void main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    int a[n],i,sum=0,sum1=0;
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        int flag=0,j;
        for(j=2;j<=a[i]/2;j++){
            if(a[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0)
        sum=sum+a[i];
        else
        sum1=sum1+a[i];
    }
    printf("Sum of prime numbers= %d",sum);
    printf("\nSum of Non Prime numbers= %d",sum1);
}

