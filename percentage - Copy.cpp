#include<iostream>
int main(){
    using namespace std;
    float a,b,c,d,e,percent;
    cout<<"Enter mark of first subject: ";
    cin>>a;
    cout<<"\nEnter mark of second subject: ";
    cin>>b;
    cout<<"\nEnter mark of third subject: ";
    cin>>c;
    cout<<"\nEnter mark of fourth subject: ";
    cin>>d;
    cout<<"\nEnter mark of fifth subject: ";
    cin>>e;
    percent = (a+b+c+d+e)/5;
    cout<<"The Percentage of Student is: "<<percent;

    return 0;
}