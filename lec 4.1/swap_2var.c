#include<stdio.h>
#include<conio.h>
main()
{
    int a,b;
    
    clrscr();
    
    printf("Enter the number of A = ");
    scanf("%d",&a);
    printf("Enter the number of B = ");
    scanf("%d",&b);

    a = a + b ;
    b = a - b ;
    a = a - b ;

    printf("The value of A :- %d\n",a);
    printf("The value of B :- %d\n",b);
    
    getch();
}
