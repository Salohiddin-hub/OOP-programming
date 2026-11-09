#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 11; ++i)
    {
        cout << "\nMultiplication Table of " << i << endl;

        for (int n = 1; n < 11; ++n)
        {
            cout << n << " * " << i << " = " << n * i << endl;
        }
    }

    return 0;
}
