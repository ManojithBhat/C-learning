#include<stdio.h>
#include<string.h>

void equal(char *str1, char *str2){
    
    while(*str1==*str2){
        if(*str1=='\0' || *str2=='\0'){
            break;
        }
        str1++;
        str2++;
    }

    if(*str1=='\0'&&*str2=='\0'){
        printf("The strings are equal");
        
    }
    else{
        printf("The strings are not equal");
        
    }
}

int main(){

    char str1[25],str2[25];
    printf("Enter 1st string:");
    scanf("%s",str1);
    printf("Enter 2nd string:");
    scanf("%s",str2);

    equal(str1,str2);
    return 0;
}