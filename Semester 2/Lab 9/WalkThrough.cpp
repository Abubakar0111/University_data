// #include <iostream>

// using namespace std;
// class Base
// {
// protected:
//     virtual void myFunc()
//     {
//         cout << "Base Class’ Function" << endl;
//         ;
//     }
// };
// class Derived : public Base
// {
// public:
//     void myFunc()
//     {
//         cout << "Derived Class’ Function" << endl;
//         ;
//     }
//     void myFunc(int a)
//     {
//         cout << "Derived Class’ Function with Parameter Value " << a << endl;
//         ;
//     }
// };
// int main()
// {

//     Derived child;
//     child.myFunc();
//     child.myFunc(10);
// }

#include <iostream>
using namespace std;
class overloadingconcept
{
public:
    void findarea(int);
    void findarea(int, int);
    void findarea(float, int, int);
};

void overloadingconcept::findarea(int value)
{
    double pi = 3.14;
    cout << "area of circle:" << pi * value * value << endl;
}
void overloadingconcept::findarea(int value1, int value2)
{
    cout << "area of rectangle:" << value1 * value2 << endl;
}
void overloadingconcept::findarea(float value1, int value2, int value3)
{
    cout << "area of triangle:" << value1 * value2 * value3 << endl;
}
int main()
{
    int option;
    int firstvalue, secondvalue, radius;
    float thirdvalue;
    overloadingconcept obj;
    cout << "Elaborating Function Overloading" << endl;
    cout << "Breas 1 for calculating Area of Circle" << endl;
    cout << "Press 2 for calculating Area of Rectangle " << endl;
    cout << "Press 3 for calculating Area of Triangle" << endl;
    cout << "Enter your option:" << endl;
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "Enter Radius of the Circle:";
        cin >> radius;
        obj.findarea(radius);
        break;
    case 2:
        cout << "Enter sides of the Rectangle:";
        cin >> firstvalue >> secondvalue;
        obj.findarea(firstvalue, secondvalue);
        break;
    case 3:
        cout << "Enter Sides of the Triangle:";
        cin >> firstvalue >> secondvalue >> thirdvalue;
        obj.findarea(thirdvalue, firstvalue, secondvalue);
        break;
    default:
        break;
    }
}