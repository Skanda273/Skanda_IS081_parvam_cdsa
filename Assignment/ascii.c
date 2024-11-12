//day 1
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a alphabet:\n");
    scanf("%c",&ch);//used for taking input from user
    //read a single character
    if(ch>='A' && ch<='Z'){
        ch = ch + 32;//used for converting from uppercase to lowercase
        printf("%c",ch);
    }      
    else if(ch>='a'&& ch<='z'){
        ch = ch - 32;//used for converting from lowercase to uppercase
            printf("%c",ch);
        }
        else{
            printf("Invalid input");//it prints invalid if the user entersa number instead of character
        }
    }  
  
