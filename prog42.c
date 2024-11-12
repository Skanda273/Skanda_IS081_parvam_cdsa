#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
void main(){
        int arr[]={1,2,3,4,5,6,7,8,9};
        int n=sizeof(arr)/sizeof(arr[0]);
         for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                //print the numbers in swapped order
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
            
        }
        printf("%d ",arr[i]);
         }
}