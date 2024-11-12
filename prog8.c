#include<stdio.h>
void main(){
    printf("%c\n", 'A'); //character
    printf("%s\n", "A"); //String
    char ch='B';
    printf("%c\n", ch);
    printf("%d\n", ch); //Method 1 of finding ASCII value
    ch++;
    printf("%d\n" , ch);
    printf("%c\n" , ch);

    int i=ch;  //converts char to int. Method 2 of finding ASCII value
    printf("%d\n", i);
    i+=32;
    printf("%d\n", i);
    ch=i;
    printf("%c\n",ch);
}