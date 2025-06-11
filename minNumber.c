#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d%d",&a,&b);
    if(a<b)
    printf("Min number is %d",a);
    else
    printf("Min number is %d",b);
    return 0;
}