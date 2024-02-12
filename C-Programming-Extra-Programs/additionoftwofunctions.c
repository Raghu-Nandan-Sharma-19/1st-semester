//with arguments with return type

#include<stdio.h>
int main(){
    int add(int,int);
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("Sum=%d",c);
}int add(int x,int y){
    int z;
    z=x+y;
    return z;
    return 0;
}