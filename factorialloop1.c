#include<stdio.h>
int main()
{
    int n,fact;
    printf("Enter Num:");
    scanf("%d",&n);
    
    fact =1;
    while(n>=2)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial :%d",fact);
     return 0;
    
}