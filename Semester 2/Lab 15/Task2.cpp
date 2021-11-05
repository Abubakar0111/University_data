#include <iostream>
#include <math.h>
using namespace std;

class Fraction
{
    int num;
    int den;
    int res;

public:
    Fraction() {}

    Fraction(int a, int b)
    {

        num = a;
        den = b;
    }

    Fraction operator+(Fraction const &obj)
    {

        Fraction add;
        add.res = den + obj.num;
        return add;
    }

    Fraction operator-(Fraction const &obj)
    {

        Fraction min;
        min.res = den - obj.num;
        return min;
    }

    Fraction operator*(Fraction const &obj)
    {

        Fraction mul;
        mul.res = den * obj.num;
        return mul;
    }

    void print() { cout << res << endl; }
};

int main()
{

    Fraction obj1(7, 5);
    Fraction Mul = obj1 * obj1;
    Fraction Sum = obj1 + obj1;
    Fraction Sub = obj1 - obj1;

    Mul.print();
    Sum.print();
    Sub.print();

    return 0;
}
