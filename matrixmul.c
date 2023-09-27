#include<stdio.h>

int main(){

    int n1,m1,n2,m2,arr1[10][10],arr2[10][10],ans[10][10];
    printf("Enter rows and columns of 1st array : ");
    scanf("%d%d",&n1,&m1);

     printf("Enter rows and columns of 2nd array : ");
    scanf("%d%d",&n2,&m2);

    if(n2!=m1){
        printf("the array is not compatible: ");
    }
    else{
        printf("Enter the elements of 1st array: ");
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                scanf("%d",&arr1[i][j]);
            }
        }

        printf("Enter the elements of 2nd array: ");
        for(int i=0;i<n1;i++){
            for(int j=0;j<m1;j++){
                scanf("%d",&arr2[i][j]);
            }
        }

        //matrix multiplicatoin
        for(int i=0;i<n1;i++){
            for(int j=0l;j<m2;j++){
                ans[i][j]=0;
                for(int k=0;k<n2;k++){
                    ans[i][j] += (arr1[i][k]*arr2[k][j]);
                }
            }
        }

        printf("the matrix multiplication is :\n ");
        for(int i=0;i<n1;i++){
            for(int j=0;j<m2;j++){
                printf("%d\t",ans[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}