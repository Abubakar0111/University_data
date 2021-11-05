#include <iostream>
using namespace std;
int main()
{
    int num, nforFactorial, FCT;
    char again;
    do
    {
        cout << "Enter any ten numbers\n";
        for (int i = 0; i <= 10; i++)
        {
            cin >> num;
            if (num % 2 == 0)
            {
                cout << "Even number = " << num << endl;
            }
            if (num % 2 == 1)
            {
                cout << "Odd number = " << num << endl;
            }
            if (num % 2 == 1 && num % 7 == 0)
            {
                cout << "Number is divisible by 7= " << num << endl;
            }
        }
        cout << "Do you want to continue again *Y/N\n";
        cin >> again;
        cout << "Enter any number below or equal to ten\n";
        cin >> nforFactorial;
        for (int i = 1; i <= nforFactorial; i++)
        {
            FCT = FCT * i;
        }
        cout << "Factorial of " << nforFactorial << " = " << FCT << endl;
        cout << "Do you want to continue again *Y/N\n";
        cin >> again;
        for (int i = 1; i <= 4; i++)
        {
            cout << "*";
        }
        cout << "\n";
        for (int i = 1; i <= 3; i++)
        {
            cout << "*";
        }
        cout << "_";
        cout << "\n";
        for (int i = 1; i <= 2; i++)
        {
            cout << "*";
        }
        cout << "__";
        cout << "\n";
        for (int i = 1; i <= 1; i++)
        {
            cout << "*";
        }
        cout << "___";
        cout << "\n";
        cout << "Do you want to continue again *Y/N\n";
        cin >> again;
    } while (again == 'y');
    return 0;
}