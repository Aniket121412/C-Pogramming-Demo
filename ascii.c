#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Enything:");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
    printf("Alphabet");
    else if(ch>= 48 && ch<=57)
    printf("Digits");
    else
    printf("SpecialSymbol");
    return 0;
}