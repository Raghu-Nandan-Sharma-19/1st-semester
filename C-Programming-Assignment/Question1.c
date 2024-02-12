/*In a number system a number is said to be Hit if it is divisible by either sum of all digits or product of all digits 
otherwise it is said to be Miss.*/

#include <stdio.h>

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

// Function to calculate the product of digits of a number
int productOfDigits(int num) {
    int product = 1;

    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }

    return product;
}

int main() {
    int N;

    // Input
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    // Check conditions for Hit or Miss
    if (N % sumOfDigits(N) == 0 || N % productOfDigits(N) == 0) {
        printf("Hit\n");
    } else {
        printf("Miss\n");
    }

    return 0;
}
