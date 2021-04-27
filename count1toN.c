#include <stdio.h>
#include <conio.h>
main()
{
    int i = 1, n;
    printf("enter the last digit\n");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    getch();
}