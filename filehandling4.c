#include<stdio.h>
int main(){
    int lines=0,nobl=0,nonbl=0,nocl=0,nosc=0;
    FILE *fptr;
    fptr = fopen("script.txt","r");
    char ch;

    while((ch=fgetc(fptr))!=EOF){
        if(ch=='\n'){
            lines++;
        }
        if(ch=='\n'){
            if(ch=fgetc(fptr)=='\n'){
                fseek(fptr,-1,1);
                nobl++;
            }
        }
        if(ch==';'){
            if(ch=fgetc(fptr)=='\n'){
                fseek(fptr,-1,1);
                nosc++;
            }
        }
    }
    fseek(fptr,0,0);
    while(fgetc(fptr)!=EOF){
        ch = fgetc(fptr);
        if(ch=='\n'){
            if(ch=fgetc(fptr)=='/'){
                nocl++;
            }
        }
    }
    
    nonbl = lines-nobl;
    printf("number of line in the file is %d\n",lines);
    printf("number of blank lines is %d\n",nobl);
    printf("number of non blank lines is %d\n",nonbl);
    printf("number of semi-colons in the file is %d\n",nosc);
    printf("number of comments in file is %d\n",nocl);

    fclose(fptr);
}
