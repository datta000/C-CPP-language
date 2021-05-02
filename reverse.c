#include <stdio.h>
#include <conio.h>

int main()
{
    int n, reverse;
    printf("enter a number:");
    scanf("%d", &n);
    for (; n > 0; n = n / 10)
    {
        reverse = n % 10;
        printf("%d", reverse);
    }

    return 0;
}