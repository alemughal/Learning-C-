#include <iostream>
using namespace std;

int main()
{
    // cout << "Hello World!" << endl;

    // Comments
    // int a,b,c;

    // Data Types

    // int a = 5;
    // float b = 5.5;
    // double c = 5.5555555
    // char d = 'a';
    // string e = "Hello World";

    // Variables

    // short a;
    // int b;
    // long c;
    // long long d;

    // float const score = 45.5;
    // double score2 = 45.322;
    // long double score3 = 45.322;

    // cout << "The score is: " << score << endl;

    // Taking input from User

    // int a, b;

    // cout << "Enter a number: ";
    // cin >> a;
    // cout << "Enter another number: ";
    // cin >> b;

    // cout << "The sum is: " << a + b << endl;
    // cout << "The multiplication is: " << a * b << endl;
    // cout << "The subtraction is: " << a - b << endl;
    // cout << "The divion is: " << (float)a / b << endl;

    // Conditional Statements

    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age > 150)
    {
        cout << "Invalid age" << endl;
    }
    else if (age >= 18)
    {
        cout << "You are eligible to vote" << endl;
    }

    else
    {
        cout << "You are not eligible to vote" << endl;
    }

    return 0;
}
