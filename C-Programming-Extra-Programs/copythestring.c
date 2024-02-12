#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",a);
    int l=strlen(a);
    for(int i=0;i<l;i++)
    b[i]=a[i];
    printf("The copied string is %s",b);
    return 0;
}