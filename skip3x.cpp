#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "enter the number of integers you want to print ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}