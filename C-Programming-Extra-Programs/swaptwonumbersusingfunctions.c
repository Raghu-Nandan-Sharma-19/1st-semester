//Write a program to swap two numbers  by using functions

#include<stdio.h>
int swap(int *, int *);
int main(){
    int a, b;
    printf("Enter A and B: ");
    scanf("%d %d", &a, &b);
    printf("A = %d B = %d",a,b);
    swap(&a, &b);
    printf("After Swapping: ");
    printf("A = %d B = %d",a,b);
}int swap(int *x, int *y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("\nAfter swapping: ");
    printf("\nx=%d y=%d",x, y);
}