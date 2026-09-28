// #include <iostream>
// using namespace std;
// int main() {
//     unsigned long long int n, Fact=1;
//     cout << "Enter value of n: ";
//     cin>>n;
//     for (int i=1; i<=n; i++)
//     {
//         Fact=Fact*i;
//     }
//     cout<<"Factorial of "<<n<<"!="<<Fact;
    
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int n;
    int i=1;
    cout << "Enter value of n: ";
    cin>>n;
    do{
        i++;
        if (i>n)
        {
            break;
        }
        if (i%2==0)
        {
            continue;
        }
        else if (i%3==0)
        {
            continue;
        }
        else if (i%5==0)
        {
            continue;
        }
        else if (i%7==0)
        {
            continue;
        }
        else
        {
            cout<<i<< " ";
        }
        }while (i<n);  
    
    }
