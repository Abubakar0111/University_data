#include <iostream>
using namespace std;
int main()
{
	int w;
	cout << "Enter 10 integers" << endl;
	for (int i = 0; i <= 10; i++)
	{
		cin >> w;
		if (w % 2 == 0)
		{
			cout << "Even numbers are = " << w << endl;
		}
		if (w % 2 == 1)
		{
			cout << "Odd numbers are = " << w << endl;
		}
		if (w % 2 == 1 && w % 7 == 0)
		{
			cout << "numbers divisible by 7 = " << w << endl;
		}
	}
}