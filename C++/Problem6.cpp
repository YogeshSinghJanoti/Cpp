#include <iostream>
using namespace std;
// Check by using function if a person is eligible to vote or not.
void VotingCriteria(int age)
{
    if (age >= 18)
    {
        cout << "YES you can vote." << endl;
    }
    else
    {
        cout << "NO you can not vote." << endl;
    }
}
int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    VotingCriteria(age);
    return 0;
}