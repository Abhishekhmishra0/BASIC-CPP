#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    cout << endl
         << endl;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}