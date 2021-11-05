#include <iostream>

using namespace std;

int Cal_Pow(int base, int Pow)
{
    if (Pow != 0)
    {
        return (base * Cal_Pow(base, Pow - 1)); //recursion
    }
    else
    {
        return 1;
    }
}
int main()
{

    cout << " 2^3 = " << Cal_Pow(2, 3) << endl;
    cout << " 3^3 = " << Cal_Pow(3, 3) << endl;

    return 0;
}
