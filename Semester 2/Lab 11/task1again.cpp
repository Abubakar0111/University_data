#include <iostream>

using namespace std;
class Department
{
    string DepartmentName;
    string location;
    int id;
    string name;

public:
    void input(Sector sect)
    {
        sect.display();
    }
};

class Sector
{

    int sectID;
    string sectName;

public:
    Sector(int id, string name)
    {
        sectID = id;
        sectName = name;
    }
    void display()
    {
        cout << "The sector ID is : " << sectID << endl;
        cout << "The sector Name  is : " << sectName << endl;
    }
};
int main()
{
    Department dpt;

    int id;
    string name;
    cout << "Enter ID : ";
    cin >> id;
    cout << "Enter name ; ";
    cin >> name;
    Sector sct(id, name);
    dpt.input(sct);
}