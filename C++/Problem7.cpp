#include<iostream>
using namespace std;
// Print all the odd numbers between two numbers.
bool isOdd(int num){
    if(num % 2 == 0)
    return false;
    else{
        return true;
    }
}
int main(){
    int a = 1,b = 10;
    for(int i = a;i <= b;i++){
        if(isOdd(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}