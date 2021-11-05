#include <iostream>

using namespace std;
class Complex
{
    int a, b;

public:
    void SetData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "A is : " << a << endl;
        cout << "b is : " << b << endl;
    }

    Complex Adding(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = a + c.b;
        return temp;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};
int main()
{
    /*
    When an operator is overloaded with multiple jobs, it is known as operator overloading.
    It is a way to implement compile time polymorphism.
    */
    Complex c1, c2, c3;
    c1.SetData(1, 2);
    c2.SetData(3, 4);
    c3 = c1.Adding(c2);
    c3 = c1 + c2; // in obove class we have created an + operator function
    c3.showData();
}