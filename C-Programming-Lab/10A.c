// Program to differentiate pass by value and pass by reference by swapping two numbers using function

#include<stdio.h>
void swap(int *a , int *b){
    int t;
    printf("Before swapping : a=%d , b=%d\n", *a, *b);
    t = *a;
    *a = *b;
    *b = t;
    printf("After swapping : a=%d , b=%d\n", *a, *b);
}

int main(){
    int x , y;
    printf("Enter x , y :");
    scanf("%d%d", &x, &y);

    swap(&x, &y);
    printf("Back in main : x=%d , y=%d\n", x, y);
    return 0;

}