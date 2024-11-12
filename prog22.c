#include<stdio.h>
void sum(int n1, int n2) //function definition
{
    int c=n1 + n2;
    printf("%d", c);
    n1++;n2++;          //Infinite loop
    sum(n1,n2);
    printf("2 Numbers added....")
}
void main(){
    int a=100, b=200; 
          sum(a,b); //Function call
}
