#include <iostream>

using namespace std;
class Test
{
    int a, *b;

public:
    Test(Test &t)
    {
        a = t.a;
        b = new int;
        *b = *t.b;
        // c = t.c;
    }
    Test()
    {
        b = new int;
    }
    void set(int c, int d)
    {
        a = c;
        *b = d;
    }
    void display()
    {
        cout << "a -> " << a << endl;
        cout << "b -> " << *b << endl;
    }
};
int main()
{

    Test t1;
    cout << "1" << endl;
    t1.set(10, 20);
    t1.display();

    cout << "2" << endl;
    Test t2(t1);
    t2.display();
}