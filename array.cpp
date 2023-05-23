// Arrays

#include <iostream>
using namespace std;

int main()
{
    // Single Dimensional Array

    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[4] << endl;

    int marks[6];

    for (int i = 0; i < 6; i++)
    {
        cout << "Enter the marks of student " << i + 1 << endl;
        cin >> marks[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout << "Marks of " << i << "th students " << marks[i] << endl;
    }

    // Multi Dimensional Array

    int arr2d[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "The value at " << i << "," << j << " is " << arr2d[i][j] << endl;
        }
    }

    return 0;
}