#include <iostream>

using namespace std;
class Test
{
    int a, b, c;

public:
    Test()
    {
        a = 2;
        b = 3;
        c = 4;
    }
    Test(Test &t)
    {
        a = t.a;
        // b = t.b;
        // c = t.c;
    }
    void display()
    {
        cout << "A -> " << a << " B -> " << b << " C -> " << c << endl;
    }
};
int main()
{
    Test t1;
    cout << "Shelow copy " << endl;
    t1.display();
    Test t2(t1);
    cout << "Deep copy " << endl;
    t2.display();
}