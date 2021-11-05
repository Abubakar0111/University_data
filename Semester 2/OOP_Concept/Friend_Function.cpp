#include <iostream>

using namespace std;
class Complex
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout << "A -> : " << a << endl;
        cout << "b -> : " << b << endl;
    }
    friend Complex sumF(Complex c1, Complex c2);
};

Complex sumF(Complex c1, Complex c2) //Frind function
{
    Complex o3;
    o3.setData((c1.a + c2.a), (c1.b + c2.b));
    return o3;
}
int main()
{

    Complex c1, c2, c3, sum;
    c1.setData(1, 2);
    c2.setData(3, 4);
    sum = sumF(c1, c2);
    sum.getData();
}