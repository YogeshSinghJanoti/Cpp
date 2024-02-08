#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/* Given an integer array 'a' sorted in non-decreasing
order, return an array of the squares of each number
sorted in non-decreasing order.*/

void sortedSquaredArray(vector<int> &v)
{

    vector<int> ans;
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr <= right_ptr)
    {
        if (abs(v[left_ptr]) < abs(v[right_ptr]))
        {
            ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--;
        }
        else
        {
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
    }

    reverse(ans.begin(), ans.end());
    v = ans;
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

    sortedSquaredArray(v);

    cout << "After Sorting: ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}