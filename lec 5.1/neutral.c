// find a given number is neutral or not using a ladder if else.

#include<stdio.h>
#include<conio.h>
main()
{
    int num;

    clrscr();

    printf("Enter The Number here : ");
    scanf("%d",&num);

    if(num==0)
    {
        printf("Your Number is Neutral ");
    }
    else if(num>0)
    {
        printf("Your Number is Positive");
    }
    else
    {
        printf("Your Number is Negative");
    }
    
    getch();
}

