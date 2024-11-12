#include<stdio.h>
void main(){
    int i=5 , j=10;
    do
    {
        printf("I= %d\n",i);
    } while (i<j--);

    do{
        printf("****\n");
    }while(0);
i=5;j=15;
    do{  //How many times does this loop execute?
        while(j>=5){  //How many times does this loop execute?
        j++;
    }
    i++;
    }while(i<=j); //Infinite loop
    printf("%d\n",i*j);
}