#include<iostream>
int main(){
    int number;
    using namespace std;
    cout<<"Enter a number ";                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    cin>>number;
    if(number<0){
        cout<<"Absolute value of number is "<<(-1*number);
    }
    else{
    cout<<"Absolute value of number is "<<(number);
    }
    return 0;
}