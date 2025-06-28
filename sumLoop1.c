#include<stdio.h>
int main(){
    int n,i;
    int sum = 0;

    printf("Enter Number:");
    scanf("%d",&n);

    i = 1;
   
    while(i<=n)
    {      
        sum = sum + i;
        i++;  
    }
    printf("%d ",sum);
    return 0;

}