#include <iostream>
using namespace std;
int main() {
    int rows;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}