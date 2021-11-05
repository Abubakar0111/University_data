#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int A[4][4], min, a = 4, b = 4;

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
            cout<<"Enter row of "<<i+1<<" and column of "<<j+1<<" : ";
			cin >> A[i][j];
			while (A[i][j] > 100)
			{
				cout << "Your number should be smaller then 100" << endl;
				cin >> A[i][j];
			}
		}
        min=A[0][0];
	for (int i = 0; i < 4; i++)
    {
		for (int j = 0; j < 4; j++)
			if (A[i][j] < min)
			{
				min = A[i][j];
				a = i;
				b = j;
			}
    }
	cout << min<<" At row index  "<<a<<" and column index "<<b<<endl;
}
