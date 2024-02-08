#include <iostream>
using namespace std;

int main()
{

    int array[] = {9, 45, 23, 53, 12, 16, 92, 3, 46};
    int key = 12;
    int size = sizeof(array) / sizeof(array[0]);
    for (int index = 0; index < size; index++)
    {
        if (key == array[index])
        {
            cout << "Yes it is present at index " << index << endl;
            break;
        }
        }

    return 0;
}