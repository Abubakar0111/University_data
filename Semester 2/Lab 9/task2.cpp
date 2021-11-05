#include <iostream>
#include <string>
using namespace std;
class Laboratory
{
protected:
    string Name;
    string Location;

public:
    Laboratory()
    {
        Name = " NoName ";
        Location = " Null ";
    }
    void input()
    {
        cout << " Enter Name: ";
        cin >> Name;
        cout << " Enter Location: ";
        cin >> Location;
    }
    void show()
    {
        cout << " Name: " << this->Name << endl;
        cout << " Location: " << this->Location << endl;
    }
};
class WetLab : public Laboratory
{
protected:
    int no_of_microscopes;
    string Scientist_name;

public:
    void input()
    {
        cout << " Enter Scientist Name: ";
        cin >> Scientist_name;
        cout << " Enter Number of_Microscopes: ";
        cin >> no_of_microscopes;
    }

    void show()
    {
        cout << " Scientist Name: " << Scientist_name << endl;
        cout << " Number of Microscopes: " << no_of_microscopes << endl;
    }
};
class DryLab : public Laboratory
{
private:
    int no_of_computers;
    int Capacity;

public:
    void input()
    {
        cout << " Enter Number of computers: ";
        cin >> no_of_computers;
        cout << " Enter Capacity: ";
        cin >> Capacity;
    }
    void show()
    {
        cout << " Number of Computers: " << no_of_computers << endl;
        cout << " Capacity: " << Capacity << endl;
    }
};
int main()
{
    Laboratory Obj1;
    Obj1.input();
    Obj1.show();
    cout << endl;

    DryLab Obj2;
    Obj2.input();
    Obj2.show();
    cout << endl;

    WetLab Obj3;
    Obj3.input();
    Obj3.show();
}