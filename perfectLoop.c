#include<stdio.h>
int main()
{
    int i,sum,n;
    printf("Enter NO:");
    scanf("%d",&n);

    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum +=i;

    }
    if(sum == n)
    printf("Perfect NO");

        else
        printf("not perfect");
    return 0;
}