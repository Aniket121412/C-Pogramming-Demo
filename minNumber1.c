#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Numbers: ");
    scanf("%d%d",&a,&b);
    (a<b)?printf("min is %d",a):printf("min is %d",b);
    return 0;
}