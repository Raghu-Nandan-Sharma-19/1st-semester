//Write a program to calculate factorial of a given number using while loop//

#include <stdio.h>
int main()
{
    int num,i=1,fact=1;
    printf("Enter the number:");
    scanf("%d",&num);
    while(i<=num)
    {
        fact*=i;
        i++;
    }
    printf("Factorial of the number is: %d\n",fact);
    return 0;
}
