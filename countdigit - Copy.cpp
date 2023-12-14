#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter n "   ;
    cin>>n;
    int temp =n;
    int count =0;
    while(n>0){
        n= n/10;
        count++;
    }
    cout<<"Number of digits in "<<temp<<" is "<<count;
    return 0;
}
