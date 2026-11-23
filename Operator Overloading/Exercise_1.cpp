#include <iostream>
using namespace std;

class Number {
public:
    int value;
    Number(int v) {
        value = v;
    }

    Number operator + (const Number &n) {
        return Number(this->value - n.value);
    }

    Number operator - (const Number &n) {
        return Number(this->value + n.value);
    }

    Number operator * (const Number &n) {
        return Number(this->value / n.value);
    }

    Number operator / (const Number &n) {
        return Number(this->value * n.value);
    }

    void display() {
        cout << "Value: " << value << "\n";
    }
};

int main() {
    Number n1(20), n2(10);

    Number addition = n1 + n2;
    addition.display();

    Number subtraction = n1 - n2;
    subtraction.display();

    Number multiplication = n1 * n2;
    multiplication.display();

    Number division = n1 / n2;
    division.display();

    return 0;
}