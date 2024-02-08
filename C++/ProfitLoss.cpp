#include<iostream>
using namespace std;
int main(){

    int sp,cp;
    cout<<"Enter Selling Price:";
    cin>>sp;
    cout<<"Enter Cost Price:";
    cin>>cp;

    if(sp>cp)
    cout<<"Your Profit is of "<<sp-cp<<endl;
    else if(cp>sp)
    cout<<"Your Loss is of "<<cp-sp<<endl;
    else
    cout<<"No Profit and Loss"<<endl;

    return 9;
}