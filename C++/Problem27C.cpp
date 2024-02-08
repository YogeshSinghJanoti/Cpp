#include <iostream>
#include <vector>
using namespace std;
// Sort an Array consisting of only 0s and 1s.

void sortZeroesAndOnes(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
        if (v[left_ptr] == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] == 1)
        {
            right_ptr--;
        }
    }

    return;
}

int main()
{

    int size;
    cout << "Enter size of the array:";
    cin >> size;

    vector<int> v(size);
    cout << "Enter elements of the array:" << endl;
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

    sortZeroesAndOnes(v);

    cout << "After Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}