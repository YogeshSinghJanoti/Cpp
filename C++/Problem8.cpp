#include <iostream>
#include <cmath>
using namespace std;
// Print all Prime numbers between two numbers.
bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num1, num2;
    cout << "Enter the first number:";
    cin >> num1;
    cout << "Enter the second number:";
    cin >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}