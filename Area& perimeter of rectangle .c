#include<stdio.h>
#include<conio.h>



float main() {
    float L,B,Area,Perimeter;


    printf("the value of Length= \n" );
    scanf("%f",&L);

    printf("the value of breadth= \n");
    scanf("%f",&B);
    Area=L*L;
    Perimeter=(4)*(L+B);

    printf("Area= %.3f\n",Area);
    printf("perimeter=%.3f", Perimeter);

    return 0;
}

