#include<iostream>
int main(){
    using namespace std;
    int a,b;
    cout<<"Enter a ";
    cin>>a;
    cout<<"Enter b ";
    cin>>b;
    int c=1;
    for(int i=1;i<=b;i++){
        c = c*a;
    }
    cout<<"The value of "<<a<<" raised to the power "<<b<<" is "<<c;
    return 0;
}