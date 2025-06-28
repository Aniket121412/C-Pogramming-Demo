#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,flag;
    printf("Enter Number");
    scanf("%d",&n);
     
    flag =1;
    for(i=1; i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag =0;
            break;
        }
    }
    if(flag==1)
    printf("Prime");
    else
    printf("Not prime");

    return 0;
}