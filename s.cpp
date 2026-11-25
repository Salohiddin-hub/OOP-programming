#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string name;
    int salary;
    ofstream opfile("data.txt");
    for(int i=1; i<=3; i++)
    {
        cout<<"Enter name and salary of employee "<<i<<":";
        cin>>name>>salary;
        opfile<<name<<"\t"<<salary<<endl; // (slaydda endl bo'lmasa ham ajratish uchun foydali)
    }
    opfile.close();
    cout<<"Data stored into file."<<endl;
    cout<<"Reading data from file..."<<endl;
    ifstream ipfile("data.txt");
    while(!ipfile.eof())   //Checking for end of file
    {
        ipfile>>name>>salary;
        cout<<"Name: "<<name<<" Salary: "<<salary<<endl;
    }
    ipfile.close();
    return 0;
}
