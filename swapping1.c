#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two Integers:");
    scanf("%d%d",&a,&b);

    // a = a + b;
    // b = a - b;
    // a = a - b;

    a = a + b - (b = a);
    printf("After Swapping:a=%d\nb=%d",a,b);
    return 0;
}