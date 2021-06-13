#include <stdio.h>
#include <conio.h>
#define max 3
void main()
{
    int a[max][max], row, colmn;
    printf("enter the elements of matrix");
    for (row = 0; row < 3; row++)
    {
        for (colmn = 0; colmn < 3; colmn++)
            scanf("%d", &a[row][colmn]);
    }
    printf("the  matrix is\n");
    for (row = 0; row < 3; row++)
    {
        for (colmn = 0; colmn < 3; colmn++)
        {
            printf("%d ", a[row][colmn]);
        }
        printf("\n");
    }
    
        printf("the transpose of matrix is\n");
    for (row = 0; row < 3; row)
    {
        for (colmn = 0; colmn < 3; colmn++)
        {
            printf("%d ", a[colmn][row]);
        }
        printf("\n");
    }
    getch();
}