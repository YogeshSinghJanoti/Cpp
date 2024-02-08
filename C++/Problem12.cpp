#include <iostream>
using namespace std;
/* Given an integer array and its size,
find the sum of the greatest and the smallest integer
present in the array.*/
int main()
{
    int array[] = {12, 23, 34, 45, 56};
    int size = sizeof(array) / sizeof(array[0]);
    int max = array[0];
    int min = array[0];
    for (int index = 0; index < size; index++)
    {
        if (array[index] >= max)
        {
            max = array[index];
        }
    }
    for (int index = 0; index < size; index++)
    {
        if (array[index] <= min)
        {
            min = array[index];
        }
    }
    cout << "The sum of greatest and smallest integer of the array is " << max + min << endl;
    return 0;
}