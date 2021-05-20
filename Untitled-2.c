#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10], i, sum = 0;
    float avg;
    // clrscr();
    printf("enter 10 numbers");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    // avg = sum / 10;
    printf("the avg is %d", sum);
    return 0;
}