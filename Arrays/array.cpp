#include <iostream>
#include <string>
using namespace std;
class Matrix{
    private:
        int Data[2][3];
    public:
        void input()
        {
            for (int i=0; i<2; i++)
                for (int j=0; j<3; j++ )
            {
                cout<<"Data["<<i<<"]["<<j<<"]=";
                cin>>Data[i][j];
            }
        }
        void display()
        {
            for (int i=0; i<2; i++){
                for (int j=0; j<3; j++ )
            {
                cout<<Data[i][j]<<" ";
            }
            cout<<endl;}
        }

};

int main() {
    Matrix obj;
    cout<<"Enter the elements of 2x3 Matrix"<<endl;
    obj.input();
    cout<<"Display the elements of 2x3 Matrix"<<endl;
    obj.display();


    return 0;
}
