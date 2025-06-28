#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("Enter the Num:");
    scanf("%d",&n);
    
    i=2;
    while(i<=n)
    {
        fact *=i;
        i++;
    }
    printf("Factorial is %d",fact);
    return 0;

}