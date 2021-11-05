#include <iostream>
using namespace std;
int main()
{
	int a;
up:
	cin >> a;

	if (a == 1)
		cout << "\a";
	goto up;
	return 0;
}
