#include <stdio.h>
#include <conio.h>

int main()
{
    int n, product = 1;
    printf("enter a number:");
    scanf("%d", &n);
    do
    {
        product = product * n;
        printf("%d*", n);
        n--;

    } while (n > 0);
    printf("\nthe factorial is %d", product);
    return 0;
}