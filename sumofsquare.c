#include <stdio.h>
#include <conio.h>
main()
{
    int sum = 0, sqr, i = 1, n;
    printf("enter a integer");
    scanf("%d", &n);
    while (i <= n)
    {
        sqr = i * i;
        sum = sum + sqr;
        i++;
    }
    printf("%d", sum);
    getch();
}
