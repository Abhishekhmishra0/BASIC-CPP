#include<iostream>
int fibo(int n){
        if(n<=2){
            return 1;
        }
        return fibo(n-1)+fibo(n-2);
}
int main(){
    using namespace std;
    int n;
    cout<<"Enter n ";
    cin>>n;
  for(int i=1;i<=n;i++){
    int c = fibo(i);
    cout<<c<<endl;
  }
    
    return 0;
}