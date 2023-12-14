#include<iostream>
int main(){
    using namespace std;
    int a,b,c,d;
    cout<<"Enter a ";
    cin>>a;
    cout<<"Enter b ";
    cin>>b;
    cout<<"Enter c ";
    cin>>c;
    cout<<"Enter d ";
    cin>>d;
    if(a>b&&a>c&&a>d){
        cout<<a<<" is the greatest";
    }
    if(b>a&&b>c&&b>d){
        cout<<b<<" is the greatest";
    }
    if(c>b&&c>a&&c>d){
        cout<<c<<" is the greatest";
    }
    else{
        cout<<d<<" is the greatest";
    }
    return 0;
}