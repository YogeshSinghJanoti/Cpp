#include <iostream>
#include <vector>
using namespace std;
/* Rotate the given Array 'a' by k steps,
where k is non-negative. Note: k can be greater
than n as well where n is the size of array 'a'.*/

int main()
{

    vector<int> v;
    int size;
    cout << "Enter size of the array: ";
    cin >> size;

    cout << "Enter the elements in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    int k;
    cout<<"Enter k:";
    cin>>k;
    k = k % v.size();

    cout << "The Array before rotation is:";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());

    cout << "The Array after rotation is:";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}