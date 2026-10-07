#include <iostream>
using namespace std;
int Func(int n) {
    if (n==0)
    {
        return 1;    
    }
    else
    {
        return n*Func(n-1);
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter a value of n: ";
    cin>>n;
    cout << "Result: " << Func(n) << endl;
    return 0;
}
