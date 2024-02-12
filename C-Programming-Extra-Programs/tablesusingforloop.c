#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter the value to generate table:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        j=num*i;
        printf("%d*%d=%d\n",i,num,j);
    }
    return 0;
}