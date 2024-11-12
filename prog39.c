//calloc
#include<stdio.h>
#include<stdlib.h>
void main(){
    int a=5;
//calloc=2 4 6 8
    printf("Enter size");
    scanf("%d",&a);
    int *arr(int*)calloc(a* sizeof(int));
    arr[2]=20;
    arr[0]=200;
    printf("%d\n",arr[0]);
    free(arr);
    printf("%d",arr[1]);
}