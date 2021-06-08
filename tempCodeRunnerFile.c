#include<stdio.h>
#include<conio.h>
main ()
{
    int hour,second;
    printf("enter the time in hour");
    scanf("%d" , &hour);
    second= hour*3600;
    printf ("%d", second);
    getch();
}