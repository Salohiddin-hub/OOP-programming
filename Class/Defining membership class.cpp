#include <iostream>
using namespace std;
#define PI 3.14
class Rect
{
    public:
    int L,W;
    void setdata(int l, int w);
    int Area();
    void display();
};
void Rect::  setdata(int l, int w)
{
    L=l;
    W=w;
}
int Rect::  Area()
{
    return L*W;
}
void Rect:: display()
{
    cout<<"Area: "<<Area()<<endl;
}
int main()
{
    Rect obj1, obj2, x;
    obj1.setdata(5,10);
    obj1.display();
    
}
