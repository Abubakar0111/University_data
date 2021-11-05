#include <iostream>

using namespace std;
class Employee
{
protected:
    string name;
    int EmployeeID;
};

class HourlyEmployee : public Employee
{
    int hourlyIncome;

public:
    HourlyEmployee(string namm, int EmpID, int Hour_incm)
    {
        name = namm;
        EmployeeID = EmpID;
        hourlyIncome = Hour_incm;
    }
    void the_hourly_income()
    {
        cout << "Hourly Employee incom of " << hourlyIncome << "hr is : " << hourlyIncome * 150 << endl;
    }
};
class PermanentEmployee : public Employee
{
    int hourlyIncome;

public:
    PermanentEmployee(string namm, int EmpID, int Hour_incm = 240)
    {
        name = namm;
        EmployeeID = EmpID;
        hourlyIncome = Hour_incm;
    }
    void calculate_the_income()
    {
        cout << "Permanent Employee total incom is : " << hourlyIncome * 150 << endl;
    }
};
int main()
{
    HourlyEmployee HourlyINCM("Abubakar", 1, 2);
    HourlyINCM.the_hourly_income();
    PermanentEmployee PermanentINCM("Umar", 2);
    PermanentINCM.calculate_the_income();
}