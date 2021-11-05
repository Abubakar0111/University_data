#include <iostream>

using namespace std;
class Code
{
public:
    int Hello;
    string name;
    Code() : Hello(3), name("Abubakar")
    {
        cout << "Hello is : " << Hello << endl;
        cout << "Name is : " << name << endl;
    }
    void Function() const
    {

        cout << " Hello is : " << Hello << endl;
    }
};
int main()
{

    Code c;
    c.Hello = 30;
    c.Function();
}