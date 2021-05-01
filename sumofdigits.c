#include <stdio.h>
#include <conio.h>
main()
{
    int n, val, sum;
    printf("enter a number");
    scanf("%d", &n);
    for (sum = 0; n > 0;)
    {
        val = n % 10;
        sum = sum + val;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}
