#include <iostream>
using namespace std;
int main()
{
    int a[20], b[20], i;
    cout << "Enter 20 integers number : " << endl;
    for (i = 0; i < 20; i++)
    {
        cin >> a[i];
        b[i] = 0;
    }
    cout << "Number-2 and then square of that number is = " << endl;
    for (i = 0; i < 20; i++)
    {
        a[i] = a[i] - 2;
        b[i] = a[i] * a[i];
        cout << b[i] << endl;
    }
}
