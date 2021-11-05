#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Shape
{
protected:
    string ShapeName;
    float area;

public:
    void displayArea()
    {
        cout << " Shape Name is : " << ShapeName << endl;
        cout << " Area is : " << area << endl;
    }
};
class Circle : public Shape
{
private:
    float rad;

public:
    Circle(float r, string ShapeName)
    {
        area = 3.141254 * (rad * rad);

        this->ShapeName = ShapeName;
    }
};

class Polygon : public Shape
{
public:
    Polygon(float a, string s)
    {
        ShapeName = s;
        area = (sqrt(5 * (5 + 2 * (sqrt(5)))) * a * a) / 4;
    }
};
int main()
{
    Circle Obj1(3.0, "Circle");
    Obj1.displayArea();
    Polygon Obj2(2.1, " Polygon pentagon");
    Obj2.displayArea();
    return 0;
}