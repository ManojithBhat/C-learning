#include<stdio.h>
int main(){

    int arr[] = {1, 2,3,4,5,6,7,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the element to search ");
    scanf("%d",&target);

    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==target){
             printf("The element %d is found and is at the index is %d",target,mid);
            break;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    if(start>end){
        printf("No element was found ");
    }

    return 0;
}