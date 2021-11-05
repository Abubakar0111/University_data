#include <iostream>

using namespace std;
class Person
{
    int rollNo;
    string name;
    int total;
    int avg[3];

public:
    int marks[3];
    void Input()
    {
        cout << "Enter Student Name : ";
        cin >> name;
        cout << "Enter Student Reg : ";
        cin >> rollNo;
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter Marks " << j + 1 << " : ";
            cin >> marks[j];
        }
    }
    void TotalF()
    {
        for (int j = 0; j < 3; j++)
        {
            total += marks[j];
        }
        cout << "The Student total marks : " << total << endl;
        ;
        total = 0;
    }
    int *Avg(int * arr) // returning Array in function 
    {
        float tot;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                tot += marks[j];
            }
            arr[i] = tot / 3;
            tot = 0;
        }
        return arr;
    }
};

int main()
{
    Person obj[3];
    int arr[3]; //array that passes in function 

for (int i = 0; i < 3; i++)
{
    obj[i].Input();
}
for (int i = 0; i < 3; i++)
{
    obj[i].TotalF();
}
    for (int i = 0; i < 3; i++)
    {
        cout<<*(obj[i].Avg(arr))<<endl; //calling

    }

}
