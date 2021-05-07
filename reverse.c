#include <stdio.h>
#include <conio.h>

int main()
{
    int n, rem, reverse = 0;
    printf("enter a number:");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;

        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    printf("%d", reverse);

    return 0;
}