#include <iostream>
using namespace std;
int main() {
    unsigned long long int n, Fact=1;
    cout << "Enter value of n: ";
    cin>>n;
    for (int i=1; i<=n; i++)
    {
        Fact=Fact*i;
    }
    cout<<"Factorial of "<<n<<"!="<<Fact;
    
    return 0;
}
