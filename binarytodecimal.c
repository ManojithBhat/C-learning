#include<stdio.h>

int binarytodecimal(int i){
    if(i==0) return 0;
    
    return i%10 + 2*binarytodecimal(i/10);
}
int main(){
    int n;
    scanf("%d",&n);
    int ans = binarytodecimal(n);
    printf("%d",ans);
    return 0;
}