#include<stdio.h>
void main(){
    int n=50; 
    //break; Use break only inside switch,while,do-while,for loops.
    switch(n % 2){ 
        case 0:
               printf("%d is an Even Number\n",n); //Break statements are optional. 
               break;
        case 1:
               printf("%d is an Odd Number\n",n);  //Break statements are optional/
    }
}