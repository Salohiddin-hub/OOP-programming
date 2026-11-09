#include <iostream>
using namespace std;
#define PI 3.14
class Rect
{
    private:
    int L,W;
    public:
    void setdata()
    {
        cout<<"Enter the L and W: ";
        cin>>L>>W;
      
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
    Rect obj1, obj2, x;
    obj1.setdata();
    obj1.display();
    obj2.setdata();
    obj2.display();
    x.setdata();
    x.display();
    
}
