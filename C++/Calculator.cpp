#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter 2 integers:"<<endl;
    cin>>n1>>n2;

    char Operator;
    cout<<"Enter an operator(+,-,*,/,%):"<<endl;
    cin>>Operator;
    //switch and case is used.
    switch(Operator){
        case '+':
        cout<<"Sum is : "<<n1+n2;
        break;
        case '-':
        cout<<"Difference is : "<<n1-n2;
        break;
        case '*':
        cout<<"Product is : "<<n1*n2;
        break;
        case '/':
        cout<<"Division is : "<<n1/n2;
        break;
        case '%':
        cout<<"Remainder is : "<<n1%n2;
        break;
        default:
        cout<<"Enter a valid operator."<<endl;
        break;
    }

return 0;
}