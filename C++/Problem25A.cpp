#include <iostream>
using namespace std;
/* Rotate the given Array 'a' by k steps,
where k is non-negative. Note: k can be greater
than n as well where n is the size of array 'a'.*/

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

    int k;
    cout << "Enter k:";
    cin >> k;
    k = k % size; // for k greater than size

    int ansArray[size];
    int j = 0;

    // Inserting last k elements in ansArray.
    for (int i = size - k; i < size; i++)
    {
        ansArray[j++] = array[i];
    }

    // Inserting first size - k elements in ansArray.
    for (int i = 0; i < size - k; i++)
    {
        ansArray[j++] = array[i];
    }

    cout << "The Array before rotation is: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "The Array after rotation is: ";
    for (int i = 0; i < size; i++)
    {
        cout << ansArray[i] << " ";
    }
    cout << endl;

    return 0;
}