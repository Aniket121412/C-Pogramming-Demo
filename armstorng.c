#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, cnt = 0, result = 0;
    printf("Enter a Number:");
    scanf("%d", &n);

    temp = n; // backup
    while (n > 0)
    {
        cnt++;
        n /= 10;
    }
    n = 0;
    while (n > 0)
    {
        int rem = n % 10;
        result = result + pow(rem, cnt);
        n = n / 10;
    }

    n = temp

        while (n > 0)
    {
        int rem = n % 10;
        result = result + pow(rem, cnt);
        n = n / 10;
    }

    if (result == temp)
        printf("armstrong");
    else
        printf("not");
    return 0;
}