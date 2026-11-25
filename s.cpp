#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string name;
    float salary;

    cout << "Enter name and salary: ";
    cin >> name >> salary;
    ofstream opfile("data.txt");
    //Opening connection to a file using constructor
    opfile << name << "\t" << salary; //Writing data into file
    opfile.close();
    //Closing connection to the file

    cout << "Enter name and salary: ";
    cin >> name >> salary;
    ofstream newopfile;
    newopfile.open("data.txt");
    //Opening connection to a file using open() function
    newopfile << name << "\t" << salary;
    newopfile.close();

    return 0;
}
