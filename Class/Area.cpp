#include <iostream>
using namespace std;
#define PI 3.14
class Rect
{
    private:
    int L,W;
    public:
    void setdata(int l, int w)
    {
        L=l;
        W=w;
    }
    int Area()
    {
        return L*W;
    }
    void display()
    {
        cout<<"Area: "<<Area()<<endl;
    }
    
};
int main()
{
    Rect obj1, obj2;
    obj1.setdata(5, 7);
    obj1.display();
    obj2.setdata(3,9);
    obj2.display();
}
