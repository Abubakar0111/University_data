#include <iostream>
using namespace std;
int main()
{
    int Factorial = 1, num;
    cout << "Enter a number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        Factorial = Factorial * i;
    }
    cout << "Factorial = " << Factorial << endl;
}
