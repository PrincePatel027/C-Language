#include<stdio.h>
#include<conio.h>
main()
{
    float p,r,n;

    clrscr();
    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the rate: ");
    scanf("%f",&r);
    printf("Enter the number of years: ");
    scanf("%f",&n);
    printf("Your Principal Amount is :- %d",(p*r*n)/100);
    getch();

}