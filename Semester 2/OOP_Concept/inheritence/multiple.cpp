#include <iostream>
using namespace std;

class Base1
{
protected:
    int a, b, c;
};

class Base2
{
protected:
    int d, e, f;
};

class Child : public Base1, public Base2
{
    int g, h;

public:
    void access()
    {
        a = 1; //from base 1
        b = 2; //from base 1
        c = 3; //from base 1

        d = 4; //from base 2
        e = 5; //from base 2
        f = 6; //from base 2

        g = 7; //own
        h = 8; //own

        cout << "A -> " << a << endl;
        cout << "B -> " << b << endl;
        cout << "C -> " << c << endl;
        cout << "D -> " << d << endl;
        cout << "E -> " << e << endl;
        cout << "F -> " << f << endl;
        cout << "G -> " << g << endl;
        cout << "H -> " << h << endl;
    }
};
int main()
{
    Child obj;
    obj.access();
}
