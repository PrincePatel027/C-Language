#include<stdio.h>
#include<conio.h>
main()
{
    	int a,b,c;

    	clrscr();
    
    	printf("Enter the number of A = ");
    	scanf("%d",&a);
    	printf("Enter the number of B = ");
    	scanf("%d",&b);

    	c = a ; 
    	a = b ;
    	b = c ;

    	printf("Number of A = %d\n",a);
    	printf("Number of B = %d\n",b);

    	getch();

}
