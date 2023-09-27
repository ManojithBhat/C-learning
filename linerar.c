#include<stdio.h>
int main(){

    int arr[] = {1, 5, 2, 4, 7, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    printf("Enter the element to search ");
    scanf("%d",&target);
    
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==target){
            printf("The element %d is found and is at the index is %d",target,i);
            break;
        }
    }
    if(i==n){
        printf("The element is not found");
    }
    return 0;
}