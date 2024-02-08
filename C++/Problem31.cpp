#include <iostream>
#include <vector>
using namespace std;
/* Check if we can partition the array into two subarrays with
equal sum. More formally,check that the prefix sum of a part
of the array is equal to the suffix sum of rest of the array.*/

bool checkPrefixSuffixSum(vector<int> &v)
{
    int totalSum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        totalSum += v[i];
    }

    int prefixSum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        prefixSum += v[i];
        int suffixSum = totalSum - prefixSum;
        if (suffixSum == prefixSum)
        {
            return true;
        }
    }
    return false;
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

    cout << checkPrefixSuffixSum(v) << endl;

    return 0;
}