#include <iostream>
using namespace std;
int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
int combination(int n, int r)
{
    int a = fact(n) / (fact(r) * fact(n - r));
    return a;
}
int main()
{
    int n;
    cout << "Enter n ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int a = combination(i, j);
            cout << a << " ";
        }
        cout << endl;
    }

    return 0;
}