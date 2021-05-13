#include <stdio.h>
#include <conio.h>

int main()
{
    int n, i = 1;
    printf("enter a number:");
    scanf("%d", &n);
    do
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
            i++;
        }
        else
        {
            i++;
        }
    } while (i <= 2 * n);
    return 0;
}