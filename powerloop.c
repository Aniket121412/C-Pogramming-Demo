#include<stdio.h>
int main()
{
    int i,x,y,result;
    printf("Enter Base:");
    scanf("%d",&x);
    printf("Enter Power:");
    scanf("%d",&y);

    i = 1;
    result =1;
    while(i<=y)
    {
        result = result*x;
        i++;
    }
    printf("Result %d^%d =%d",x,y,result);
    return 0;
}