#include <iostream>

using namespace std;
class myClass
{
    int a, b, c;

public:
    myClass(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void myFunction2()
    {
        cout << "\n:::: A -->  :::: " << a << endl;
        cout << "\n:::: B -->  :::: " << b << endl;
        cout << "\n:::: c -->  :::: " << c << endl;
    }
    ~myClass()
    {
        cout << "\n:::: I'M DISTRUCTOR :::: " << endl;
    }
};
int main()
{

    myClass obj2(2, 3, 4);
    obj2.myFunction2();
}