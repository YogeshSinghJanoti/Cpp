#include<iostream>
using namespace std;

void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int a = 12;
    int b = 45;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}