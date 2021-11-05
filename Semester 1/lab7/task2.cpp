#include <iostream>
using namespace std;
int main()
{
    int a[5], i, temp;
    cout << "Enter 5 integers number : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (a[i] % 3 == 0)
        {
            a[i] = a[i] + 1;
        }
    }
    for (int w = 0; w < 5; w++)
    {
        for (i = 0; i < 4; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    cout << "Sorted Array : ";
    for (i = 0; i < 5; i++)
        cout << a[i] << "   ";
}
