#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the numer:";
    cin>>n;
    
    int digits=0;
    while (n>0)
    {
        digits++;
        n=n/10;
    }
    cout<<"The no. of digits are :"<<digits<<endl;

    return 0;
}