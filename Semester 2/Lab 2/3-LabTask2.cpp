#include <iostream>
#include <cmath>

using namespace std;
class Quadrilateral
{

public:
    int A, B, C, D, angle1, angle2, parameter;
    float areaIS;
    void input();
    int parameter_quadrilateral();
    float Area(float *);
};
void Quadrilateral::input()
{
    cout << "Enter A : ";
    cin >> A;
    cout << "Enter B : ";
    cin >> B;
    cout << "Enter C : ";
    cin >> C;
    cout << "Enter D : ";
    cin >> D;
    cout << "Enter AAngle 1 : ";
    cin >> angle1;
    cout << "Enter AAngle 2 : ";
    cin >> angle2;
}

int Quadrilateral::parameter_quadrilateral()
{
    parameter = A + B + C + D;
    return parameter;
}
float Quadrilateral::Area(float *areaIS)
{
    //Quadrilateral Area cal formula from https://keisan.casio.com/
    float s = (A + B + C + D) / 2;
    int angle = angle1 + angle2;
    *areaIS = (s - A) * (s - B) * (s - C) * (s - C) - (A * B * C * D) * (pow(cos(angle / 2), 2));
    return *areaIS;
}
int main()
{

    Quadrilateral quadrilateral;
    quadrilateral.input();
    int parameter = quadrilateral.parameter_quadrilateral();
    cout << "Parameter Quadrilateral is : " << parameter << endl;

    float area = quadrilateral.Area(&quadrilateral.areaIS);

    cout << "Your area is : " << area << endl;
}