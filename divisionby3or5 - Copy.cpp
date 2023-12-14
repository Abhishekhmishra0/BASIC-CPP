#include<iostream>
int main(){
    using namespace std;
    int number;
    cout<<"Enter number ";
    cin>>number;
    if(number%5==0 && number%3==0){
        cout<<number<<" is divisible by both 5 and 3";
    }
    else if(number%5!=0 && number%3==0){
        cout<<number<<" is divisible by only 3";
    }
    else if(number%5==0 && number%3!=0){
        cout<<number<<" is divisible by 5 only";
    }
    else{
        cout<<"Number is not divisible by 3 and 5";
    }
    return 0;
}