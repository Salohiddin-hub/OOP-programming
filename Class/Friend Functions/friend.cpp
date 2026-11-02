#include <iostream>
using namespace std;
class Sample{
    private:
    int num1, num2;
    public:
    Sample(int a, int b){
        num1=a;
        num2=b;
    }
    friend float calculateMean(Sample obj);
};
float calculateMean(Sample obj){
    return (obj.num1+obj.num2)/2.0;
}
int main() {
    Sample s(10, 20);

    float mean = calculateMean(s);
    cout << "Mean: " << mean << '\n';
    return 0;
}
