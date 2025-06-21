#include<stdio.h>
int main()
{
    float r,h;
    printf("Enter the Radius:");
    scanf("%f",&r);
    printf("Enter the Height:");
    scanf("%f",&h);
    printf("Surface Area : %.2f \nVolume : %.2f",(2*3.14*(r*r)+2*3.14*r*h),3.14*(r*r)*h);
    return 0;
}