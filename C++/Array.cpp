#include<iostream>
using namespace std;

int main(){
    // Array implementation
    int array[] = {1, 2, 3, 4, 5};
    
    cout<<array[4]<<endl;// Printing element at index 4
    cout<<sizeof(array)<<endl;// Size of the array
    cout<<sizeof(array)/sizeof(array[0])<<endl;// Length of the array
    int size = sizeof(array)/sizeof(array[0]);
    
    // Traversing through an array

    // for loop
    for(int index = 0;index < size;index++){
        cout<<array[index]<<" ";
    }cout<<endl;

    // for each loop
    for(int element:array){
        cout<<element<<" ";
    }cout<<endl;

    // while loop
    int index = 0;
    while (index < size)
    {
        cout<<array[index]<<" ";
        index++;
    }cout<<endl;
    
    char vowels[5];
    // Taking input in an array
    for(char &element:vowels){
        cin>>element;
    }
    // Printing elements in an array
    for(int idx = 0;idx < 5;idx++){
        cout<<vowels[idx]<<" ";
    }cout<<endl;

    return 0;
}