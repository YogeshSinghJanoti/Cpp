#include <iostream>
using namespace std;
/*Given an integer array(arr) and its size(n),
print the count of odd and even integers present
in the array.*/
int main()
{
    int array[] = {12, 43, 5, 32, 7, 8, 65};
    int oddCount = 0;
    int size = sizeof(array) / sizeof(array[0]);
    for (int index = 0; index < size; index++)
    {
        if (array[index] % 2 != 0)
        {
            oddCount++;
        }
    }
    cout << "The number of odd elements in the array are " << oddCount << " and the number of even elements are " << size - oddCount << endl;
    return 0;
}