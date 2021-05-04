#include <stdio.h>
#include <conio.h>

int main()
{
    int n, mod;
    printf("enter a number:");
    scanf("%d", &n);
    do
    {
        mod = n % 10;
        printf("%d", mod);
        n = n / 10;

    } while (n > 0);

    return 0;
}