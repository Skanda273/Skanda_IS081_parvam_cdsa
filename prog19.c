#include<stdio.h>
void main(){
    //Infinite loop
do{
}while(0);
int i=5,j=15;
    do{  //How many times does this loop execute?
        while(j>=5){  //How many times does this loop execute?
        j--;
    }
    i++;
    }while(i <= j);
    printf("%d\n",i*j);

    i=5;j=5;
    while(i<=j){ //How many times does this loop execute?
        do{ //How many times does this loop execute?
            j--;
        }while(j>=5);
        i++;
    }
    printf("%d",i*j);
}
