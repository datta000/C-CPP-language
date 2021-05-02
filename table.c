#include <stdio.h>
#include <conio.h>

int main()
{
    int n, fact;
    printf("enter a number:");
    scanf("%d", &n);
    for (fact = 1; fact <= 10; fact++)
    {
        printf("%d*%d=%d\n", n, fact, n * fact);
    }

    return 0;
}