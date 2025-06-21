#include<stdio.h>
int main()
{
    int id,pqty1,pqty2,pqty3;
    char pname1[50],pname2[50],pname3[50];
    float price1,price2,price3,total,discountamt,Discount,payAmount;
    printf("Enter the product1 detail");
    printf("\nEnter id:");
    scanf("%d",&id);
    printf("Name:");
    scanf("%s",pname1);
    printf("Enter Qty:");
    scanf("%d",&pqty1);
    printf("Enter Price:");
    scanf("%f",&price1);

    printf("Enter the product2 detail");
    printf("\nEnter id:");
    scanf("%d",&id);
    printf("Name:");
    scanf("%s",pname2);
    printf("Enter Qty:");
    scanf("%d",&pqty2);
    printf("Enter Price:");
    scanf("%f",&price2);

    printf("Enter the product3 detail");
    printf("\nEnter id:");
    scanf("%d",&id);
    printf("Name:");
    scanf("%s",pname3);
    printf("Enter Qty:");
    scanf("%d",&pqty3);
    printf("Enter Price:");
    scanf("%f",&price3);

    total = (price1 * pqty1) + (price2 * pqty2) + (price3 * pqty3);

    if (total > 10000)
      Discount = 10;
    else if(total > 5000)
      Discount = 5;
    else if(total > 3000)
        Discount = 3;
    else
        Discount =0;

        discountamt = (total) * Discount/100;
        payAmount =total -discountamt;

        // printf("discountamt:%f",discountamt);
        // printf("Total:%f",total);
        // printf("payamount:%f",payAmount);

        printf("---------------------------------------------------------------------------------------------");
        





    }