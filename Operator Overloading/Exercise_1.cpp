#include <iostream>
using namespace std;

class Number {
public:
    int value;
    Number(int v) {
        value = v;
    }
    Number operator / (const Number &n) {
        return Number(this -> value + n.value);
    }
    void display() {
        cout << "Value: " << value << "\n";
    }
};

int main() {
    Number n1(10), n2(20);
    Number n3=n1 / n2;
    n3.display();
    return 0;
}