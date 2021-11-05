#include <iostream>
using namespace std;
int main ()
{
	int num;
	cout << "Enter a number: " << endl;
	cin >> num;
	switch (num)
	{
    case 2 :cout << "It is a Prime number" ;break;
    case 3 :cout << "It is a Prime number" ;break;
	}
	if (num%2!=0 && num%3!=0)
	{
		cout << "It is a Prime number" ;
	}
	else
		cout << "Not a Prime Number" ;
}
