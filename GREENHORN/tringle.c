#include<stdio.h>
#include<conio.h>
main()
{
    float f,s,t;

    clrscr();

    printf("Enter first angle here : ");
    scanf("%f",&f);
    printf("Enter second angle here : ");
    scanf("%f",&s);

    f += s ;
    t = 180 - f ;

    printf("Your third agnle is here : %.2f\n",t);

    getch();

}
