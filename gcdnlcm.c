#include<stdio.h>

int find_gcd(int a,int b){
    if(b==0) return a;
    else if(a<b)  find_gcd(b,a);
    else  find_gcd(b,a%b);
}

int find_lcm(int a,int b){
    static int count=1;
    if(count%a==0 && count%b==0){
        return count;
    }
    count++;
     find_lcm(a,b);
}

int main(){
    int a=5,b=6,gcd,lcm;
    gcd = find_gcd(a,b);
    lcm = find_lcm(a,b);
    printf("gcd of 2 numbers is %d and lcm is %d",gcd,lcm);
    return 0;
}