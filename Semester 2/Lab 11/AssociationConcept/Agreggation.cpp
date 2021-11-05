#include <iostream>

using namespace std;
class Techer;
class Department
{
    string dptName;
    int howManyTchr;
    friend void output(Department, Techer);

public:
    void setData(string name, int no)
    {
        dptName = name;
        howManyTchr = no;
    }
};

class Techer
{
    string tchrName;
    Department *dpt;
    friend void output(Department, Techer);

public:
    void setData(string name)
    {
        tchrName = name;
    }

    Techer(Department *dpt)
    {
        this->dpt = dpt;
    }
};
void output(Department dpt, Techer tchr)
{
    cout << "Department name is : " << dpt.dptName << endl;
    cout << "Department Have teachers?  " << dpt.howManyTchr << endl;
    cout << "Teacher name is : " << tchr.tchrName << endl;
}
int main()
{
    Department dpt;
    dpt.setData("CS", 30);
    Techer tchr(&dpt);
    tchr.setData("Abubakar");
    output(dpt, tchr);
}