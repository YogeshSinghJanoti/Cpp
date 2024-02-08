#include<iostream>
#include<cmath>
using namespace std;
// Function to print area and cricumfrence of a circle.
float area(int r){
    return M_PI * r * r;
}
float cricumfrence(int r){
    return 2 * M_PI * r;
}
int main(){
    int radius;
    cout<<"Enter the radius:";
    cin>>radius;
    cout<<"The area of the circle is:"<<area(radius)<<endl;
    cout<<"The circumference of the circle is:"<<cricumfrence(radius)<<endl;

return 0;
}