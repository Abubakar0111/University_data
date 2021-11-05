#include <iostream>

using namespace std;
int main()
{

    int salary, choose;
    cout << "Enter your Salary : ";
    cin >> salary;
    cout << "Press 1 to calculate gas bill charges"
            "\nPress 2 to calculate electricity bill charges"
            "\nPress 3 to calculate fueling charges"
            "\nPress 4 to calculate house rent charges\n==> ";
    cin >> choose;
    if (choose == 1)
    {
        cout << "Monthly gas bill charges : " << salary / 100 * 10 << endl;
    }
    if (choose == 2)
    {
        cout << "Electricity bill charges : " << salary / 100 * 5 << endl;
    }
    if (choose == 3)
    {
        cout << "Fueling bill charges : " << salary / 100 * 10 << endl;
    }
    if (choose == 4)
    {
        cout << "House rent charges : " << salary / 100 * 15 << endl;
    }
}