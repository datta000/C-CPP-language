#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a positive number";
    cin >> n;
    while (n < 0)
    {
        cout << "enter a positive number";
        cin >> n;
    }
    cout << n;
    return 0;
}