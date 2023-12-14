#include<iostream>
int main(){
    using namespace std;
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=(2*n-1);i+=2){
        cout<<i<<endl;
    }

    return 0;
}