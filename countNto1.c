#include <stdio.h>
#include <conio.h>
main()
{
    int n;
    printf("enter the last digit\n");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("%d\n", n);
        --n;
    }
    getch();
}