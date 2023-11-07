#include<stdio.h>
#include<conio.h>
main()
{
    int x,y,z;

    clrscr();

    printf("Enter The Number Of X :- ");
    scanf("%d",&x);
    printf("Enter The Number Of Y :- ");
    scanf("%d",&y);
    printf("Enter The Number Of Z :- ");
    scanf("%d",&z);

    printf("Your formula answer here :- %d\n",(x+y+z)^2);

    getch();
}