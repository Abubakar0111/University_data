#include <iostream>
using namespace std;
int main()
{
	int z = 4, i = 1;
	for (int q = 1; q <= 4; q++)
	{
		for (int w = 1; w <= z; w++)
		{
			cout << "  ";
		}
		for (int e = 1; e <= q; e++)
		{
			cout << "  " << i << " ";
			i++;
		}
		cout << endl;
		z--;
	}
	if (i == 11)
		cout << " ";

	for (int q = 1; q <= 5; q++)
	{
		for (int w = 5; w >= q; w--)
		{
			cout << " " << i << " ";
			i++;
		}
		cout << endl;
		if (i == 16)
			cout << "   ";
		if (i == 20)
			cout << "     ";
		if (i == 23)
			cout << "       ";
		if (i == 25)
			cout << "         ";
	}
}
