// #include <iostream>
// using namespace std;

// int Add(int x, int y){
//     return x+y;
// }

// int main() {
    
//     int a, b;
//     cin >>a>>b;
//     cout <<"Result: "<< Add (a, b );
//     return 0;
  
// }



// #include <iostream>
// using namespace std;

// void Add(int x, int y){
//      cout <<"Result: "<<x+y;
// }

// int main() {
    
//     int a, b;
//     cout<<"Enter values: ";
//     cin >>a>>b;
//     Add (a,b);
//     return 0;
// }



#include <iostream>
using namespace std;

void Add(){
     int a, b;
     cout<<"Enter values: ";
     cin >>a>>b;
     cout <<"Result: "<<a+b;
}

int main() {

    Add ();
    return 0;
}



#include <iostream>
using namespace std;

int Fib(int n)
{
    if (n == 0 || n == 1) { 
        return n; // Baza holati (Base case)
    } 
    else {
        return Fib(n - 1) + Fib(n - 2); // Rekursiv chaqiruv
    }
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << Fib(n);
    return 0;
}
