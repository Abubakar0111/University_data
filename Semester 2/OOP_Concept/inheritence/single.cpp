#include <iostream>
using namespace std;

class perant
{
protected:
    int a, b, c;
};

class Child : public perant
{
    int d, e;

public:
    void access()
    {
        a = 1; //from base
        b = 2; //from base
        c = 3; //from base
        d = 4;
        e = 5;
        cout << "A -> " << a << endl;
        cout << "B -> " << b << endl;
        cout << "C -> " << c << endl;
        cout << "D -> " << d << endl;
        cout << "E -> " << e << endl;
    }
};
int main()
{
    Child obj;
    obj.access();
}
