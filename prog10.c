#include<stdio.h>
void main(){
    int i=100 , j=2, c= i/2;
    //3.4f is double by default. In C language, fractional values are considered as double by default.
    float f=3.4f; //3.4f is taken as double,but automatically converted to float.
    float t=5.4f; //5.4f must be taken as floating point value.
    float o=100.00F;
    printf("%.2f",(o/j));

    int n=f; //Narrowing conversion.[converting from higher to lower]
    printf("\n%d\n", n);
    //Casting.(data type) 
    int n1=100; float f1=n1; //Widening Conversion.No data loss.
    printf("%f\n",f1);
}