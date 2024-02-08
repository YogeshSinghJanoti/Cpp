#include<iostream>
using namespace std;

int main() {
    // Given two numbers a and b. Find a raised to the power b.
    int a, b;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;

    int result = 1; // Initialize result to 1
    for (int i = 1; i <= b; i++) {
        result *= a;
    }
    cout << "The answer is: " << result << endl;

    return 0;
}
