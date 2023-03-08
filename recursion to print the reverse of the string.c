
#include <stdio.h>
#include <string.h>
void rev(char [],int,int);
int main()
{
    char a[20];
    int b;
    printf("enter the string to reversed:");
    scanf("%s",&a);
    b=strlen(a);//5
    rev(a,0,b-1);//(saaba,0,4)
    printf("the reversed string is : %s",a);
    return 0;
}
void rev(char a[],int index,int b){
    char temp;
    temp=a[index];
    a[index]=a[b-index];
    a[b-index]=temp;
    if(index==b/2){
        return;
    }
    else{
        rev(a,index+1,b);
    }
    
}

