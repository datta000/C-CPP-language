#include <iostream>
using namespace std;
int main()
{
    int sum = 0, i, n;
    cout << "enter the number " << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "the sum of first " << n << " number is " << sum;
    return 0;
}