#include <iostream>

using namespace std;

int Fibonacci(int n)
{
    int num = n;

    if (num <= 1) //if they have only 1 value
    {
        return num;
    }

    return Fibonacci(num - 1) + Fibonacci(num - 2);
}
int main()
{
    int n;

    cout << "Enter value of n : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " - " << Fibonacci(i) << endl;
    };
}