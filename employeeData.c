#include<stdio.h>
int main()
{
    int id;
    char name[100];
    float bs,da,hra,totalSalary,tax,inHand;
    printf("ID :");
    scanf("%d",&id);
    printf("Name :");
    scanf("%s",&name);
    printf("BasicSalary :");
    scanf("%f",&bs);
    printf("Dearness Allowance:(%%)");
    scanf("%f",&da);
    printf("House Rent Allowance :(%%)");
    scanf("%f",&hra);

    if (bs >= 200000)
        tax = 20;
    else if (bs >= 150000)
        tax = 15;
    else if (bs >= 100000)
        tax = 10;
    else if (bs >= 50000)
        tax = 5;
    else 
        tax = 0;

    totalSalary = bs + (bs*(da+hra-tax)/100);
    inHand = totalSalary;
    printf("\n ID : %d",id);
    printf("\n Name : %s",name);
    printf("\n Basic Salary : %f",bs);
    printf("\n DA(%%) : %f",da);
    printf("\n HRA(%%) : %f",hra);
    printf("\n Tax (%%) : %f",tax);
    printf("\n TotalSalary : %f",totalSalary);
    printf("\n InHand : %f",inHand);
    return 0;

}