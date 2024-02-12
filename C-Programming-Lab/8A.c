// Program to demonstrate use of various string operations

#include<stdio.h>
void main(){
    char a[100];
    printf("Enter the String: ");
    scanf("%[^\n]s",a);
    int i,len=0;
    for(i=0;;i++){
        if(a[i]=='\0')
        break;
        else
        len++;
    }
    printf("Length of string is %d\n",len);
    char b[len];
    for(i=0;i<len;i++){
        b[i]=a[i];
    }
    printf("The copied string %s\n",b);
    int flag=0;
    for(i=0;i<len;i++){
        int m=a[i];
        int n=b[i];
        if(m!=n){
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("The given string is equal. \n");
    else
    printf("The given string is not equal. \n");
}