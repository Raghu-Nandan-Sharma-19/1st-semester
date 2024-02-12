//Write a program to add 10 consecutive numbers starting from 1 using while loop

#include <stdio.h>
int main() 
{
    int n = 1,sum = 0,count = 0; 
    while(count<10) 
    {
        sum+=n;
        n++; 
        count++;
    }
    printf("The sum of the 10 consecutive numbers starting from 1 is: %d\n", sum);
    return 0;
}