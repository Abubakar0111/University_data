#include <iostream>
using namespace std;

class Base1
{
protected:
    int a, b, c;
};

class Child1 : public Base1
{
    int d, e, f;

public:
    void access()
    {
        a = 1; //from base 1
        b = 2; //from base 1
        c = 3; //from base 1

        d = 4; //from child 1
        e = 5; //from child 1
        f = 6; //from child 1

        cout << "A -> " << a << endl;
        cout << "B -> " << b << endl;
        cout << "C -> " << c << endl;
        cout << "D -> " << d << endl;
        cout << "E -> " << e << endl;
        cout << "F -> " << f << endl;
    }
};
class Child2 : public Base1
{
    int d, e, f;

public:
    void access()
    {
        a = 7; //from base 1
        b = 8; //from base 1
        c = 9; //from base 1

        d = 10; //from child 2
        e = 11; //from child 2
        f = 12; //from child 2

        cout << "A -> " << a << endl;
        cout << "B -> " << b << endl;
        cout << "C -> " << c << endl;
        cout << "D -> " << d << endl;
        cout << "E -> " << e << endl;
        cout << "F -> " << f << endl;
    }
};

class Child3 : public Base1
{
    int d, e, f;

public:
    void access()
    {
        a = 13; //from base 1
        b = 14; //from base 1
        c = 15; //from base 1

        d = 16; //from child 3
        e = 17; //from child 3
        f = 18; //from child 3

        cout << "A -> " << a << endl;
        cout << "B -> " << b << endl;
        cout << "C -> " << c << endl;
        cout << "D -> " << d << endl;
        cout << "E -> " << e << endl;
        cout << "F -> " << f << endl;
    }
};
int main()
{
    cout << "\n::::::: CHILD 1 :::::: " << endl;
    Child1 obj1;
    obj1.access();
    cout << "\n::::::: CHILD 2 :::::: " << endl;
    Child2 obj2;
    obj2.access();
    cout << "\n::::::: CHILD 3 :::::: " << endl;
    Child3 obj3;
    obj3.access();
}
