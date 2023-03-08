#include <stdio.h>
#include <string.h>
int main() {
    char str[] = {"mam malayalam madam hello what"};
    char* d[100];
    int j=0;
    char* token = strtok(str,"  ");
    while(token != NULL){
        int i=0,k=0;
        int len = strlen(token)-1;
        while(len>i){
            if(token[len--]!=token[i++]){
                k=1;
            }
        }
        if(k==0){
            d[j]=token;
            j++;
            // printf("%s is palindrome and length is %d\n",token,strlen(token));
        }
        token = strtok(NULL,"  ");
    }
    int h=strlen(d[0]);
    char* f[1];
    f[0]=d[0];
    for(int m=0;m<=j-1;m++){
               if(strlen(d[m])>h){
                   h=strlen(d[m]);
                   f[0] = d[m];
               }
               
            }
            printf("%s",f[0]);
    return 0;
}
