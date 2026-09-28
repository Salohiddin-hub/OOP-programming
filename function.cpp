#include <iostream>
using namespace std;
void info (int id, string fname, string dept);
int main() {
    info(12260175,"Salohiddin","ISE");//Function calling
    info(12260220,"Abdulloh","IBT");//Function calling    
}
// Function Definition
void info(int id, string fname, string dept)
{
    cout<<"ID "<<id<<"\n"<<"Name: "<<fname<<"\n"<<"Department: "<<dept<<endl<<"\n";
}


#include <iostream>
using namespace std;
void info (int id, string fname, string grade);

int main() {
    int score;
    string grade;
    cout<<"Enter your score: ";
    cin >>score;
    
    if (score>=90)
    {
        grade="A+";
    }
    else if (score>=80)
    {
        grade="B+";
    }
    else
    {
        grade="F";
    }
    info(12260175,"Salohiddin",grade);//Function calling
}
// Function Definition
void info(int id, string fname, string grade)
{
    
   
    cout<<"ID "<<id<<"\n"<<"Name: "<<fname<<"\n"<<"Grade: "<<grade<<endl<<"\n";
    
    
}
