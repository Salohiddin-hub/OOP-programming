#include <iostream>
using namespace std;
void Fun (int x=5 );
int main() {
    Fun();//Function calling
}
// Function Definition
void Fun(int x)
{
    cout<<"With Parameter value: "<<x;
}
