#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    std::cout<<"Enter a:";
    std::cin>>a;
    std::cout<<"Enter b:";
    std::cin>>b;
    c=a;
    a=b;
    b=c;
    std::cout<<"a is:"<<a<<endl;
    std::cout<<"b is:"<<b<<endl;
    std::cout<<"sum is:"<<a+b<<endl;
}