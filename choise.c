#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter a&b Numbers:");
    scanf("%d%d",&a,&b);
    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\nEnter choise:");
    scanf("%d",&ch);

    switch (ch){
        case 1:printf("Addition is:%d",(a+b));
            break;
        case 2:printf("Substraction is:%d",(a-b));
            break;
        case 3:printf("Multiplication is:%d",(a*b));
            break;
        case 4:printf("Division is:%d",(a/b));
            break;
        default:printf("Invalid Operation!");
            
    }
    return 0;

}