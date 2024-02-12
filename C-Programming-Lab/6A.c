// Program to find the maximum element and index in the array

#include<stdio.h>
int main() {
    int num;
    printf("Enter the size of the array : ");
    scanf("%d", &num);

    int a[num];
    printf("Enter array elements : \n", num);

    for(int i = 0; i < num; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0];
    int index = 1;

    for(int i = 1; i < num; i++) {
        if(a[i] > max) {
            max = a[i];
            index = i;
        }
    }
    printf("Maximum element is %d at %d", max, index);

    return 0;
}