#include <iostream>

using namespace std;

class myClass
{
    int num1, num2;

public:
    void setter(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    int getter()
    {
        // cout << "Num 1 is : " << num1 << endl;   <--- You can write
        // cout << "Num 2 is : " << num2 << endl;   <--- You can write
        return num1 + num2;
    }
    //another way -------
    int get_num1()
    {
        return num1;
    }
    int get_num2()
    {
        return num2;
    }
};

int main()
{
    myClass obj;
    obj.setter(2, 3);
    cout << "Answer is : " << obj.getter() << endl; //   <--- one way
    cout << " Num 1 is : " << obj.get_num1() << endl;
    cout << " Num 2 is : " << obj.get_num2() << endl;
}