#include<stdio.h>
int main()
{
    int n,i,cnt;
    printf("Enter Number:");
    scanf("%d",&n);
    cnt = 0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cnt++;
    }

    if(cnt==2)
        printf("prime Number");
    else.
        printf("Not prime Number");
    return 0;
}