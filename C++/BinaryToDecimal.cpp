#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Binary no. :";
    cin >> n;

    int ans = 0;
    int power = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans += lastDigit * power;
        power *= 2;
        n /= 10;
    }
    cout << "The Decimal no. is:";
    cout << ans << endl;
    return 0;
}