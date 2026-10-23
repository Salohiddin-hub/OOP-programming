
#include <iostream>
using namespace std;

int main()
{
    float score;

    cout << "Enter your Score: ";
    cin >> score;

    int x = score / 10;

    switch (x)
    {
        case 10:
        case 9:
            cout << "A+";
            break;

        case 8:
            cout << "B+";
            break;

        case 7:
            cout << "C+";
            break;

        case 6:
            cout << "D+";
            break;

        default:
            cout << "F";
    }

    return 0;
}
