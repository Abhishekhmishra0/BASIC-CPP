#include <iostream>
using namespace std;
void check(int a, int b, int c)
{
    if (((a * a + b * b) == c * c) || ((a * a + c * c) == b * b) || ((b * b + c * c) == a * a))
    {
        cout << "Check passed";
    }
    else
    {
        cout << "CHECK FAIL";
    }
}
int main()
{
    int p, b, h;
    cout << "Enter p ";
    cin >> p;
    cout << "Enter b ";
    cin >> b;
    cout << "Enter h ";
    cin >> h;
    check(p, b, h);
    return 0;
}