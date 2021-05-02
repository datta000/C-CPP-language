#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, cube, sum;
    printf("enter a number");
    scanf("%d", &n);
    for (sum = 0; n > 0;)
    {
        i = n % 10;
        cube = i * i * i;
        sum = sum + cube;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}