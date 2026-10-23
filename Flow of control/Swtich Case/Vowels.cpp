
#include <iostream>
using namespace std;

int main()
{
    char x;

    cout << "Enter the char: ";
    cin >> x;

    switch (x)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cout << "Vowel";
            break;

        default:
            cout << "Not a Vowel";
    }

    return 0;
}
