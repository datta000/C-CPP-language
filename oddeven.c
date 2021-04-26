#include <stdio.h>
#include <conio.h>
main()
{
    int n;
    printf("enter any number");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    getch();
}