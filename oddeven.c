#include <stdio.h>
#include <conio.h>
main()
{
    int n;
    printf("enter your age");
    scanf("%d", &n);
    if (n >= 18)
    {
        printf("you are eligible for voting");
    }
    else
    {
        printf("you are not eligible for voting");
    }
    getch();
}