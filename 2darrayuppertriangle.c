#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n, m, sum = 0;
    printf("enter the number of rows and coloumn:");
    scanf("%d %d", &i, &j);
    int a[i][j];
    printf("enter the elements of the %d * %d matrix", i, j);
    for (n = 0; n < i; n++)
    {
        for (m = 0; m < j; m++)
        {
            printf("enter the %d %d element:", n, m);
            scanf("%d", &a[n][m]);
        }
    };

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)

        {
            if (i + j < 3)
                sum = sum + a[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}