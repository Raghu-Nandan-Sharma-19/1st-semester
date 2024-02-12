//without arguments without return type

#include<stdio.h>
void main(){
    void add();
    add();
    
}void add(){

    int x,y,z;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    z=x+y;
    
    printf("Sum = %d\n",z);
    
}