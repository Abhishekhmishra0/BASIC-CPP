#include <iostream>
using namespace std;
int main()
{
    int a;
    char ch;
    cout << "Enter character ";
    cin >> ch;
    a = (int)ch;
    if (a == 65 || a == 69 || a == 73 || a == 79 || a == 85 || a == 97 || a == 101 || a == 105 || a == 111 || a == 117)
    {
        cout << "VOWEL";
    }
    else
    {
        cout << "CONSONANT";
    }
    return 0;
}