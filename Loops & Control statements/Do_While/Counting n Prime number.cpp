#include <iostream>
using namespace std;
int main() {
    int n;
    int i=1;
    cout << "Enter value of n: ";
    cin>>n;
    cout<<"2, 3, 5, 7, ";
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
