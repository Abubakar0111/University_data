#include <iostream>

using namespace std;
class OwnerClass
{
    int rollNo;

public:
    string name;
    int marks[3];
    int total;
    int avg;
    void NameF()
    {
        cout << "Enter Student Name : ";
        cin >> name;
    }
    void RollNoF()
    {
        cout << "Enter Student Reg : ";
        cin >> rollNo;
    }
};

int main()
{
    OwnerClass obj[5];
    for (int i = 0; i < 5; i++)
    {
        obj[i].NameF();
        obj[i].RollNoF();
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter Marks " << j + 1 << " : ";
            cin >> obj[i].marks[j];
        }
    }
    int avg = 0, total = 0;
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            total += obj[i].marks[j];
        }
        avg = total / 3;
        cout << "Average : " << avg << endl;
        total = 0;
        // cout<<"------------------------"<<endl;
    }
    int max = obj[0].avg;
    int count = 0;
    for (int i = 1; i < 3; i++)
    {
        if (obj[i].avg > max)
        {
            max = obj[i].avg;
            count = i + 1;
        }
    }
    cout << "Got A grade  " << obj[count].name << endl;
}