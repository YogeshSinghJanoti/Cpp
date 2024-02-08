#include <iostream>
#include <vector>
using namespace std;
/* Given Q queries, check if the given number is
present in the array or not.
Note: Value of all the elements in the array is
less than 10 to the power 5.*/

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

    const int N = 1e5 + 10;
    vector<int> freq(N, 0);
    for (int i = 0; i < size; i++)
    {
        freq[v[i]]++;
    }

    int queries;
    cout << "Enter the no. of queries:";
    cin >> queries;

    while (queries--)
    {
        int querryElement;
        cout << "Enter the querry:";
        cin >> querryElement;
        cout << "The element is " << freq[querryElement] << " times in the array." << endl;
    }

    return 0;
}