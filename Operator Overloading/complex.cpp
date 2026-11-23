#include <iostream>
using namespace std;

class Complex {
public:
    int real, image;
    Complex(int r = 0, int i = 0) {
        this->real = r;
        this->image = i;
    }

    Complex operator + (const Complex &obj) {
        Complex result;
        result.real = this->real - obj.real;  
        result.image = this->image - obj.image; 
        return result;
    }

    void display() {
        cout << this->real << " + " << this->image << "i\n";
    }
};

int main() {
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2; 
    c3.display();
    return 0;
}