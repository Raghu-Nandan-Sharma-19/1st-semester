// Program to create simple calculator using switch case and function for every operation

#include<stdio.h>
void main(){
    int add(int,int);
    int sub(int,int);
    int mul(int,int);
    float div(int,int);
    int num_1,num_2,num_3,choice;
    printf("Enter two numbers: ");
    scanf("%d%d",&num_1,&num_2);
    printf("Choose an operation from below options: ");
    printf("\n1. Addition.\n2. Subtract.\n3. Multiply.\n4. Divide");
    printf("\nChoose an  Operation(for e.g 1 for addition): ");
    scanf("%d",&choice);
    switch(choice){
        case 1: num_3=add(num_1,num_2);
        printf("Sum=%d",num_3);
        break;
        case 2: num_3=sub(num_1,num_2);
        printf("Difference=%d",num_3);
        break;
        case 3: num_3=mul(num_1,num_2);
        printf("Product=%d",num_3);
        break;
        case 4: if(num_2==0){
            printf("infinity");
        }else{
            float num_3=div(num_1,num_2);
            printf("After division quotient=%.2f",num_3);
        }
        break;
        default: printf("Invalid operation.Please select a valid option.");
    }
}
int add(int x,int y){
    int z=x+y;
    return z;
}
int sub(int x,int y){
    int z=x-y;
    return z;
}
int mul(int x,int y){
    int z=x*y;
    return z;
}
float div(int x,int y){
    float z=(float)x/(float)y;
    return z;
}