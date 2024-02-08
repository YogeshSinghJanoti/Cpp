#include <iostream>
using namespace std;

int x = 9;
int a = 12; // Global Variable
int main()
{
    int a = 7; // Local Variable
    cout << a << endl;
    cout << x << endl;
    cout << ::a << endl;
    /*Scope resolution operator (::) is used to access 
    the global variable if there are two variables 
    with the same name.*/ 
    return 0;
}