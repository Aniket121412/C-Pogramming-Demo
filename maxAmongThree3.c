#include<math.h>
#include<stdio.h>
int main()
{
   int a,b,c;
    printf("Enter three no:");
    scanf("%d%d%d",&a,&b,&c);
    printf("max is %.2f",fmax(a,fmax(b,c)));
    return 0;
}