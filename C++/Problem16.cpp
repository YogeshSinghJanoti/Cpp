#include <iostream>
#include <vector>
using namespace std;
// Find the last occurrence of an element x in a given vector.

int main()
{

    vector<int> v(6);
    cout << "Enter the elements in the vector:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int x;
    cout << "Enter x:";
    cin >> x;

    int occurrence = -1;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] == x)
    //     {
    //         occurrence = i;
    //     }
    // }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            occurrence = i;
            break;
        }
    }
    cout << "The last occurrence of the element " << x << "in the vector is at " << occurrence << endl;
    return 0;
}