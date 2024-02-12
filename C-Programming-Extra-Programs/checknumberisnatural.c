#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n>0){
        printf("Natural number.\n");
    }else{
        printf("Not a Natural number.\n");
    }
    return 0;
}