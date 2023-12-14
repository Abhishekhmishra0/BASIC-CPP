#include<iostream>
int main(){
    using namespace std;
    int a,b,c,d,e,f,m1,m2;
    cout<<"Enter(a,b): ";
    cin>>a;
    cin>>b;
    cout<<"Enter(c,d): ";
    cin>>c;
    cin>>d;
    cout<<"Enter(e,f): ";
    cin>>e;
    cin>>f;
    m1=(d-b)/(c-a);
    m2=(f-d)/(e-c);
    if(m1==m2){
        cout<<"points lie on the same line ";
    }
    else{
        cout<<"points does not lie on the same line";
    }
    return 0;
}