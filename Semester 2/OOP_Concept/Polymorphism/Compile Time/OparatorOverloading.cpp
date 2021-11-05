#include <iostream>

using namespace std;
class Complex
{
private:
    int num1, num2;

public:
    void set(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    Complex operator+(Complex c)
    {
        Complex clc;
        clc.num1 = num1 + c.num1;
        clc.num2 = num2 + c.num2;
        return clc;
    }
    void print()
    {
        cout << "Number 1 is : " << num1 << endl;
        cout << "Number 2 is : " << num2 << endl;
    }
};
int main()
{

    Complex c1, c2, c3, c4;
    c1.set(10, 40);
    c2.set(10, 40);
    c3.set(10, 40);
    c4 = c1 + c2 + c3;
    c4.print();
}