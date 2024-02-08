#include<iostream>
using namespace std;
int main(){
    //Size of operator.
    int a=4;
    cout<<sizeof(a)<<endl;
    char name='a';
    cout<<sizeof(name)<<endl;
     
    //Ternary Operator.
    bool flag;
    a==name? flag = true : flag = false;
    cout<<flag<<endl;

    //Adress Operator.
    cout<<(&a)<<endl;

    //Increment Operators.
    int c=6;
    cout<<(c++)<<endl;
    cout<<(c)<<endl;
    cout<<(++c)<<endl;
 
    //Decrement Operators.
    int b=5;
    cout<<(b--)<<endl;
    cout<<(b)<<endl;
    cout<<(--b)<<endl;
return 0;
}