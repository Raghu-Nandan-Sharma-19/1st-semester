// Write a program to print fibonacci sequence using for loop

#include<stdio.h>
int main() {
    int i, num, t1 = 0, t2 = 1, nextterm;
    printf("Enter the number of terms : ");
    scanf("%d", &num);
    printf("Fibonacci Sequence : %d\n%d\n", t1, t2);
    for(i = 3; i <=num; i++) {
        nextterm = t1 + t2;
        printf("%d\n", nextterm);
        t1 = t2;
        t2 = nextterm;
    }
    return 0;
}