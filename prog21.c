#include<stdio.h>
void main(){
    int i=0, j=25;  //Infinite loop for(;;){
    for(; i<j--; j=j-3, i++){
        printf("*******");
    }
    printf("%d\n" , i*j);
    puts("A simlpe for loop");

for(int j=0; j<7; j++){
    printf("J=%d\t",j);
    }
    /*for(int j=0; j<7; j++){
    printf("J=%d\t",j);
    getchar();
}*/
for(printf("INCREMENT\t");printf("CONDITION CHECKING\t");printf("UPDATION")){
    printf("HELLO"); //INFINITE LOOP
    getchar();
    }
}