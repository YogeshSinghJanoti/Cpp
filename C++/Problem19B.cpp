#include <iostream>
using namespace std;
// Check if the given array is sorted or not.

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

    bool sortedFlag = true;
    for (int i = 1; i < size; i++)
    {
        if (array[i] < array[i - 1])
        {
            sortedFlag = false;
        }
    }
    if (sortedFlag == true)
    {
        cout << "The array is sorted." << endl;
    }
    else
    {
        cout << "The array is unsorted." << endl;
    }

    return 0;
}