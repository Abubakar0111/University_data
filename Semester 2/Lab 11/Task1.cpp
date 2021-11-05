#include <iostream>

using namespace std;

class Sector;
class Department
{
    string DepartmentName;
    string location;
    Sector *sect;

public:
    Department(Sector *sect)
    {
        this->sect = sect;
    };
    void Set(string d_name, string loc)
    {
        DepartmentName = d_name;
        location = loc;
    }
    void get()
    {
        cout << "Departmrnt name is  : " << DepartmentName << endl;
        cout << "Departmrnt Location is  : " << location << endl;
    }
};

class Sector //owner departmenet
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

class Laboratory
{
    int labID;
    int access_level;
    int sectID;
    int experimentNo;

public:
    Laboratory(int labID, int access_level, int sectID, int experimentNo)
    {
        this->labID = labID;
        this->access_level = access_level;
        this->sectID = sectID;
        this->experimentNo = experimentNo;
    }
};

class Person
{
protected:
    string NAME;
    int AGE;

public:
    Person(string name, int age)
    {
        NAME = name;
        AGE = age;
    }
    void Display()
    {
        cout << "The NAME is : " << NAME << endl;
        cout << "The AGE is : " << AGE << endl;
    }
};
class Scientist : public Person
{
    string sciName;
    Department *dept;
    string designation;

public:
    Scientist(string sciName, string designation, Department *dept, string name, int age) : Person(name, age)
    {
        this->sciName = sciName;
        this->designation = designation;
        this->dept = dept;
    }
    void Display()
    {
        Person::Display();
        cout << "The SciName ia : " << sciName << endl;
        cout << "The designation ia : " << designation << endl;
    }
};

class Engineer : public Person

{
    Laboratory *lab;
    int ID;
    int En;
    int labID, access_level, sectID, experimentNo;

public:
    // Engineer() : Person(NAME, AGE), lab(labID, access_level, sectID, experimentNo)
    // {
    // }
};

int main()
{
    Sector s(12, "Abubakar");
    s.display();

    Department d(&s);
    d.Set("CS", "F11");
    d.get();
    Scientist sc("Pharmacy", "18_Grade", &d, "Abubakar", 20);
    sc.Display();
}