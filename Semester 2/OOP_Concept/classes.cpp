#include <iostream>

using namespace std;
class PROFILE
{
public:
    long int number;
    string name;
    string university;
    int semester;
};
int main()
{

    PROFILE p;
    p.name = "ABUBAKAR";
    p.number = 3344708531;
    p.university = "Capital University Islamabad";
    p.semester = 2;

    cout << ":::: Welcome to My Profile :::: " << endl;
    cout << "Name is : " << p.name << endl;
    cout << "Number is : " << p.number << endl;
    cout << "University is : " << p.university << endl;
    cout << "Semester is : " << p.semester << endl;
}