#include <stdio.h>
int main()
{
    int n, rev;
    printf("Enter No:");
    scanf("%d", &n);
    rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    printf("Reverse No is:%d", rev);
    return 0;
}
