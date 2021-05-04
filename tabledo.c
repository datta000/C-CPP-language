#include <stdio.h>
#include <conio.h>

int main()
{
    int n, m = 1, product;
    printf("enter a number:");
    scanf("%d", &n);
    do
    {

        printf("%d*%d=%d\n", n, m, product = n * m);
        m++;
    } while (m <= 10);

    return 0;
}