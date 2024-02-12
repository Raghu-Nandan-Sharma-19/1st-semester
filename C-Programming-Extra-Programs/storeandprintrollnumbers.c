/*Write a C program to store 10 students roll numbers and print all the students roll numbers and also print 6th and 8th students roll 
numbers separately*/
#include<stdio.h>
int main(){
    int rollnumbers[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        printf("%d\n",rollnumbers[i]);
    }
    printf("6th student roll number is %d\n",rollnumbers[5]);
    printf("8th student roll number is %d\n",rollnumbers[7]);
    return 0;
}