#include <iostream>

using namespace std;
int main()
{

     int num1 = 5, num2 = 9;

     num1 = num1 * num2;
     num2 = num1 / num2;
     num1 = num1 / num2;
     cout << num1 << " & " << num2 << endl;
}
