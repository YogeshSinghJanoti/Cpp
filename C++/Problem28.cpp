#include <iostream>
#include <vector>
using namespace std;
/* Given an array of integers 'a',move all the even integers
 at the begining of the array followed by all the odd integers.
 The relative order of odd or even integers does not matter.
 Return any array that satisfies the condition.*/

void sortByParity(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] % 2 == 1 && v[right_ptr] % 2 == 0)
        {
            int temp = v[left_ptr];
            v[left_ptr] = v[right_ptr];
            v[right_ptr] = temp;
            left_ptr++;
            right_ptr--;
        }
        if (v[left_ptr] % 2 == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] % 2 == 1)
        {
            right_ptr--;
        }
    }
}

int main()
{
    int size;
    cout << "Enter size of the array:";
    cin >> size;

    vector<int> v(size);
    cout << "Enter elements of the array:";
    for (int i = 0; i < size; i++)
    {
        cin >> v[i];
    }

    cout << "Before Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sortByParity(v);

    cout << "After Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}