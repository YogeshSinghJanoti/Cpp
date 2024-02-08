#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Decimal no. :";
    cin >> n;

    int ans = 0;
    int base = 1;

    // Convert decimal to binary
    while (n > 0) {
        int remainder = n % 2;
        ans = ans + remainder * base;
        n = n / 2;
        base = base * 10;
    }

    // Output the binary representation
    cout << "The Binary no. is:" << ans << endl;
    return 0;
}