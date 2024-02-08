#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        // Print the left side of the triangle
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == n) {
                cout << j << " ";
            } else {
                cout << "  "; // Two spaces for hollow spaces
            }
        }

        cout << endl;
    }

    return 0;
}
