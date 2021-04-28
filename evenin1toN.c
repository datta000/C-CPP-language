#include <stdio.h>
#include <conio.h>
main()
{
    int n, i = 1;
    printf("enter any integer");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            i++;
        }
        else
        {
            i++;
        }
    }
    getch();
}
