#include <iostream>
using namespace std;

int main()
{
    int secret = 7;
    int guess;

    do
    {
        cout << "Guess the number (1-10): ";
        cin >> guess;

        if (guess < secret)
            cout << "Too low!\n";
        else if (guess > secret)
            cout << "Too high!\n";
        else
            cout << "Correct! You win!\n";

    } while (guess != secret);

    return 0;
}
