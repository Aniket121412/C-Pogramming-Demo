#include<stdio.h>
#include<string.h>
int main()
{ 
    char num [100];

    printf("Enter Number:");
    scanf("%s",&num);
    strrev(num);
    printf("Reverse no : %s",num);
    return 0;

}