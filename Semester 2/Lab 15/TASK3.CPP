#include <iostream>
#include <math.h>
using namespace std;

class PointC
{

    int x;
    int y;
    int res;

public:
    PointC() {}

    PointC operator+(PointC const &obj)
    {
        PointC add;

        add.res = x + obj.y;

        return add;
    }

    PointC operator-(PointC const &obj)
    {

        PointC min;

        min.res = x - obj.y;

        return min;
    }

    friend istream &operator>>(istream &input, PointC &D)
    {
        input >> D.x >> D.y;
        return input;
    }
    void print() { cout << res << endl; }
};
int main()
{

    PointC obj1;
    cout << "Enter two points" << endl;
    cin >> obj1;
    PointC Sum = obj1 + obj1;
    PointC Diff = obj1 - obj1;
    Sum.print();
    Diff.print();

    return 0;
}
