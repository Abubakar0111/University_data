#include <iostream>

using namespace std;
class myClass
{
private:
    int number1, number2;

public:
    void set(int n1, int n2)
    {
        number1 = n1;
        number2 = n2;
    }
    void set()
    {

        cout << ":::: " << number1 << endl;
        cout << "::::  " << number2 << endl;
    }
};

int main()
{
    myClass obj;
    obj.set(20, 30);
    obj.set();
}