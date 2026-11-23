#include <iostream>
using namespace std;
class Number{
    public:
    int value;
    Number(int v){
        value=v;
    }
    void operator -(){
        value=-value;
    }
    void display(){
        cout<<"Value: "<<value;
    }
};
int main(){
    Number n1(10);
    
    n1.operator - ();
    n1.display();
}