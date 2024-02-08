#include<iostream>
using namespace std;
//Square of first n natural numbers.
int square(int x){
    return x * x;
}
int main(){
    for (int i = 0; i <= 5; i++)
    {
        cout<<square(i)<<" ";
    }
    
    return 0;
}