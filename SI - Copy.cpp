#include <iostream>
int main()
{
    using namespace std;
    float p, t, r, si;
    cout << "Enter your principle Amount: ";
    cin >> p;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
    cout << "\nEnter Rate: ";
    cin >> r;
    cout << "\nEnter Time: ";
    cin >> t;
    si = (p * t * r) / 100;
    cout << "The simple interest is: " << si;

    return 0;
}