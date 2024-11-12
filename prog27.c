#include<stdio.h>
void main(){
    int t=700;
    int *const p=&t;
    //const int *p=&t; from previous program.
    (*p)++;
    printf("%d\n",*p);
    int z=200;
    p=&z;// error== not unlinked from t
}