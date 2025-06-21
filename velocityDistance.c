#include<stdio.h>
int main()
{
    float u,a,t;
    printf("Initial Velocity:");
    scanf("%f",&u);
    printf("Acceleration:");
    scanf("%f",&a);
    printf("Time:");
    scanf("%f",&t);
    printf("Final Velocity is:%.2f",u+(a*t));
    printf("\nDistance travelled:%.2f",u+a*(t*t));
    return 0;

}