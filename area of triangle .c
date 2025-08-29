#include<stdio.h>
#include<conio.h>



float main() {
    float L,H,Area;


    printf("the value of HIGHT= \n" );
    scanf("%f",&H);

    printf("the value of LENGTH= \n");
    scanf("%f",&L);


    Area=(H*L)/2;
    printf("The area of triangle= %.3f",Area);

    return 0;
}

