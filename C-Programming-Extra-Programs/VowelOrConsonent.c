#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an Alphabet:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("It is a Consonent");
    }
    return 0;
}