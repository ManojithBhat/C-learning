#include<stdio.h>
#include<math.h>

int main(){

int a,b,c;
printf("Enter the coeffecient of quadratic equation :\n ");
scanf("%d%d%d",&a,&b,&c);
float D,root1,root2,im1,im2,r;
if(a==0){
    printf("It's not a quadratic equation!!");
}
else{
    D = b*b-4*a*c;
    if(D==0){
        printf("Roots are real and equal\n");
        root1=-b/(2*a);
        printf("The roots are %f and  %f",root1,root1);
    }
    else if(D>0){
        root1 = (-b-sqrt(D))/(2*a);
        root2 = (-b+sqrt(D))/(2*a);
        printf("The roots are %f and  %f",root1,root2);
    }
    else{
        r = -b/(2*a);
        im1 = -sqrt(-D)/(2*a);
        im2 = sqrt(-D)/(2*a);
        printf("The roots are %f+%fi and %f+%fi",r,im1,r,im2);
    }
}

    return 0;
}