#include<stdio.h>
#include<conio.h>
main()
{
    float w,h;

    clrscr();
    printf("Enter Rectangle Width Here : "); 
    scanf("%f",&w);
    printf("Enter Rectangle Height Here : ");
    scanf("%f",&h);
    p("Area of Rectangle is = %.2f",w*h);
    getch();
}