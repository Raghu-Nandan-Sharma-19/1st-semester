//Program to calculate maximum of n numbers using forloop

#include<stdio.h>
int main()
{
    int n,max=0;
    printf("Enter the following number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("Enter the value %d:",i);
        int value;
        scanf("%d",&value);
        if(value>max)
        {
            max=value;
        }
    }
    printf("The maximum value is: %d\n",max);
    return 0;
}