#include<stdio.h>

struct student{
    char name[30];
    int roll_no;
    float test[3];
    float avg;
};

int main(){

    int n;
    struct student st[10];
    printf("Enter number of students:\n");
    scanf("%d",&n);
    
    printf("Enter the details of students :\n ");
    for(int i=0;i<n;i++){
        int sum=0;
        printf("Enter name of student %d\n",i+1);
        scanf("%s",&st[i].name);

        printf("Enter roll of student %d\n",i+1);
        scanf("%d",&st[i].roll_no);

        printf("Enter test marks of student %d\n",i+1);
        scanf("%f%f%f",&st[i].test[0],&st[i].test[1],&st[i].test[2]);
        sum=(st[i].test[0]+st[i].test[1]+st[i].test[2]);
        st[i].avg = sum/3;
    }

    int sum = 0,rollno,i;
    float avg=0;
    for(int i=0;i<n;i++){
        sum += (st[i].test[0]+st[i].test[1]+st[i].test[2]);
        
    }
    avg = sum/n;
    printf("The average marks of %d students is %f",n,avg);

    printf("\nEnter the roll number of student data required: \n");
    scanf("%d",&rollno);
    for(i=0;i<n;i++){
        if(st[i].roll_no==rollno){
            printf("The name of student is %s and test marks is %0.2f,%0.2f,%0.2f",st[i].name,st[i].test[0],st[i].test[1],st[i].test[2]);
            break;
        }
    }
    if(i==n){
        printf("Record not found");
    }

    return 0;
}