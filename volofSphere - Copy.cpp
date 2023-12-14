#include<iostream>
int main(){
    using namespace std;
    float r,pi=3.14;
    cout<<"Enter radius of sphere: ";
    cin>>r;
    float V = (4*pi*r*r*r)/3;
    cout<<"\nThe volume of sphere is "<<V;
    return 0;
}