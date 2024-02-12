// Program to check whether the given string is a palindrome

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
    int j=0;
    for(i=len-1;i>=0;i--){
        b[j]=a[i];
        j++;
    }
    printf("The reversed string %s\n",b);
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
    printf("The given string is Palindrome. \n");
    else
    printf("The given string is not Palindrome. \n");
}