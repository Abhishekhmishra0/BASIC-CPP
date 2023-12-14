#include<iostream>
int main(){
    using namespace std;
    int a,b,c;
    cout<<"Enter a ";
    cin>>a;
    cout<<"Enter b ";
    cin>>b;
    cout<<"Enter c ";
    cin>>c;
    if(a>b&&a>c){
        cout<<a<<" is greatest ";
    }
    else if(b>a&&b>c){
        cout<<b<<" is greatest ";
    }
    else{
        cout<<c<<" is greatest";
    }
    
    return 0;
}