#include <iostream>
using namespace std;
void info (int id, string fname, string dept);
int main() {
    info(12260175,"Salohiddin","ISE");//Function calling
    info(12260220,"Abdulloh","IBT");//Function calling    
}
// Function Definition
void info(int id, string fname, string dept)
{
    cout<<"ID "<<id<<"\n"<<"Name: "<<fname<<"\n"<<"Department: "<<dept<<endl<<"\n";
}
