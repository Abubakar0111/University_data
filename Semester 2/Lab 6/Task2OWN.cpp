#include <iostream>
#include <fstream>
using namespace std;
class Emp
{
    int size;
    string e_working[100],  e_name[100], search;
    int e_Salary[100];
    string Botton;

public:
    Emp() {}
    void inPut()
    {
        cout << "How many Records of Employees : ";
        cin >> size;
        ofstream input;
        input.open("Employees.txt", ios ::app);
        for (int i = 0; i < size; i++)
        {
            cout << "Enter Employee " << i + 1 << " Name : ";
            cin >> e_name[i];
            input << e_name[i] << endl;

            cout << "Enter Employee " << i + 1 << " Working : ";
            cin >> e_working[i];
            input << e_working[i] << endl;

            cout << "Enter Employee " << i + 1 << " Salary : ";
            cin >> e_Salary[i];
            input << e_Salary[i] << endl;
        }
    }
    void SearchF()
    {
        ifstream infile;
        infile.open("Employees.txt");
        cout << "Search ( Name, Working ) : ";
        cin >> search;
        for (int i = 0; i < size*3; i++)
        {
            infile >> e_name[i];
            infile >> e_working[i];
            infile >> e_Salary[i];
            
            if (search == e_name[i] || search == e_working[i])
            {
                Botton = e_name[i];
            }
        }
        infile.close();
        ifstream infile2;
        infile2.open("Employees.txt");
        cout << "\n::::: O U T P U T :::::: " << endl;
        for (int i = 0; i < size*3; i++)
        {
            if (e_name[i] == Botton)
            {
                cout << "Employees Name : " << e_name[i] << endl;
                cout << "Employees Working : " << e_working[i] << endl;
                cout << "Employees Salary : " << e_Salary[i] << endl;
            }
        }
        infile.close();
    }
 
void max_Salary()
{
    int Gs = 0;
    for (int i = 0; i < size; i++)
    {
        if (e_Salary[i] > 50000)
        {
            Gs++;
        }
    }
    cout << "We have " << Gs << " Employee Above 50,000 Salary " << endl;
}
};

int main()
{

    Emp obj;
    obj.inPut();
    obj.SearchF();
    obj.max_Salary();
}