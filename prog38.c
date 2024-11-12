#include<stdio.h>
#include<stdlib.h>
void main(){
    int a=5;
    //malloc=3 4 5 6 7 
    printf("Enter size");
    scanf("%d",&a);
    int*arr(int*)malloc(a* sizeof(int));
    arr[2]=20;
    arr[0]=200;
    printf("%d\n",arr[0]);
    free(arr);
    printf("%d",arr[1]);
}