#include <iostream>
using namespace std;
class GeometricShapeClass
{

public:
    virtual void show() = 0;
};
class RectangleClass : public GeometricShapeClass
{
    int length;
    int width;

public:
    void Setter()
    {
        length = 12;
        width = 10;
    }
    int computeArea()
    {
        return length * width;
    }
    virtual void show()
    {

        cout << "Length is : " << length << endl;
        cout << "Width is : " << width << endl;
    }
};
class CubitClass : public RectangleClass
{
    int length;
    int width;
    int height;

public:
    void set()
    {
        length = 12;
        width = 13;
        height = 10;
    }
    int computeArea()
    {
        return length * width * height;
    }
    void show()
    {
        cout << "The Length is : " << length << endl;
        cout << "The width is : " << width << endl;
        cout << "The Height is : " << height << endl;
    }
};
int main()
{
    GeometricShapeClass *geometricShape = new RectangleClass();
    RectangleClass rec;
    geometricShape = &rec;
    rec.Setter();
    geometricShape->show();
    int resultRec = rec.computeArea();
    cout << "The Result of Rect is : " << resultRec << endl;
    CubitClass cubit;
    geometricShape = &cubit;
    cubit.set();
    geometricShape->show();
    int resultCubit = cubit.computeArea();
    cout << "The Result of cubit is : " << resultCubit << endl;
}
