#include <iostream>

using namespace std;

class polygon
{
    float length;
    float *width;

public:
    polygon()
    {
        width = new float;
    }

    void setter(float l, float w)
    {
        length = l;
        *width = w;
    }

    polygon(polygon &e)
    {
        width = e.width;
    }

    void print()
    {
        cout << "The length is : " << length << " and width is : " << *width << endl;
    }
};
int main()
{
    polygon one;
    cout << ":::: 1st constructor called ::::" << endl;
    one.setter(2.0, 3.0);
    one.print();
    cout << ":::: 2nd constructor called ::::" << endl;
    polygon two(one);
    two.print();
}