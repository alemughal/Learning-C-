// Functions

#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}; // function prototype

int main()
{

    int num1, num2;
    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second number" << endl;
    cin >> num2;
    cout << "The sum is " << add(num1, num2) << endl; // function call

    return 0;
}