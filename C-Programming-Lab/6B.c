// Program to sort an array using bubble sort

#include<stdio.h>
int main() {
    int num;
    printf("Enter the size of Array : ");
    scanf("%d", &num);
    int a[num], i;
    printf("Enter the array elements : ");

    for(i = 0; i < num; i++)
    scanf("%d", &a[i]);
    int j;

    for(i = 0; i < num - 1; i++) {
        int k = 0;
        for(j = k + 1; j < num - i; j++) {
            if(a[k] > a[j]) {
                int t = a[k];
                a[k] = a[j];
                a[j] = t;
            }
            k++;
        }
    }
    printf("Sorted Array: ");
    for(i = 0; i < num; i++)
    printf("%d  ", a[i]);

    return 0;
}