#include<stdio.h>
#include<conio.h>
int main()
{
float r, pi=3.14,area;
printf("Enter the radius of a circle : ");
scanf("%f",&r);
area = pi*r*r;
printf("\n Area of a circle is %.2f",area );
getch();
}