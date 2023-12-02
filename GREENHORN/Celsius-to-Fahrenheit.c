// °C to °F is: ° F = ( °C × 9/5 ) + 32

#include<stdio.h>
#include<conio.h>
main()
{
    float f,c;

    clrscr();

    printf("Enter Celsius : ");
    scanf("%f",&c);

    f = ( c * 9 / 5 ) + 32 ;

    printf("Fahrenhit = %.3f \n",f);

    getch();
}

