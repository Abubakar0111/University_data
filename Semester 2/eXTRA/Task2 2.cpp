// #include <iostream>

// using namespace std;
// class Bank
// {
// protected:
//     string name; //  assuming this bcz in the Q not explained properly
// public:
//     void setName(string n)
//     {
//         name = n;
//     }
//     string get()
//     {
//         cout << "Name is : " << name << endl;
//         return name;
//     }
// };

// class Saving_Account : public Bank
// {
//     int deposite;
//     float intrest;
//     string n;

// public:
//     void set(int d)
//     {
//         deposite = d;
//     }
//     void calculate()
//     {
//         n = Bank::get();

//         cout << "The name of account holder is : " << n << endl; // get from
//         for (int i = 0; i < 3; i++)
//         {
//             intrest = intrest + (deposite * 0.02);
//         }
//         cout << "The 3 month of intrest is : " << intrest << endl;
//     }
// };

// class Salary_Account
// {
//     int Salary;

// public:
// };
// int main()
// {
//     Bank b;
//     b.setName("Malaika");
//     string name = b.get();
//     cout << "::::: Name :::: " << name << endl;
//     Saving_Account s;
//     s.set(100);
//     s.calculate();
// }

#include <iostream>
#include <string>
using namespace std;
class bank
{
private:
    string name;
    int age;
    int deposit;
    int salary;

public:
    bank()
    {
        cout << "what can I do for you???? " << endl;
        deposit = 0;
        salary = 0;
    }

    void saving_account(string n, int a)
    {
        int num;
        int amount;
        cout << "hello! am your saving account " << endl;
        cout << "if you deposit first time press 1 " << endl;
        cout << "otherwise press any other number " << endl;
        cin >> num;
        if (num == 1)
        {
            cout << "hi! now you can depoit amount" << endl;
            cin >> deposit;
            cout << "amount deposited" << endl;
        }
        if (num != 1)
        {
            float total;
            for (int i = 1; i <= 3; i++)
            {
                total = amount + (2 / 100);
            }
            cout << "total amount for next 3 months are  " << total << endl;
        }
    }

    void salary_account(string n, int a)
    {
        cout << "hi! am your salary account" << endl;
        cout << "if salary is for 1st time press 1" << endl;
        cout << "otherwie press any other number " << endl;
        int num;
        cin >> num;
        if (num == 1)
        {
            cout << "enter salary for first time in your account" << endl;
            cin >> salary;
            cout << "amount entered" << endl;
        }
        if (num != 1)
        {
            cout << "you can withdraw amount " << endl;
            int amount;
            cin >> amount;
            int total;
            for (int i = 0; i <= 3; i++)
            {
                total = salary - amount;
            }
            cout << "total salary is now " << total << endl;
        }
    }
};
int main()
{
    bank b;
    cout << "press 1 for saving account " << endl;
    cout << "press 2 for salary account " << endl;
    int n;
    char w;
    cin >> n;
    do
    {
        switch (n)
        {
        case 1:
            b.saving_account("urooj", 19);
            break;
        case 2:
            b.salary_account("urooj", 19);
            break;
        }
        cout << "do you wanna continue press any letter key EXCEPT Z" << endl;
        cin >> w;
    } while (w != 'Z');
    system("pause");
    return 0;
}