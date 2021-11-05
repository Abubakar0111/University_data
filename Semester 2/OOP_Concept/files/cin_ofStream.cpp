#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
    ofstream out;
    out.open("Try.txt", ios::app);
    string name;
    cout << "Enter your name : ";
    cin >> name;
    out << name << endl;
    out.close();
}