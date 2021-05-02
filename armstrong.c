#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, cube, sum;
    printf("enter a number");
    scanf("%d", &n);
    int a = n;
    for (sum = 0; n > 0;)
    {
        i = n % 10;
        cube = i * i * i;
        sum = sum + cube;
        n = n / 10;
    }
    if (a == sum)
    {
        printf("%d is a armstrong number ", a);
    }
    else
    {
        printf("%d is not a armstrong number", a);
    }

    return 0;
}