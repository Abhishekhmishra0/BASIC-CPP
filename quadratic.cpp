#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, x1, x2, discriminant, realpart, imaginarypart;
    cout << "Enter coefficients : ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots of quadratic equation are " << x1 << " and " << x2;
    }
    else if (discriminant == 0)
    {
        x1 = -b / (2 * a);
        cout << "The roots of quadratic equation are equal and is equal to " << x1;
    }
    else if (discriminant < 0)
    {
        realpart = -b / (2 * a);
        imaginarypart = (sqrt(-discriminant)) / (2 * a);
        cout << "Roots are imaginary and is " << realpart << " + " << imaginarypart << "i";
        cout <<endl<< realpart << " - " << imaginarypart << "i";
    }
    return 0;
}