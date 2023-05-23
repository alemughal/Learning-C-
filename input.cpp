#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    cout << "The sum is: " << a + b << endl;
    cout << "The multiplication is: " << a * b << endl;
    cout << "The subtraction is: " << a - b << endl;
    cout << "The divion is: " << (float)a / b << endl;

    return 0;
}
