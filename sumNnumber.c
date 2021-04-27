#include <stdio.h>
#include <conio.h>
main()
{
    int sum = 0, i, n;
    printf("enter any number");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("%d", sum);
    getch();
}