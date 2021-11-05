#include <iostream>
using namespace std;

class Android_Device
{
public:
    int IMEIno;
    string Type;
    string Make;
    int Modelno;
    float Memory;
    string Operating_System;

    void input()
    {
        cout << "::::: Enter input :::::\n\n";
        cout << "Enter IMI number : ";
        cin >> IMEIno;
        cout << "Enter Type : ";
        cin >> Type;
        cout << "Enter Make : ";
        cin >> Make;
        cout << "Enter Model number : ";
        cin >> Modelno;
        cout << "Enter Memory : ";
        cin >> Memory;
        cout << "Enter Operating system : ";
        cin >> Operating_System;
    }
    void output()
    {
        cout << "::::: your output :::::\n\n";
        cout << "Your IMI ::::  is  : " << IMEIno << endl;
        cout << "Your type ::::  is  : " << Type << endl;
        cout << "Your Make ::::  is  : " << Make << endl;
        cout << "Your Model no ::::  is  : " << Modelno << endl;
        cout << "Your Memory  ::::  is  : " << Memory << endl;
        cout << "Your Operating system  ::::  is  : " << Operating_System << endl;
    }
};

int main()
{
    Android_Device myClass;
    myClass.input();
    myClass.output();
}