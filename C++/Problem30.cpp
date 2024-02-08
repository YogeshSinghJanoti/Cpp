#include <iostream>
#include <vector>
using namespace std;
/* Given an integer array 'a', return the prefix sum/
running sum in the same array without creating a
new array.*/

void prefixSum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i] + v[i - 1];
    }
    return;
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

    cout << "Before prefix sum: ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    prefixSum(v);

    cout << "After prefix sum: ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}