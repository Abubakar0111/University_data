#include <iostream>
using namespace std;
class Marks
{
private:
    int MARKS1;
    int MARKS2;

public:
    Marks() : MARKS1(5), MARKS2(8) {}

    Marks(int MARKS1, int MARKS2)
    {
        this->MARKS1 = MARKS1;
        this->MARKS2 = MARKS2;
    }

    void operator=(Marks &marksObj)
    {
        marksObj.MARKS1 = marksObj.MARKS2;
        MARKS1 = MARKS2;
    }
    void show()
    {
        cout << "The First Subject marks is : " << MARKS1 << endl;
        ;
        cout << "The Second Subject marks is : " << MARKS2 << endl;
    }
};
int main()
{
    Marks Marks1(10, 20);
    Marks Marks2(15, 15);

    cout << ":::::::  data 1 :::::::: " << endl;
    Marks1.show();
    cout << endl;

    cout << ":::::::  data 2 :::::::: " << endl;
    Marks2.show();
    cout << endl;
    Marks1 = Marks2;
    cout << ":::::: OVERLOADING :::::::::" << endl;
    cout << ":::::::  data 1 :::::::: " << endl;
    Marks1.show();
    cout << endl;
    cout << ":::::::  data 2 :::::::: " << endl;
    Marks2.show();
}