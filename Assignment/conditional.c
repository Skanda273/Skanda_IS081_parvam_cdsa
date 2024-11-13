//day 2
#include<stdio.h>
void main(){
    int n=0;
    printf("Enter a Positive integer:\n",n);
    scanf("%d",&n);
    if(1<=n<=9){
        switch(n){
            case 1:
            printf("One\n");
            break;
            case 2:
            printf("Two\n");
            break;
            case 3:
            printf("Three\n");
            break;
            case 4:
            printf("Four\n");
            break;
            case 5:
            printf("Five\n");
            break;
            case 6:
            printf("Six\n");
            break;
            case 7:
            printf("Seven\n");
            break;
            case 8:
            printf("Eight\n");
            case 9:
            printf("Nine\n");
            break;
    default:
        printf("Greater than 9\n");        
    }
    }
} 
        