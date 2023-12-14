#include<iostream>
int main(){
    using namespace std;
    int year;
    cout<<"Enter Year: ";
    cin>>year;
    if(year%4==0&& year%100!=0){
        cout<<year<<" is a leap year";
    }
    else if(year%400==0){
        cout<<year<<" is a leap year";
    }
    else{
        cout<<year<<" is not a leap year";
    }
    return 0;
}