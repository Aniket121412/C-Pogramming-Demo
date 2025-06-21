#include<stdio.h>
int main()
{
    float F,C,K;
    printf("Enter temperature in F:");
    scanf("%f",&F);
    printf("Temperature in C is:%.2f",(5.0/9*(F-32)));
    printf("\nTemperature in K is:%.2f",(C+273.15));
    return 0;
}