#include<stdio.h>
void main(){
    char name[]={'C','i','t','y','c','o','l','l','e','g','e','\0'};
    printf("%s\n",name);
    printf("%c\n",name[0]);
    printf("%c\n",name[1]);
    for(int i=4; i>=0; i--){
        printf("%c\t\t",name[i]);
    puts("\n\n");     //Run the loop till it is null(\0).
    for(int j=0; name[j] != '\0'; j++)
        printf("%c\t\t",name[j]);
    }
}