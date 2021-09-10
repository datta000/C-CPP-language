#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three number ";
    cin >> a >> b >> c;
    cout << "the greatest number is " << endl;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }
}