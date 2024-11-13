//day 1
#include<stdio.h>
void main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    if(number >=10 && number <=20 && number % 2==0){
        printf("Valid and Even\n");
    }    
    else{
        printf("Invalid\n");
    }    
    }
