#include <iostream>
#include <vector>
using namespace std;
// Sort an Array consisting of only 0s and 1s.

void sortZeroesAndOnes(vector<int> &v)
{
    int zeroesCount = 0;

    // Counting Zeroes
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            zeroesCount++;
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        if (i < zeroesCount)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
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

    cout << "Before Sorting:";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    sortZeroesAndOnes(v);

    cout << "After Sorting:";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}