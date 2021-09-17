#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "enter any number";
    cin >> n;
    for ( i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "non prime number";
            break;
        }
    }
    if (i==n){
        cout<<"prime number";

    }
    
    return 0;
}