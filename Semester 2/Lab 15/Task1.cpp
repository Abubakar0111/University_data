#include <iostream>
#include <math.h>
using namespace std;

class Parameter
{

    int Value;

public:
    Parameter() {}

    Parameter(int a)
    {

        Value = a;
    }

    Parameter operator+(Parameter const &obj)
    {

        Parameter add;

        add.Value = Value + obj.Value;

        return add;
    }

    Parameter operator-(Parameter const &obj)
    {

        Parameter min;

        min.Value = Value - obj.Value;

        return min;
    }

    Parameter operator*(Parameter const &obj)
    {

        Parameter mul;

        mul.Value = Value * obj.Value;

        return mul;
    }

    friend ostream &operator<<(ostream &output, const Parameter &P)
    {

        output << P.Value;

        return output;
    }

    void print() { cout << Value; }
};

int main()
{

    Parameter obj1(2);

    Parameter obj2(4);

    // Parameter obj3 = 3 + (obj1) * (obj2) * (obj1 + obj2); //Cant perform calculations on constant along objects of classes

    // cout << obj3;
}
