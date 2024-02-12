#include<stdio.h>
int main()
{
    int a,b,sum,difference,multiplication,remainder;

    printf("Enter the value of A And B");
    scanf("%d %d",&a,&b);

    sum=a+b;
    printf("Sum is: %d\n",sum);
    difference=a-b;
    printf("Difference is: %d\n",difference);
    multiplication=a*b;
    printf("Product is: %d\n",multiplication);
    remainder=a%b;
    printf("After Division: %d\n",remainder);

    return 0;
}