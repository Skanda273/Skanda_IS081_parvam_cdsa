#include<string.h>
#include<stdio.h>
void main(){
    char arr[15]={'C','i','t','y',' ','c','o','l','l','e','g','e','\0'};
    //Conuts the no. of character and stores the count into length
    int length=strlen(arr);
    printf("Total length=%d\n",length);
    
    char str1[20]="Ctiy Engineering ";
    char str2[10]="College";
    strcat(str1,str2);
    printf("%s",str1);
}