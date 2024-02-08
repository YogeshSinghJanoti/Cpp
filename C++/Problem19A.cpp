#include <iostream>
#include <vector>
using namespace std;
// Check if the given vector is sorted or not.

int main()
{
    int size;
    cout << "Enter the size of vector:";
    cin >> size;

    vector<int> v(size);
    cout << "Enter the elements in the vector:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    bool sortedFlag = true;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
        {
            sortedFlag = false;
        }
    }
    if (sortedFlag == true)
    {
        cout << "The vector is sorted." << endl;
    }
    else
    {
        cout << "The vector is unsorted." << endl;
    }

    return 0;
}