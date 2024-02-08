#include <iostream>
using namespace std;
/* Taking input in an array from the user and printing the
minimum and maximum element of the array. Also,
reversing the array. */
int main()
{
    int num;
    cout << "Enter the number of elements in the array :";
    cin >> num;
    int array[num];
    int arrayReverse[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the element at index " << i << ":";
        cin >> array[i];
    }
    int minElement = array[0];
    for (int i = 0; i < num; i++)
    {
        if (minElement >= array[i])
        {
            minElement = array[i];
        }
    }

    int maxElement = array[0];
    for (int i = 0; i < num; i++)
    {
        if (maxElement <= array[i])
        {
            maxElement = array[i];
        }
    }

    for (int i = 0; i < num; i++)
    {
        arrayReverse[num - (i + 1)] = array[i];
    }
    cout << "The reversed array is ";
    for (int i = 0; i < num; i++)
    {
        cout << arrayReverse[i] << " ";
    }
    cout << endl;
    cout << "The minimum element of the array is " << minElement << " and the maximum element is " << maxElement << endl;
    return 0;
}