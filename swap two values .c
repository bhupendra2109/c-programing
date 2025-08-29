#include<stdio.h>
#include<conio.h>



int main() {
    int a,b,temp;


    printf("the value of a= \n" );
    scanf("%d",&a);
    printf("the value of b= \n");
    scanf("%d",&b);
    
    temp=a;
    a=b;
    b=temp;
    
    
    printf("a=%d\n", a);
    printf("b=%d\n",b);

    return 0;
}

