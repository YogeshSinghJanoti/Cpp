#include <iostream>
using namespace std;
/* Find the unique number in a given Array
where all the elements are being repeated
twice with one value being unique.*/

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

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {
                array[i] = array[j] = -1;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            cout << "The unique element in the given array is " << array[i] << endl;
        }
    }

    return 0;
}