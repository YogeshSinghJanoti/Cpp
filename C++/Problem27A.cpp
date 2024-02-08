#include <iostream>
using namespace std;
// Sort an Array consisting of only 0s and 1s.

int main()
{

    int size;
    cout << "Enter the size of array:";
    cin >> size;

    int array[size];
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int zeroes = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 0)
        {
            zeroes++;
        }
    }

    cout << "Before sorting:";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < zeroes; i++)
    {
        array[i] = 0;
    }
    for (int i = zeroes; i < size; i++)
    {
        array[i] = 1;
    }

    cout << "After sorting:";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}