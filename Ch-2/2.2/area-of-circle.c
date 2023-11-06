#include <stdio.h>
#include<conio.h>
#define pi 3.14
main() 
{
    float r;
    clrscr();
    printf("Enter the radius of the circle :- ");
    scanf("%f",&r);
    printf("The area of the circle is :- %.4f\n",pi*r*r);
    getch();
}