#include<iostream>
int main(){
    using namespace std;
    int number;
    cout<<"Enter number ";
    cin>>number;
    if(number<10 && number>=0){
        cout<<number<<" is a one digit number ";
    }
    else if(number<100 && number>9){
        cout<<number<<" is a two digit number ";
    }
    else if(number<1000 && number>99){
        cout<<number<<" is a three digit number ";
    }
    else if(number<10000 && number>999){
        cout<<number<<" is a four digit number ";
    }
    else{
        cout<<"Number is out of program capacity";
    }
    return 0;
}