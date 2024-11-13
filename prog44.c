#include<stdio.h>
#include<stdlib.h>
void main(){
    char operator;
    double num1,num2;
    printf("Mini Calculator\n");
    printf("Enter the operator(+,-,*,/)\n");
    scanf("%c",&operator);
    printf("Enter the First number: ");
    scanf("%lf",&num1);
    printf("Enter the Second number: ");
    scanf("%lf",&num2);
    
    switch(operator){
        case '+':
        printf("%.2lf+%.2lf=%.2lf",num1,num2,num1+num2);
        break;
        case '-':
        printf("%.2lf-%.2lf=%.2lf",num1,num2,num1-num2);
        break;
        case '*':
        printf("%.2lf*%.2lf=%.2lf",num1,num2,num1*num2);
        break;
        case '/':
        printf("%.2lf/%.2lf=%.2lf",num1,num2,num1/num2);
        break;
        default:
        printf("Invalid Operator\n");
    }
}