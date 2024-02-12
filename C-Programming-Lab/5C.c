// Program to check if a number is Armstrong or not using a while loop.

#include <stdio.h>
#include <math.h>
int main() {
    int number, originalnumber,remainder,n=0, result=0;
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalnumber = number;

    while (originalnumber != 0) {
        originalnumber /= 10;
        ++n;
    }

    originalnumber = number;

    while (originalnumber != 0) {
        remainder = originalnumber % 10;
        result += pow(remainder, n);
        originalnumber /= 10;
    }

    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }


    return 0; 
}