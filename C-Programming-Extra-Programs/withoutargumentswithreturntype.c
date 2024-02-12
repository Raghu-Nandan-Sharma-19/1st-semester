//without arguments with returntype
#include<stdio.h>
int main(){
    int add();
    int c=add();
    printf("Sum=%d",c);
}int add(){
    int a,b,z;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    z=a+b;
    return z;
    return 0;
}