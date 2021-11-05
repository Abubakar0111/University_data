#include <iostream>

using namespace std;
class Doctor
{

public:
    string name;
    int timing;
    Doctor(string name, int timing)
    {
        this->name = name;
        this->timing = timing;
    }
};

class Patient
{
    bool report;

public:
    Patient(Doctor &dr, bool report)
    {
        this->report = report;
        cout << "The name is : " << dr.name << endl;
        cout << "The Timing is : " << dr.timing << endl;
        cout << "The Patient report  is : " << report << endl;
    }
};
int main()
{
    Doctor dr1("Abubakar", 33);
    Patient pt(dr1, true);
}