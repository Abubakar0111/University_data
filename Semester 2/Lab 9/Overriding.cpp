#include <iostream>
using namespace std;

class perant
{
protected:
    void show()
    {
        cout << "Base Function" << endl;
    }
};

class child : public perant
{
public:
    void show()
    {
        perant::show();
        cout << "Derived Function" << endl;
    }
};

int main()
{
    child obj;
    obj.show();
}