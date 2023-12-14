#include<iostream>
int main(){
    using namespace std;
    int number;
    cout<<"Enter a number ";
    cin>>number;
    if(number%2==0){
        cout<<number<<" is an even number";
    }
    else{
         cout<<number<<" is an odd number";
    }
    return 0;
}