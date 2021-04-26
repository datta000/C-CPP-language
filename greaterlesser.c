#include <stdio.h>
#include <conio.h>
main()
{
    int first, second;
    printf("enter the first number \n");
    scanf("%d", &first);
    printf("enter the second number \n");
    scanf("%d", &second);
    if (first > second)
    {
        printf(" the first number is greater then the second number ");
    }
    else if (second > first)
    {
        printf("the second number is greater than first the  number");
    }
    else
    {
        printf("the first number is equal to the second number");
    }
    getch();
}