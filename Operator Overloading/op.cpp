#include <iostream>
using namespace std;
class Complex {
    public:
    int real, image;
    Complex(int r=0, int i=0){
        real=r;
        image=i;
    }
    Complex operator + (const Complex &obj){
        Complex result;
        result.real=real+obj.real;
        result.image=image+obj.image;
        return result;
    }
    void display(){
        cout<<real<<" + "<<image<<"i\n";
    }
};
int main(){
    Complex c1(3,4), c2(1,2);
    Complex c3=c1+c2;
    cout<<"Sum of complex numbers: ";
    c3.display();
    return 0;
}