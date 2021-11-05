#include <iostream>

using namespace std;
class Box
{
private:
    int a, b, c;

public:
    Box()
    { //constructor
        a = 10;
        b = 20;
        c = 30;
    }

    Box(Box &obj1)
    {
        a = obj1.a;
        b = obj1.b;
        c = obj1.c;
    }

    void display()
    {
        cout << "A -> " << a << " B-> " << b << " C-> " << c << endl;
    }
};

int main()
{

    Box obj1;
    obj1.display();
    Box obj2(obj1);
    obj2.display();
}