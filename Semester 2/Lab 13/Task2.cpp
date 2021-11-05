#include <iostream>

using namespace std;
class Employee
{
    string name;
    int emp_id;
    int salary;

public:
    static int count;
    Employee()
    {
        count++;
    }
    void setter(string name, int id, int salary)
    {
        this->name = name;
        emp_id = id;
        this->salary = salary;
    }
    void getter()
    {
        cout << "Name is : " << name << endl;
        cout << "Emp ID is : " << emp_id << endl;
        cout << "Salary is : " << salary << endl;
    }
};
int Employee::count = 0;

int main()
{
    string nameIS;
    int empID, salary;
    cout << "Enter name : ";
    cin >> nameIS;
    cout << "Enter emp ID : ";
    cin >> empID;
    cout << "Enter Salary ID : ";
    cin >> salary;

    Employee A;
    A.setter(nameIS, empID, salary);

    A.getter();
    cout << "The Object created : " << Employee::count << " Times " << endl;
}