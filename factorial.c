#include <stdio.h>
#include <conio.h>

int main()
{
    int n, fact;
    printf("enter a number:");
    scanf("%d", &n);
    for (fact = 1; n > 0; n--)
    {
        fact = fact * n;
        printf("%d*", n);
    };
    printf("\nthe factorial is %d ", fact);
    return 0;
}