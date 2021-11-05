#include <iostream>
using namespace std;
int main()
{
    int size = 10;
    double radius[size];
    double area[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter radius of " << i + 1 << " :";
        cin >> *(radius + i);
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        *(area + i) = 3.14 * *(radius + i) * *(radius + i);
        cout << "Your Area of Radius " << i + 1 << " is ==> " << *(area + i) << endl;
    }
}
