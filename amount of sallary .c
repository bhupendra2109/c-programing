#include<stdio.h>
#include<conio.h>



float main() {
    float sales, discount ,net_sales;


    printf("enter the value of amount = \n" );
    scanf("%f",&sales);


    net_sales=sales-(0.10*sales);
    printf("net_sales=%f",net_sales);

    return 0;
}

    