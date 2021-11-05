#include <iostream>
using namespace std;
class PersonClass
{
protected:
    string personName;
    int age;

public:
    virtual void Setter()
    {
        personName = "Mudassar";
        age = 12;
    }
    virtual void print() = 0;
};

class Student : public PersonClass
{
    int student_id;
    float CGPA;

public:
    void Setter()
    {
        PersonClass::Setter();
        student_id = 1000;
        CGPA = 5;
    }
    virtual void print()
    {
        cout << "The Person name is : " << personName << endl;
        cout << "The Person age is : " << age << endl;
        cout << "The Student ID is : " << student_id << endl;
        cout << "The Student GPA is : " << CGPA << endl;
    }
};

class Regular : public Student
{
    string nameOfSchool;
    int fee;

public:
    void Setter()
    {
        nameOfSchool = "NUST";
        fee = 8000;
    }
    virtual void print()
    {
        cout << "The Name of school is : " << nameOfSchool << endl;
        cout << "The Fee is : " << fee << endl;
    }
};
class Private : public Student
{
    string address;
    int fee;

public:
    void Setter()
    {
        address = "M Block";
        fee = 1899;
    }
    virtual void print()
    {
        cout << "The Private address is : " << address << endl;
        cout << "The Private Fee is : " << fee << endl;
    }
};
int main()
{
    PersonClass *person = new Student();
    person->Setter();
    cout << "3 3 3 3 3 3################################### 3 3 3 3 3 " << endl;

    person->print();
    Regular regular;
    person = &regular;
    cout << "3 3 3 3 3 3################################### 3 3 3 3 3 " << endl;

    person->Setter();
    person->print();
    Private pri;
    person = &pri;
    cout << "3 3 3 3 3 3################################### 3 3 3 3 3 " << endl;

    person->Setter();
    person->print();
}
