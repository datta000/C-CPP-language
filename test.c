#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    printf("enter any number");
    scanf("%d", &i);
    if (i> 0)
    {
        printf("the number is positive");
    }
    else if(i<0)
    {
        printf("the number is negetive");
    }
    else
    {
        printf("the number is zero");
    }
    getch();
}