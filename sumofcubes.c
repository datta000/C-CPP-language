#include <stdio.h>
#include <conio.h>
main()
{
    int sum = 0, cube, i = 1, n;
    printf("enter a integer");
    scanf("%d", &n);
    while (i <= n)
    {
        cube = i * i * i;
        sum = sum + cube;
        i++;
    }
    printf("%d", sum);
    getch();
}
