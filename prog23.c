#include<stdio.h>
void sum()
{
static int n1=100, n2=200;
    int c=n1+n2;
    printf("C=%d\n",c);
    n1++; n2++;
}
int n;
void main(){
    int i=0;
    int t; //Automatic Variables
    printf("%d\n",t); //taken some random garbage value since no value is assigned for t.
    printf("%d\n",n);
    sum();
    sum();
    sum();
    sum();
    sum();
}