#include <stdio.h>
#include <stdlib.h>
int biggestNumber(int, int, int);
int main()
{
    int a, b, c;
    printf("Enter any the three numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    int result = biggestNumber(a, b, c);
    printf("the largest number is: %d\n", result);
    getch();
    return 0;
}
int biggestNumber(int a, int b, int c)
{ //function definition with parameter
    if (a > b && a > c)
    {

        return a;
    }
    else if (b > c && b > a)
    {
        return b;
    }
    else if (c > b && c > a)
    {
        return c;
    }
}