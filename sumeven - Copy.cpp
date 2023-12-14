#include<iostream>
int main(){
    using namespace std;
    int n,rem,sum=0;
    cout<<"Enter n ";
    cin>>n;
    int temp =n;
    int i=0;
    while(n>0){
        rem = n%10;
        sum = sum +rem;
        n=n/100;
    }
    cout<<"Sum of the even digits of "<<temp<<" is "<<sum;
    return 0;
}