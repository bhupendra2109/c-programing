#include<stdio.h>
#include<conio.h>



float main() {
    float p,r,n, interest;


    printf("the value of p= \n" );
    scanf("%f",&p);

    printf("the value of r= \n");
    scanf("%f",&r);

    printf("the valu of m= \n");
    scanf("%f",&n);

    interest=(p*r*n)/100;
    printf("ans d= %.3f", interest);

    return 0;
}

