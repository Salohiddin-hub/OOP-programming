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


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int i = 1; // Start at 1 so the first increment makes it 2
//     cout << "Enter value of n: ";
//     cin >> n;

//     do {
//         i++; // Increment first
        
//         if (i > n) {
//             break; // Stop if i exceeds n
//         }

//         if (i % 2 == 0) {
//             continue;
//         }
//         else if (i % 3 == 0) {
//             continue;
//         }
//         else if (i % 5 == 0) {
//             continue;
//         }
//         else if (i % 7 == 0) {
//             continue;
//         }
//         else {
//             cout << i << " "; // Print numbers not divisible by 2, 3, 5, or 7
//         }
        
//     } while (i < n); // Correct do-while syntax with a semicolon

//     return 0;
// }










#include <iostream>
using namespace std;
int main() {
    int n;
    int i=2;
    cout << "Enter value of n: ";
    cin>>n;
    do
    {
        i++;
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
            cout<<i;
        } while (i<=n)
        
       
    }
    
    
   
    
}
