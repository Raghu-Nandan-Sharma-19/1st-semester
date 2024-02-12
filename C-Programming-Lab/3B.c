// Program to check whether the alphabet is a vowel or consonent.

#include<stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel.\n");
    } else {
        printf("Consonent.\n");
    }
    return 0;
}