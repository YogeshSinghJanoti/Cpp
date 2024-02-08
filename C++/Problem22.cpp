#include <iostream>
using namespace std;
/* Find the total number of triplets in the Array
whose sum is equal to the given value x.*/

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

    int triplets = 0;
    int x;
    cout << "Enter x:";
    cin >> x;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if (array[i] + array[j] + array[k] == x)
                {
                    triplets++;
                }
            }
        }
    }
    cout << "The total number of triplets in the Array whose sum is equal to the given value " << x << " is/are " << triplets << endl;

    return 0;
}