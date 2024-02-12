//Write a program to print sum of two values by user defined function
#include<stdio.h>
int add(int,int);
int main(){
    int x,y,z;
    printf("Enter value of x and y: ");
    scanf("%d %d",&x,&y);
    z=add(x,y);//fun_calling//x,y are actual arguments
    printf("%d",z);
}
int add(int a,int b)//fun_definition//a,b are formal arguments
{
    return a+b;
}