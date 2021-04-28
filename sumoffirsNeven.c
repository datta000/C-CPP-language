#include <stdio.h>
#include <conio.h>
main()
{
    int sum = 0, n, i = 1;
    printf("enter number of even numbers:");
    scanf("%d", &n);
    while (i <= 2 * n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
            i++;
        }
        else
        {
            i++;
        }
    }
    printf("%d", sum);
    getch();
}
