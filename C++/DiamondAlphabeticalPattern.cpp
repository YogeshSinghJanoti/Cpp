#include<iostream>
using namespace std;
int main(){

    int no_of_chars=9;
    for(int j=0;j<no_of_chars;j++){
        char ch=(char)('A'+'j');
        cout<<ch;
    }
    return 0;
}