#include<stdio.h>
#include<conio.h>
main ()
{
    int km,m;
    printf("enter the distance in km");
    scanf("%d" , &km );
    m= km*1000;
    printf ("%d", m);
    return 0;
}