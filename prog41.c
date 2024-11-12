#include<stdio.h>
#include<stdbool.h>
void main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool b=false;
    int x=30,l=0,r=n-1,m=0; //r=8
    while(r>=l){
        m=(l+r)/2; //4]
        if(arr[m]==x){
            b=true;
            break;
        }
        // 5   7
        if(arr[m]>x){
            r-m-1; //r=4;
        }
        else{
            l=m+1;
        }
    }
    if(b){
        printf("YES");
    }
    else{
        printf("NO");
    }

}