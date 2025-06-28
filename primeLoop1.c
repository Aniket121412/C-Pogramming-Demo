#include<stdio.h>
int main(){
    int i,n,cnt;
    printf("Enter a Num:");
    scanf("%d",&n);
    cnt=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        cnt++;
    }
    if(cnt==0)
        printf("prime Num");
    else
        printf("not prime num");
    return 0;
}