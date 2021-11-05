#include <iostream>

using namespace std;
int main()
{
    int chooseAcc;
    int initialCurrentAcc = 2000, initialSavingAcc = 5000;

    cout << "Press 1 for Current Account"
            "\nPress 2 for Savings Account\n==>";
    cin >> chooseAcc;
    if (chooseAcc == 1)
    {
        int deposit, withDraw, amount;
        char wish;
        cout << "Press a for Deposit the money"
                "\nPress b for withdrawing the money\n==>";
        cin >> wish;
        if (wish == 'a')
        {
            cout << "Enter the amount you want to deposit : ";
            cin >> deposit;
            cout << "Deposit sucessfull";
        }
        if (wish == 'b')
        {
            cout << " Enter the amount of withdraw : ";
            cin >> withDraw;

            if (deposit > withDraw)
            {
                cout << "Withdraw sucessfull" << endl;
                ;
            }
            cout << " Aceed your limts  " << endl;
        }
    }
    if (chooseAcc == 2)
    {
        int deposit, withDraw, wish;
        cout << "Press a for Deposit the money"
                "\nPress b for withdrawing the money\n==>";
        cin >> wish;
        if (wish == 'a')
        {
            cout << "Enter the amount you want to deposit : ";
            cin >> deposit;
            cout << "Deposit sucessfull" << endl;
        }
        if (wish == 'b')
        {
            cout << " Enter the amount of withdraw : ";
            cin >> withDraw;

            if (deposit > withDraw)
            {
                cout << "Withdraw sucessfull" << endl;
            }
            cout << " Aceed your limts  " << endl;
        }
    }
}

/*
 #include <iostream>
using namespace std;
int main ()
{
	int q, e, r, t, y;
    char w;
    cout << "Press 1 for Current Account\tOR" << endl;
    cout << "Press 2 for Saving Account" << endl;
    cin >>q;
    switch (q)
    {
    	case 1:cout << "Initial amount for opening current account charges = 2000\n" ;break;
	    case 2:cout << "Initial amount for opening saving account charges = 5000\n" ;break;
	}
	cout << "Press a for Deposit the money" << endl;
	cout << "Press b for withdraw the money" << endl;
	cin >>w;
	if (q==1 && w=='a')
	{
		cout << "Enter the amount you want to deposit" << endl;
		cin >> e;
		cout << "Deposit sucessfull" ;
	}
	if (q==1 && w=='b')
	{
		cout << "You can sure the withdraw more than 10000 rupees" << endl;
	    cout << "Make sure your withdarw amount shouldnot be more than the balance in your account" << endl;
	    cout << "Enter the amount of withdraw and make sure your account should be minimum of 500 rupees" << endl;
	    cin >> r;
	}
	if (q==2 && w=='a')
	{
		cout << "Enter the amount you want to deposit" << endl;
		cin >> t;
		cout << "Deposit sucessfull" ;
	}
	if (q==2 && w=='b')
	{
		cout << "You can sure the withdraw more than 25000 rupees" << endl;
	    cout << "Make sure your withdarw amount shouldnot be more than the balance in your account" << endl;
	    cout << "Enter the amount of withdraw and make sure your account should be minimum of 500 rupees" << endl;
	    cin >> y;
	}
}
 */