#include<iostream>
using namespace std;
// To calculate sum of all the elements in a given array
int main(){
    
    int array[] = {3,4,2,6,2,1,7,9,4,7,8};
    
    int size = sizeof(array)/sizeof(array[0]);
    
    int sum = 0;

    for(int index = 0;index < size;index++){
        sum += array[index];
    }
    
    cout<<"The sum of all the elements of the array is "<<sum<<endl;
    
    return 0;
}