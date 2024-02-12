#include<stdio.h>
int main(){
    char a[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",a);
    int l=0;
    for(int i=0;;i++){
        if(a[i]=='\0')
        break;
        else
        l++;
    }
    printf("The length is %d",l);
    return 0;
}