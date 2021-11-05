#include <iostream>
using namespace std;
class Calculator
{
private:
    static int f, s;

public:
    static void sum()
    {
        cout << "Enter num 1 : ";
        cin >> f;
        cout << "Enter num 2 : ";
        cin >> s;
        cout << "The sum is : " << f + s;
        // return sumis;
    }
    static void multiply()
    {
        cout << "Enter num 1 : ";
        cin >> f;
        cout << "Enter num 2 : ";
        cin >> s;
        cout << "The Multiply is : " << f * s;
    }
    static void divide()
    {
        cout << "Enter num 1 : ";
        cin >> f;
        cout << "Enter num 2 : ";
        cin >> s;
        cout << "The Divide is : " << f / s;
    }
    static void modulus()
    {
        cout << "Enter num 1 : ";
        cin >> f;
        cout << "Enter num 2 : ";
        cin >> s;
        cout << "The Modulus is : " << f % s;
    }
    static void sin()
    {
        cout << "Enter perpendicular: ";
        cin >> f;
        cout << "Enter Hypotinous: ";
        cin >> s;
        cout << "Sin x = " << f / s;
    }
    static void cos()
    {
        cout << "Enter base: ";
        cin >> f;
        cout << "Enter Hypotinous: ";
        cin >> s;
        cout << "Cos x = " << f / s;
    }
    static void tan()
    {
        cout << "Enter perpendicular: ";
        cin >> f;
        cout << "Enter base: ";
        cin >> s;
        cout << "Cos x = " << f / s;
    }
};
int Calculator::f = 0, Calculator::s = 0;

int main()
{
    int Input;
Main:
    cout << "\n\n1 for Sum \n2 For multiply\n3 for divide \n4 for modulus\n5 for cos function\n6 for sin function\n6 for tan funtion\n";
    cin >> Input;

    switch (Input)
    {
    case 1:
        Calculator::sum();
        goto Main;
        break;
    case 2:
        Calculator::multiply();
        goto Main;
        break;
    case 3:
        Calculator::divide();
        goto Main;
        break;
    case 4:
        Calculator::modulus();
        goto Main;
        break;
    case 5:
        Calculator::cos();
        goto Main;
        break;
    case 6:
        Calculator::sin();
        goto Main;
        break;
    case 7:
        Calculator::tan();
        goto Main;
        break;
    }

    // Calculator::divide();
    // Calculator::multiply();
    // Calculator::modulus();
    // Calculator::sin();
    // Calculator::tan();

    // Calculator::cos();
}