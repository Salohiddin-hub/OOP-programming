// #include <iostream>
// using namespace std;
// int main() {

//     int n;
//     cout << "\n Enter number: ";
//     cin>>n;

//     for(int i=1; i<11; ++i)
//     {
//         cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {

//     int n,i;
    
//     for(int i=1; i<11; ++i)
//     {
//         cout<<"\nMultiplication Table of "<<i<<endl;
//         for(int n=1; n<11; n++)
//         {
//             cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
//         }
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {

    int n,i;
    
    for(int n=1; n<5; ++n)
    {
        cout<<"\n";
        for(int i=1; i<=n; ++i)
        {
            cout<<" * ";
        }
    }
    return 0;
}
