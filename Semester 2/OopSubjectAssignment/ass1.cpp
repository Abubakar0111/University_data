#include <iostream>
using namespace std;

class tollbooth
{
    int totalNumberOfCars ;
    double totalAmountOfMoneyCollected ;
    int count;

public:
    tollbooth()
    {
        totalNumberOfCars = 0 ;
        totalAmountOfMoneyCollected = 0 ;
        count = 0;
    }
    void payingCar();

    void nopayCar();

    void display() const;
};
void tollbooth ::payingCar()
{
    totalNumberOfCars++;
    count++;
    totalAmountOfMoneyCollected += 0.5;
    cout << "\t- Added paying car ::: " << endl;
}

void tollbooth ::nopayCar()
{
    totalNumberOfCars++;
    cout << "\t- Added Non-pay Car ::: " << endl;
}
void tollbooth ::display() const
{
    cout << "\n\t     :::::::: R E S U L T :::::::::\n";
    cout << "\n\t! The total number of Paying cars : " << count << endl;
    cout << "\t! The total number of Non-Paying cars : " << totalNumberOfCars - count << endl;
    cout << "\t! Total Amount of Money Collected from paying car : " << totalAmountOfMoneyCollected <<"\n\n\n"<< endl;
}

int main()
{
    string push;
    bool Botton = false;
    tollbooth toll;
    cout << "\n::::: Welcome to tollbooth tracker ::::\n\n (Press 1) to count a paying car \n (Press 0) to count a nonpaying car \n (Esc key) to print out the total cars and total cash\n";
    do
    {
        Botton = false;
        cout << " ==> : ";
        cin >> push;
        if (push == "1")
        {
            toll.payingCar();
        }
        else if (push == "0")
        {
            toll.nopayCar();
        }
        else
        {
            toll.display();
            break;
            Botton = false;
        }

    } while (Botton == false);
}