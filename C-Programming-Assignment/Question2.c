//Write a program to print all three digit perfect numbers

#include <stdio.h>

// Function to check if a number is a perfect number
int isPerfect(int num) {
    int sum = 1; // 1 is always a divisor

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (num == sum);
}

int main() {
    printf("Three-digit perfect numbers:\n");

    for (int i = 100; i <= 999; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
