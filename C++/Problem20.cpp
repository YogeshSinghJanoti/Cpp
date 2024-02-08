#include<iostream>
using namespace std;
/* Find the difference between the sum of elements 
at even indices to the sum of elements at odd indices.*/

int main(){
    
    int size;
    cout << "Enter the size of array:";
    cin >> size;

    int array[size];
    cout << "Enter the elements in the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int sumEven = 0;
    int sumOdd = 0;
    for(int i = 0;i < size;i++){
        if(i % 2 == 0){
            sumEven += array[i];
        }else{
            sumOdd += array[i];
        }
    }
    cout<<"The the difference between the sum of elements at even indices to the sum of elements at odd indices is "<<sumEven - sumOdd<<endl;

    return 0;
}