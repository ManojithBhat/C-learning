#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int main(){

    int n,*ptr,sum=0;
    printf("Enter the number of elements :");
    scanf("%d",&n);

    ptr = (int *)malloc(n*sizeof(int));
    
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }

    for(int i=0;i<n;i++){
        sum+=*(ptr+i);
    }
    printf("The sum is :%d\n",sum);

    return 0;
}