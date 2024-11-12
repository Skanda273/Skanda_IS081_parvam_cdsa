#include<stdio.h>
struct student{
int roll; char name[50]; 
float fees; char course[50];

};

struct student s; //s is the variable.Student is the data type.s is a composite value.
void main(){
    printf("%d\t\t",s.roll);
    printf("%f",s.fees);
    s.roll=1001; s.fees=52000.00f;
    printf("\n%d\t\t",s.roll);
    printf("%f", s.fees);
}



