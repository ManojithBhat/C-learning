#include <stdio.h>
int main()
{

    int arr[] = {1, 5, 2, 4, 7, 8, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min_id ;
    for(int i=0;i<n-1;i++){
        min_id = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_id]){
                min_id = j;
            }
        }
        if(min_id!=i){
            int temp = arr[i];
            arr[i] = arr[min_id];
            arr[min_id]=temp;
        }
    }
     for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }


    return 0;
}