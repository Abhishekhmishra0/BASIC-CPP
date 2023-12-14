#include<iostream>
int main(){
    using namespace std;
    int r,n,sum=0;
    cout<<"Enter n ";
    cin>>n;
    int temp =n;
    while(n>0){
        r = n%10;
        sum = sum+r*r*r;
        n=n/10;

    }   
    if(sum==temp){
        cout<<temp<<" is an armstrong number";
    }
    else{
        cout<<temp<<" is not an armstrong number";
    }
    return 0;
}