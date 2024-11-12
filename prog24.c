#include<stdio.h>
void main(){
    int t=700;
    int *p=&t; //linking of t and p.
    printf("%d\n",t);
    printf("%d\n", *p); //Printing Null since its a non-printable character.
    t++;
    printf("%d\n",t);
    printf("%d\n",*p);
    (*p)++; //add paranthesis to *p coz the ++ takes precedence than * ......takes priority ++ >> *.
      printf("%d\n",t);
    printf("%d\n",*p);

    printf("%x\n",p);
    printf("%x\n",&t); //& give address.....* gives the value.
     printf("%x\n",&p);
}