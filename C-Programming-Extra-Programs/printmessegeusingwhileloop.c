//Print "I am learning C programming" for 'n' number of times using for loop

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter the number of times you want messege to be printed: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("I am learning C programming\n");
        i++;
    }
    return 0;
}