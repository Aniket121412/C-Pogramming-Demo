#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a & b :");
    scanf("%f%f",&a,&b);
    printf("Arithmetic mean is:%.2f",(a+b)/2);
    printf("\nHarmonic mean is:%.2f",(a*b)/(a+b));
    return 0;

}