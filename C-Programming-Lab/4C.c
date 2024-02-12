// Program to calculate maximum of n numbers using for loop

#include<stdio.h>
int main() {
    int num, max = 0;
    printf("Enter any number : ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        printf("Enter the value %d : ", i);
        int value;
        scanf("%d", &value);

        if(value > max) {
            max = value;
        }
    }
    printf("The maximum value is : %d\n", max);
    return 0;
}