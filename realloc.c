#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int main(){

    int n1,n2,*ptr,sum=0;
    printf("Enter the number of elements :");
    scanf("%d",&n1);

    ptr = (int *)malloc(n1*sizeof(int));

    if(ptr==NULL){
        printf("Memory not allocated!");
        exit(0);
    }
    
    printf("\nEnter %d elements : ",n1);
    for(int i=0;i<n1;i++){
        scanf("%d",ptr+i);
    }

    for(int i=0;i<n1;i++){
        printf("%d\t",*(ptr+i));
    }

    printf("\nEnter the new size : ");
    scanf("%d",&n2);

    ptr = realloc(ptr,n2*sizeof(int));

    printf("\nEnter %d elements : ",n2-n1);
    for(int i=n1;i<n2;i++){
        scanf("%d",ptr+i);
    }

     for(int i=0;i<n2;i++){
        printf("%d\t",*(ptr+i));
    }

    free(ptr);

    return 0;
}