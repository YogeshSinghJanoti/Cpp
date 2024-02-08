#include <iostream>
using namespace std;
/* Find the second largest element in the given Array. 
(Assuming there are all unique elements in the Array.)*/

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
    array[largestElementIndex] = -1;

    int secondLargestElementIndex = maxElementIndex(array, size);
    cout << "The second largest element in the array is " << array[secondLargestElementIndex] << endl;

    return 0;
}