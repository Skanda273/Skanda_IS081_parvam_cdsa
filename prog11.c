#include<stdio.h>
int main(){
    int a;
    printf("Enter a: \n");
    scanf("%d" , &a);
    if(a<10){
    }
    // if statement with false condition
    if(a>20){
        printf("%d is greater than 20",a);
    }
    if(a != a)
        puts("\n\nNot Equals");
    else
        puts("\n\nEquals");
    return 0;
}