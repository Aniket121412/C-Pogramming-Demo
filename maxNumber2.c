#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Numbers:");
    scanf("%d%d",&a,&b);
    printf("Max is %d",(a>b)?a:b);
    return 0;
}