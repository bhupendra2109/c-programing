#include<stdio.h>
#include<conio.h>



float main() {
    float a,b,c,average;


    printf("the value of A= \n" );
    scanf("%f",&a);

    printf("the value of B= \n");
    scanf("%f",&b);

    printf("the valu of C= \n");
    scanf("%f",&c);

    average=(a+b+c)/3;
    printf("AVERAGE= %.3f", average);

    return 0;
}

