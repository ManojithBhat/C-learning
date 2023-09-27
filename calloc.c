#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int main(){

    int n,*ptr,sum=0;
    printf("Enter the number of elements :");
    scanf("%d",&n);

    ptr = (int *)calloc(n,sizeof(int));

    if(ptr==NULL){
        printf("Memory not allocated!");
        exit(0);
    }
    
    
    printf("Enter %d elements",n);
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }

    printf("The sum is :%d\n",sum);
    free(ptr);

    return 0;
}