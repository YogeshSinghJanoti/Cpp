#include <iostream>
using namespace std;
/* Given two arrays a[] and b[] of same size.
Your task is to find the minimum sum of two
elements such that they belong to different
arrays and are not at the same index.*/
int minElement(int X[], int s)
{
    int minIndex = X[0];
    int size = s;
    for (int i = 0; i < size; i++)
    {
        if (X[i] <= minIndex)
        {
            minIndex = X[i];
        }
    }
    return minIndex;
}
int main()
{
    int a[] = {9, 5, 3, 5, 2, 8};
    int sizea = sizeof(a) / sizeof(a[0]);

    int b[] = {7, 6, 10, 4, 9};
    int sizeb = sizeof(b) / sizeof(b[0]);

    int mina = minElement(a, sizea);
    int minb = minElement(b, sizeb);

    cout << "The sum of minimum element of both the array is " << mina + minb << endl;
    return 0;
}