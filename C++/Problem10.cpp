#include <iostream>
using namespace std;
// To find maximum value out of all the elements of the array
int main()
{
    int array[] = {12, 23, 34, 45, 56};
    int size = sizeof(array) / sizeof(array[0]);
    int max = array[0];
    int maxIndex;
    for (int index = 0; index < size; index++)
    {
        if (array[index] >= max)
        {
            max = array[index];
            maxIndex = index;
        }
    }
    cout << "The maximum element of the array is " << max << " at index " << maxIndex << endl;
    return 0;
}