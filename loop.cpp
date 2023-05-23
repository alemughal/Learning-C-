// Loops

#include <iostream>
using namespace std;

int main()
{
    // for loop

    for (int i = 0; i < 34; i++)
    {
        cout << "we are at index" << i << endl;
    }

    // while loop

    int index = 0;
    while (index < 34)
    {
        cout << "we are at index" << index << endl;
        index++;
    }

    // do-while loop

    int index2 = 0;

    do
    {
        cout << "we are at index" << index2 << endl;
        index2++;
    } while (index2 > 345);

    return 0;
}