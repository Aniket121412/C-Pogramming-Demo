#include <stdio.h>
int main()
{
    int num,rem, temp,rev=0;

    printf("Enter Number");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (rev == temp)
        printf("Palindrome ");

    else
        printf("Not palindrome");
    return 0;
}