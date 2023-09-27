#include<stdio.h>
int main(){

    int arr[] = {1,5,2,4,7,8,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
        int flag =0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
                flag = 1;
            }
        }
        if(flag==0) break;
    }

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }


    return 0;
}