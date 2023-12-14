#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter n ";
    cin>>n;
    int sum =0;
    for(int i=1;i<=n;i++){
        sum = sum+i;

    }
    cout<<"Sum of the series is "<<sum;

    return 0;
}