#include<iostream>
using namespace std;
int main(){
    
    int score;
    cout<<"Enter Score:"<<endl;
    cin>>score;
    //Score >80 Print Well Done.
    //Sccore 50-80 Print Can Imporve.
    //Score <50 Print Poor Performance.

    if(score>80)
    {
        cout<<"Well Done."<<endl;
    }else if(score>50)
    {
        cout<<"Can Improve."<<endl;
    }
    else
        cout<<"Poor Performance."<<endl;

    return 8;
}