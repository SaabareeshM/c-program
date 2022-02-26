
#include <stdio.h>
#include <string.h>
void rev(char [],int,int);
int main()
{
    char a[20];
    int b;
    printf("enter the string to check it is palindrome or not:");
    scanf("%s",&a);
    b=strlen(a);
    rev(a,0,b-1);
    return 0;
}
void rev(char a[],int index,int b){
    char temp1,temp2;
    temp1=a[index];
    temp2=a[b-index];
    if(index!=b/2){
        if(temp1==temp2){
            rev(a,index+1,b);
        }else{
            printf("Not a palindrom.");
        }
    }else{
        printf("It is palindrome.");
    }
}

