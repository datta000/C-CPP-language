#include <iostream>
using namespace std;
int main()
{
    char car;
    cout << "enter initials of a car" << endl;
    cin >> car;
    switch (car)
    {
    case 'a':
        cout << "aston martin" << endl;
        break;

    case 'b':
        cout << "buggati chiron" << endl;
        break;

    case 'c':
        cout << "cadilac" << endl;
        break;

    case 'd':
        cout << "datsun" << endl;
        break;

    default:
        break;
    }
    return 0;
}