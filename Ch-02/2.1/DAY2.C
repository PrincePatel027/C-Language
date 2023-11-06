#include<stdio.h>
#include<conio.h>
main()
{
	int a=12,b=6;

	clrscr();

	printf("\n");

	printf("Addition of %d and %d is %d \n",a,b,a+b);
	printf("Substraction of %d and %d is %d \n",a,b,a-b);
	printf("Multiplication of %d and %d is %d \n",a,b,a*b);
	printf("Division of %d and %d is %d \n",a,b,a/b);
	printf("Modulo of %d and %d is %d \n",a,b,a%b);

	printf("\n");

	printf("----------------------------\n");
	printf("|\t%d + %d\t= %d\t   |\n",a,b,a+b);
	printf("|\t%d - %d\t= %d\t   |\n",a,b,a-b);
	printf("|\t%d * %d\t= %d\t   |\n",a,b,a*b);
	printf("|\t%d / %d\t= %d\t   |\n",a,b,a/b);
	printf("|\t%d %% %d\t= %d\t   |\n",a,b,a%b);
	printf("----------------------------\n");

	getch();
	
}