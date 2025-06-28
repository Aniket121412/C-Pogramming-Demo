#include<stdio.h>
int main(){
    int cnt = 0,n;
    printf("Enter Number:");
    scanf("%d",&n);
    while(n>0)
    {
        cnt++;
        n/=10;
    }
    printf("Count of Digit:%d",cnt);
    return 0;
}