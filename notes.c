#include<stdio.h>
int main()
{
    int amount,ten,five,one;
    printf("Enter the amount to be Withdrawn:");
    scanf("%d",&amount);

    ten = amount / 10;
    amount = amount % 10;
    five = amount / 5;
    amount = amount % 5;
    one = amount;

    printf("Numbers of 10 rupee notes:%d\n",ten);
    printf("Numbers of 5 rupee notes:%d\n",five);
    printf("Numbers of 1 rupee notes:%d",one);

    return 0;
}