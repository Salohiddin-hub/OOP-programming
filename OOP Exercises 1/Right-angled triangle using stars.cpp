#include <iostream>
using namespace std;

int main()
{
    for (int n = 1; n < 5; ++n)
    {
        cout << "\n";

        for (int i = 1; i <= n; ++i)
        {
            cout << " * ";
        }
    }

    return 0;
}
