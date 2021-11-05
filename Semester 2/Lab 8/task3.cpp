#include <iostream>

using namespace std;
class BankAccount
{
protected:
    int accountID;
    int Account_Balance;

public:
    void balanceInquiry(int id, int deposite, int withDraw)
    {
        Account_Balance = 0;
        accountID = id;
        Account_Balance = Account_Balance + deposite;
        if ((Account_Balance - withDraw) >= 5000)
        {
            Account_Balance = Account_Balance - withDraw;
        }

        cout << "Acoout ID : " << accountID << "\nBalance : " << Account_Balance << endl;
    }
};
class CurrentAccount : public BankAccount
{
public:
    CurrentAccount(int id, int belnc)
    {
        accountID = id;
    }
    void amountWithdrawn(int with_draw)
    {
        if ((Account_Balance - with_draw) >= 5000)
        {
            cout << " ::: " << with_draw << " RS WithDraw Succesfully ::: " << endl;
        }
        else
        {
            cout << "::: Too Low balance to withdraw for Current account ::: " << endl;
        }
    }
    void amountDeposit(int Deposite_Current_acc)
    {
        Account_Balance = Deposite_Current_acc;
        cout << "::: Deposite Succesfully ::: " << endl;
    }
};
class SavingsAccount : public BankAccount
{

public:
    SavingsAccount(int id, int belnc)
    {
        accountID = id;
        Account_Balance = belnc;
    }
    void amountWithdrawn(int with_draw)
    {
        if ((Account_Balance - with_draw) >= 10000)
        {
            cout << " ::: " << with_draw << " RS WithDraw Succesfully ::: " << endl;
        }
        else
        {
            cout << "::: Too Low balance to withdraw for Saving account ::: " << endl;
        }
    }
    void amountDeposit(int Deposite_Saving_acc)
    {
        Account_Balance = Deposite_Saving_acc;
        cout << "::: Deposite Succesfully ::: " << endl;
    }
};
int main()
{
    BankAccount BA;
    int amountDeposite, amountWithDraw, id, blnc = 0;
    cout << "\n::: Current Account :::  " << endl;
    cout << "Enter ID : ";
    cin >> id;
    CurrentAccount CA(id, blnc);

current_UP:
    cout << "Enter amount to Deposite : ";
    cin >> amountDeposite;
    if (amountDeposite < 5000)
    {
        cout << " ::: AMOUNT SHOLD BE ABOVE 5,000 :::" << endl;
        goto current_UP;
    }
    else
    {
        CA.amountDeposit(amountDeposite);
    }

    cout << "Enter amount to WithDraw : ";
    cin >> amountWithDraw;
    CA.amountWithdrawn(amountWithDraw);
    cout << "\n::::: Balance Inquiry :::::::" << endl;
    BA.balanceInquiry(id, amountDeposite, amountWithDraw);

    cout << "\n::: Saving Account :::  " << endl;
    cout << "Enter ID : ";
    cin >> id;
    SavingsAccount SA(id, blnc);

saving_UP:
    cout << "Enter amount to Deposite : ";
    cin >> amountDeposite;
    if (amountDeposite < 10000)
    {
        cout << " ::: AMOUNT SHOLD BE ABOVE 10,000 :::" << endl;
        goto saving_UP;
    }
    else
    {
        SA.amountDeposit(amountDeposite);
    }

    cout << "Enter amount to WithDraw : ";
    cin >> amountWithDraw;
    SA.amountWithdrawn(amountWithDraw);
    cout << "\n::::: Balance Inquiry :::::::" << endl;
    BA.balanceInquiry(id, amountDeposite, amountWithDraw);
}