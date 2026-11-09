// 1. Reverse Number 
#include <iostream>
using namespace std;
class Reverse{
    private:
    int n, reverse=0, remainder, original;
    public:
    void SetData(){
        cout<<"Enter your number: ";
        cin>>n;
        original=n;
    }
    void IsReverse(){
        for(n; n>0; n/=10){
            remainder=n%10;
            reverse=reverse*10 + remainder;
        }
    }
    void Display(){
        cout<<"Reverse of "<<original<<": "<<reverse;
    }
};
int main(){ Reverse obj;
    obj.SetData();
    obj.IsReverse();
    obj.Display();

}
