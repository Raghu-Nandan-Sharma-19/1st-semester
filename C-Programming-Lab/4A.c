// Program to calculate factorial of a number using for loop

#include<stdio.h>
int main() {
    int i, num, fact = 1;
    printf("Enter any number : ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        printf("%d\n", i);
        fact*=i;
    }

    printf("Factorial of the given number is : %d", fact);
    return 0;
}