#include <iostream>
using namespace std;
#define PI 3.14
int square(int a){
    return a*a;
}
int rectangle(int a, int b){
    return a*b;
}

int circle(float radius){
    return PI*radius*radius;
}
int main() {
    int a, b;
    double radius;

    cout<<"Area of square is "<<square(5)<<endl;
    cout<<"Area of rectangle is "<<rectangle(7,8)<<endl;
    cout<<"Area of circle is "<<circle(6.0)<<endl;
    
    return 0;
}
