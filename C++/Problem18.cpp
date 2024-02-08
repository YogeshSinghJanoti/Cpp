#include <iostream>
#include <vector>
using namespace std;
// Count the number of elements strictly greater than value of x.

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

    int x;
    cout << "Enter x:";
    cin >> x;

    int noOfOccurrences = 0;
    for (int i = 0; i <= v.size(); i++)
    {
        if (v[i] > x)
        {
            noOfOccurrences++;
        }
    }
    cout << "The no. of elements greater than " << x << " is/are " << noOfOccurrences << endl;

    return 0;
}