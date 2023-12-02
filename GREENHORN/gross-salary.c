

#include<stdio.h>
#include<conio.h>
main()
{
    float gross,hra,da,ta;
    clrscr();
    printf("Enter gross salary here : ");
    scanf("%f",&gross);
    printf("Enter HRA here : ");
    scanf("%f",&hra);
    printf("Enter DA here : ");
    scanf("%f",&da);
    printf("Enter TA here : ");
    scanf("%f",&ta);
    hra = gross * ( hra / 100 );
    da = gross * ( da / 100 );
    ta = gross * ( ta / 100 );
    printf("Your Gross salary here : %.3f",gross+hra+da+ta);
    getch();
}
