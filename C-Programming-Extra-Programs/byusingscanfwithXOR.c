#include<stdio.h>
int main(){
    char a[100];
    printf("Enter the string: ");
    scanf("%s",a);
    printf("The string is %s",a);
    printf("  Enter the string: ");
    gets(a);
    printf("The String is %s",a);
    scanf("%[^\n]s",a);
    printf("The string is %s",a);
    return 0;
}