#include <iostream>
using namespace std;

void Swap (int &x, int &y){
    int t;
    t=x;
    x=y;
    y=t;     
}

int main() 
{

    int x, y;
    cin >>x>>y;
    cout <<"Before Swap: "<<"X= "<<x<<"Y= "<<y<<endl;
    Swap(x, y);
    cout <<"After Swap: "<<"X= "<<x<<"Y= "<<y<<endl;
    return 0;
}
