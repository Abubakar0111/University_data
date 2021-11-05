#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
    ifstream infile;
    infile.open("Try.txt");
    string name;
    infile >> name;
    cout << "Name is : " << name << endl;
    infile >> name;
    cout << "Name is : " << name << endl;
    infile >> name;
    cout << "Name is : " << name << endl;
}