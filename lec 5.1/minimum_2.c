// find the minimum number from the given 2 numbers using if else.


#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;

    clrscr();

    printf("Enter the value of A : ");
    scanf("%d",&a);
    printf("Enter the value of B : ");
    scanf("%d",&b);

    if (a==b)
    {
        printf("A and B are Equal with value of = %d",a);
    }
    else if(a<b)
    {
        printf("A is Minimum with value of = %d",a);
    }
    else 
    {
        printf("B is bigger with value of = %d",b);
    }

    getch();

}
