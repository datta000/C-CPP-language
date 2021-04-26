#include <stdio.h>
#include <conio.h>
main()
{
    int n;
    printf("enter any number \n");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("this is a positive number");
    }
    else if (n < 0)
    {
        printf("this is a negetive number");
    }
    else
    {
        printf("this is zero");
    }
    getch();
}