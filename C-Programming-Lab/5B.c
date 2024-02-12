// Program to calculate sum of digits of a number using while loop

#include<stdio.h>
int main() {
    int num, i = 0;
    printf("Enter any number : ");
    scanf("%d", &num);
    
    while(num != 0) {
        i += num % 10;
        num = num / 10;
    }
    printf("%d\n", i);

    return 0;
}