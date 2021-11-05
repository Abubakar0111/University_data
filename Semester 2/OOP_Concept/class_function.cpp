#include <iostream>
using namespace std;
class PROFILE
{

private:
    long int number;
    string name;
    string university;
    int semester;

public:
    void myFunction()
    {
        name = "ABUBAKAR";
        number = 3344708531;
        university = "Capital University Islamabad";
        semester = 2;

        cout << ":::: Welcome to My Profile :::: " << endl;
        cout << "Name is : " << name << endl;
        cout << "Number is : " << number << endl;
        cout << "University is : " << university << endl;
        cout << "Semester is : " << semester << endl;
    }
};
int main()
{

    PROFILE p;
    p.myFunction();
}