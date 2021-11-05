#include <iostream>
using namespace std;
int main()
{
    int q = 5, e, t = 1;
    t = q - 1;
    for (e = 1; e <= 5; e++)
    {
        for (int i = 1; i <= t; i++)
        {
            cout << " ";
        }
        t--;
        for (int i = 1; i <= (2 * e - 1); i++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}