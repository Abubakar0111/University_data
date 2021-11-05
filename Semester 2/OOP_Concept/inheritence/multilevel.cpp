#include <iostream>
using namespace std;

class Base1
{
protected:
    int a, b, c;
};

class child1 : public Base1
{
protected:
    int d, e, f;
};

class Child2 : public child1
{
    int g, h;

public:
    void access()
    {
        a = 1; //from base 1
        b = 2; //from base 1
        c = 3; //from base 1

        d = 4; //from child 1
        e = 5; //from child 1
        f = 6; //from child 1

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
    Child2 obj;
    obj.access();
}
