//with arguments without return type

#include<stdio.h>
void main(){
    void add(int,int);
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    add(a,b);
}void add(int x,int y){
    int z;
    z=x+y;
    printf("Sum = %d\n",z);
    
}