#include <iostream>
using namespace std;
int main()
{
    int Employee, work, e;
    char Extra;
    cout << "Press 1 for Permanent Employee " << endl;
    cout << "Press 2 for Daily wages Employee " << endl;
    cin >> Employee;
    cout << "Press a to calculate Salary" << endl;
    cout << "Press b to calculate medical charges" << endl;
    cin >> Extra;
    if (Employee == 1 && Extra == 'a')
    {
        cout << "Enter the number of hours you work" << endl;
        cin >> work;
        cout << "sallery = " << work * 800 << endl;
    }
    if (Employee == 1 && Extra == 'b')
    {
        cout << "Enter the number of hours you work";
        cin >> work;
        cout << "Medical charges = " << work * 800 * 0.05 << endl;
    }
    if (Employee == 2 && Extra == 'a')
    {
        cout << "Enter the number of hours you work";
        cin >> work;
        cout << "sallery = " << work * 400 << endl;
    }
    if (Employee == 2 && Extra == 'b')
    {
        cout << "Enter the number of hours you work";
        cin >> work;
        cout << "Medical charges = " << work * 400 * 0.03 << endl;
    }
}
