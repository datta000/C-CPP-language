#include <stdio.h>
#include <conio.h>

int main()
{
    int n, l, i;
    printf("enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the %d element:", i + 1);
        scanf("%d", &a[i]);
    };
    l = a[0];
    for (i = 1; i < n; i++)
    {
        if (l < a[i])
        {
            l = a[i];
        }
    };
    printf("the largest number of the array is :%d", l);
    return 0;
}