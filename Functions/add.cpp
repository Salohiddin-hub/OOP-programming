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



#include <iostream>
using namespace std;

void Add(int x, int y){
     cout <<"Result: "<<x+y;
}

int main() {
    
    int a, b;
    cout<<"Enter values: ";
    cin >>a>>b;
    Add (a,b);
    return 0;
}
