#include <iostream>
using namespace std;

class Box
{
private:
    int a_private;

protected:
    int a_protected;

public:
    int a_public;

    Box() // constructor
    {
        cout << "Constrotor Called " << endl;
    }

    void display()
    {
        cout << " Class Runing " << endl;
    }

    ~Box() // constructor
    {
        cout << "detrotor Called " << endl;
    }
};

class abubakar
{
};

int main()
{
    Box m1;
    m1.display();
}