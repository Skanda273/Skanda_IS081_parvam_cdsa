#include<stdio.h>
int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int max;  
    max = a;

    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }

    printf("The greatest number is: %d\n", max);

    return 0;
}