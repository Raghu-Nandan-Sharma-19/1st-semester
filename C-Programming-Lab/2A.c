// Program for arithmetic operations like addition, subtraction, multiplication and division

#include<stdio.h>
int main() {
    int a, b, sum, diff, mult, rem;
    printf("Enter the value of A and B : ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
    diff = a - b;
    printf("Diff = %d\n", diff);
    mult = a * b;
    printf("Mult = %d\n", mult);
    rem = a % b;
    printf("Rem = %d\n", rem);
    return 0;
}