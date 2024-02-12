#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a&1)
    {
        printf("odd\n");
    }
    else
    {
        printf("even\n");
    }
    return 0;
}