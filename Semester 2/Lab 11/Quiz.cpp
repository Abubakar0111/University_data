#include <iostream>

using namespace std;
class Person
{
protected:
    string personName;
    int age;

public:
    virtual void GetValue()
    {
        personName = "abubakar";
        age = 12;
    }
    virtual void print() = 0;
};
class Student : public Person
{
    int Std_id;
    float Cgpa;

public:
    void GetValue()
    {
        Person::GetValue();
        Std_id = 1;
        Cgpa = 4;
    }
    void print()
    {
        cout << "Person name is : " << personName << endl;
        cout << "Person Age is : " << age << endl;
        cout << "Student ID is : " << Std_id << endl;
        cout << "Student GPA is : " << Cgpa << endl;
    }
};
class Regular : public Student
{
    string name_of_School;
    int Fee;

public:
    void GetValue()
    {
        name_of_School = "CUST";
        Fee = 4000;
    }
    void print()
    {
        cout << "Name of achool is : " << name_of_School << endl;
        cout << "The free is : " << Fee << endl;
    }
};
class Private : public Student
{
    string address;
    int Fee;

public:
    void GetValue()
    {
        address = "H Block";
        Fee = 300;
    }
    void print()
    {
        cout << "Private address is : " << address << endl;
        cout << "Private Fee is : " << Fee << endl;
    }
};
int main()
{

    Person *person = new Student();
    // Student student;
    // person = &student;
    cout << "::::::::::::::::::: " << endl;
    person->GetValue();
    person->print();
    Regular regular;
    person = new Regular();
    cout << "::::::::::::::::::: " << endl;
    person->GetValue();
    person->print();
    Private pri;
    person = &pri;
    cout << "::::::::::::::::::: " << endl;
    person->GetValue();
    person->print();
}