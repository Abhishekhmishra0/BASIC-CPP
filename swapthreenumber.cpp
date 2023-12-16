#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int temp = a;
    a = b;
    b = c;
    c = temp;
    cout << "Value of a is : " << a << endl;
    cout << "Value of b is : " << b << endl;
    cout << "Value of c is : " << c << endl;

    return 0;
}