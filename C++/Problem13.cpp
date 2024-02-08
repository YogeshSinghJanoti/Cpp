#include <iostream>
using namespace std;
/*Given an integer array and its size,
 reverse the array and print it.*/
int main()
{
    int array[] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
    int size = sizeof(array) / sizeof(array[0]);
    int arrayReverse[size];
    // Reversing the array
    for (int index = 0; index < size; index++)
    {
        arrayReverse[size - (index + 1)] = array[index];
    }
    
    // Printing the reversed array
    for (int i = 0; i < size; i++)
    {
        cout << arrayReverse[i] << " ";
    }
    cout << endl;
    return 0;
}