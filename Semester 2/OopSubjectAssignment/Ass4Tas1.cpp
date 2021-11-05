#include <iostream>
using namespace std;
class Distance
{
    int INCHES, FEET;

public:
    Distance() : INCHES(0), FEET(0) {}
    Distance(int INCHES, int FEET)
    {
        this->INCHES = INCHES;
        this->FEET = FEET;
    }
    friend istream &operator>>(istream &Input, Distance &D1);
    friend ostream &operator<<(ostream &OutPut, const Distance &D1);
};

istream &operator>>(istream &Input, Distance &D1)
{
    cout << "Please Enter Inches : ";
    Input >> D1.INCHES;
    cout << "Please Enter Feet : ";
    Input >> D1.FEET;
    return Input;
}
ostream &operator<<(ostream &OutPut, const Distance &D1)
{
    OutPut << "The Inches is  : " << D1.INCHES << endl;
    OutPut << "The Feet is : " << D1.FEET << endl;
    return OutPut;
}
int main()
{
    Distance D1(20, 30);
    Distance D2(40, 40);
    Distance D3;
    cin >> D3;
    cout << D1 << D2 << D3;
}
