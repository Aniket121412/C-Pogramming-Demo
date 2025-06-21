#include<stdio.h>
int main()
{
    float l,b,h;
    printf("Enter length:");
    scanf("%f",&l);
    printf("Enter breadth:");
    scanf("%f",&b);
    printf("Enter height:");
    scanf("%f",&h);

    printf("Surface Area is:%.2f Units",2*((l*b)+(l*h)+(b*h)));
    printf("\nVolume is:%.2f Units",l*b*h);

    return 0;
}
