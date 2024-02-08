#include <iostream>
using namespace std;
/* Find the second largest element in the given Array.*/

int maxElementIndex(int array[], int size)
{
    int max = INT_MIN;
    int maxIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

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

    int largestElementIndex = maxElementIndex(array, size);
    int largestElement = array[largestElementIndex];

    int secondLargestElement = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > secondLargestElement && array[i] != largestElement)
        {
            secondLargestElement = array[i];
        }
    }

    cout << "The second largest element in the array is " << secondLargestElement << endl;

    return 0;
}