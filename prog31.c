#include<stdio.h>
void main(){
    char name[]={'C','i','t','y','c','o','l','l','e','g','e','\0'};
    int count=0;
    printf("%s\n",name);
    for(int j=0;j<11;j++){
        if(name[j]=='a' || name[j]=='e' || name[j]=='i' || name[j]=='o' || name[j]=='u'){
            printf("Vowel:%c\n",name[j]);
            count++;
        }
    }
            printf("Total Vowels:%d",count);
}