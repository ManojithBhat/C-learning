#include<stdio.h>
#include<string.h>

void checkpalindrome(char str[],int ind){
    int len = strlen(str) - (ind+1);
    if(str[len]==str[ind]){
        if(len==ind+1 || len==ind){
            printf("The string is palindrome");
            return;
        }
        checkpalindrome(str,ind+1);
    }
    else{
        printf("The string is not a palindrome ");
        return;
       
    }
}

int main(){

    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);
    checkpalindrome(str,0);

    return 0;
}