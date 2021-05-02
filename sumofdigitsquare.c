#include <stdio.h>
#include <conio.h>
main()
{
    int i, n, sqr, sum;
    printf("enter a number");
    scanf("%d", &n);
    for (sum = 0; n > 0;)
    {
        i = n % 10;
        sqr = i * i;
        sum = sum + sqr;
        n = n / 10;
    };
    printf("%d", sum);
    getch();
}