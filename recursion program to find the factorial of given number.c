#include <stdio.h>
int rec();
int fact=0;
int main(){
int i;
printf("enter number to get the sum:");
scanf("%d",&i);
printf("the factorial of number %d is %d.",i,rec(i));
return 0;
}
int rec(int i){
    if(i>1){
        fact=i*rec(i-1);
        return fact;
    }
    else{
        return 1;
    }
}
