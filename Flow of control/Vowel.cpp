
#include <iostream>
using namespace std;

int main()
{
    char x;

    cout << "Enter the char: ";
    cin >> x;

    if (x == 'a' || x == 'e' || x == 'i' ||
        x == 'o' || x == 'u')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Not a Vowel";
    }

    return 0;
}
