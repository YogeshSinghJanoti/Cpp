#include <iostream>
#include <vector>
using namespace std;
/* Given an array of integers of size n. Answer q queries where
you need to print the sum of values in a given range of indices
from l to r (both included).
Note: The values of l and r in queries follow 1-based indexing.*/

int main()
{
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    vector<int> v(size + 1, 0);
    cout << "Enter elements of the array: ";
    for (int i = 1; i <= size; i++)
    {
        cin >> v[i];
    }

    for (int i = 1; i <= size; i++)
    {
        v[i] += v[i - 1];
    }

    int queries;
    cout << "Enter the number of queries: ";
    cin >> queries;

    while (queries--)
    {
        int l, r;
        cout << "Enter 'l' and 'r': ";
        cin >> l >> r;

        int ans = 0;
        ans = v[r] - v[l - 1];
        cout << ans << endl;
    }

    return 0;
}