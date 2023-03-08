
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("enter the string:");
    scanf("%s",&a);
    int c=strlen(a);
    int m=0;
    char n;
    for(int i=0;i<c;i++){
        int count=0;
        for(int j=i+1;j<c;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>m){
            m=count;
            n=a[i];
        }
    }
    printf("the maximum occuring char is:%c",n);
    
    return 0;
}

   

