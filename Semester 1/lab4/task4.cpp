#include <iostream>
using namespace std;
int main()
{
    int choose;
    char a, b, c;
    cout << "Enter three characters : ";
    cin >> a >> b >> c;
    cout << "Press 1 for Sort in Ascending order" << endl;
    cout << "Press 2 for Sort in Descending order" << endl;
    cin >> choose;
    if (choose == 1)
    {
        cout << "Ascending order : " ;
        if (a > b && b > c)
        {
            cout << c << " " << b << " " << a;
        }

        else if (a > c && c > b)
            cout << b << " " << c << " " << a;

        else if (b > a && a > c)
            cout << c << " " << a << " " << b;

        else if (b > c && c > a)
            cout << a << " " << c << " " << b;

        else if (c > a && a > b)
            cout << b << " " << a << " " << c;

        else
            cout << a << " " << b << " " << c;
    }
    if (choose == 2)
    {
        cout << "Descending order : " ;
        if (a > b && b > c)
        {
            cout << a << " " << b << " " << c;
        }

        else if (a > c && c > b)
            cout << a << " " << c << " " << b;

        else if (b > a && a > c)
            cout << b << " " << a << " " << c;

        else if (b > c && c > a)
            cout << b << " " << c << " " << a;

        else if (c > a && a > b)
            cout << c << " " << a << " " << b;

        else
            cout << c << " " << b << " " << a;
    }
}
