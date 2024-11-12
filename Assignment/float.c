//day 1
#include<stdio.h>
void main(){
    float i;
    printf("Enter a floating point number:\n");
    scanf("%f",&i);
    int n=(int)i;
    printf("Original floating point number:%.2f\n",i);
    printf("Integer value: %d\n",n);
}