#include <iostream>
using namespace std;

int main() {
    int i=1;
    double limit;
    int sum=0;

    cout<<"Enter the value of n: ";
    cin>>limit;
    do
    {
        if(i%2 == 0)
        sum+=i;
        i++;   
    } while(i<=limit);
    cout<<"Sum = "<<sum;
    return 0;
}
