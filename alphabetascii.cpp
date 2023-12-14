#include<iostream>
int main(){
    using namespace std;
    int a=97;
    for(int i=1;i<=26;i++){
        char ch = (char)a;
        cout<<a<<" : "<<ch<<endl;
        a++;
    }   
    return 0;
}