#include <iostream>
using namespace std;

class Number {
public:
    int value;
    Number(int v) {
        value = v;
    }
    void operator-() {
        value = -value;
    }
    void display() {
        cout << "Value: " << value << "\n";
    }
};

int main() {
    Number num(10);
    cout << "Original: ";
    num.display();
    -num;
    cout << "After negation: ";
    num.display();
    return 0;
}