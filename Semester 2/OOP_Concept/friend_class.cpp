#include <iostream>

using namespace std;
class Complex;

class Calculatot // nechy wali class ka friend
{
public:
    int SumOfComplex(Complex, Complex);
};

class Complex // jis ka friend
{
    int a, b;
    friend int Calculatot::SumOfComplex(Complex, Complex);

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void ShowData()
    {
        cout << " A-> " << a << " B -> " << b << endl;
    }
};

int Calculatot::SumOfComplex(Complex o1, Complex o2)
{
    int temp;
    temp = o1.a + o2.a;
    temp = o1.b + o2.b;

    return temp;
}

int main()
{
    Complex c1, c2, sum;
    c1.setData(1, 2);
    c2.setData(4, 4);
    Calculatot calc;

    c1.ShowData();
    c2.ShowData();
    int result = calc.SumOfComplex(c1, c2);
    cout << "The result is " << result << endl;

    // cout << "Sum is |: " << sum << endl;
}