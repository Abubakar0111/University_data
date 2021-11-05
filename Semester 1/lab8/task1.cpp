#include<iostream>
using namespace std;
int main()
{
	int row=4,column=4;
	int A[row][column];
		for (int i = 0; i < 4; i++)
    {
		for (int j = 0; j < 4; j++)
        {
            cout<<"Enter row of "<<i+1<<" and column of "<<j+1<<" : ";
			cin >> A[i][j];
        }
    }
    cout<<"::::: Before :::::::"<<endl;
    for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
        {
			cout << A[i][j] << " ";
        }
		cout << endl;
	}
	cout << "\nTranspose of Matrix: " << endl;
    for (int i = 0; i < column; ++i)
        for (int j = 0; j < row; ++j) 
		{
            cout << " " << A[i][j];
            if (j == row - 1)
        		cout << endl << endl;
    	}
return 0;
}