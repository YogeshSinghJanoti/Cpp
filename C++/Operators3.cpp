#include<iostream>
using namespace std;
int main(){
    //Bitwise Operators
    int num1=5;//0101
    
    cout<<(num1<<1)<<endl;//Left Shift (It makes the no. multiply by 2^1)
    cout<<(num1>>1)<<endl;//Right Shift (It makes the no. divisible by 2^1)

    int num2=8;//1000
    cout<<(num1&num2)<<endl;//Bitwise AND
    cout<<(num1|num2)<<endl;//Bitwise OR

return 8;
}