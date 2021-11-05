#include <iostream>

using namespace std;
class LeCream
{
    int numberOfScoop;

public:
    int Scoop_price(int number, int scoop)
    {
        int twoscoop = 100;
        int threeScoop = 150;
        int total = 0;

        if (scoop < 1 || scoop > 3)
        {
            cout << "you can't order more then 3 scoop.\n";
        }
        else
        {

            if (number == 5) //for choclate
            {
                if (scoop == 1)
                {
                    cout << "We cnt handle less then 1 scoop customer SORRY\n";
                }
                else if (scoop == 2)
                {
                    numberOfScoop = scoop;
                    total = numberOfScoop * 120;
                    return total;
                }
                else if (scoop == 3)
                {
                    numberOfScoop = scoop;
                    total = numberOfScoop * 180;
                    return total;
                }
            }
            if (scoop == 1)
            {
                cout << "We cnt handle less then 1 scoop customer SORRY\n";
            }
            else if (scoop == 2)
            {
                numberOfScoop = scoop;
                total = numberOfScoop * twoscoop;
            }
            else if (scoop == 3)
            {
                numberOfScoop = scoop;
                total = numberOfScoop * threeScoop;
            }
        }
        return total;
    }
    int Vanila_Wafer(int t, bool y_n)
    {
        int total = t;
        if (y_n == 1)
        {
            total = total + 10;
        }
        else
        {
            total = total + 2;
        }
        return total;
    }
};
void output(int number, int scoops, bool wafer)
{
    LeCream *leCream = new LeCream();
    int total = leCream->Scoop_price(number, scoops);
    string f1 = "vanilla";
    string f2 = "strawberry";
    string f3 = "mango";
    string f4 = "tutti fruit";
    string f5 = "chocolate";
    string f6 = "almond crunch";
    string f7 = "coffee";

    cout << "\nYour choice of ice cream is as follows\n";
    if (number == 1)
    {
        cout << "Flavour = " << f1 << endl;
    }
    else if (number == 2)
    {
        cout << "Flavour = " << f2 << endl;
    }
    else if (number == 3)
    {
        cout << "Flavour = " << f3 << endl;
    }
    else if (number == 4)
    {
        cout << "Flavour = " << f4 << endl;
    }
    else if (number == 5)
    {
        cout << "Flavour = " << f5 << endl;
    }
    else if (number == 6)
    {
        cout << "Flavour = " << f6 << endl;
    }
    else if (number == 7)
    {
        cout << "Flavour = " << f7 << endl;
    }
    cout << "Number of scoops = " << scoops << endl;
    if (wafer == 1)
    {
        cout << "Wafer is required \n";
        cout << "Total price is " << leCream->Vanila_Wafer(total, wafer);
    }
    else
    {
        cout << "Total price is " << total << endl;
    }
}
int main()
{
    LeCream *leCream = new LeCream;
    cout << "1: vanilla\n2: strawberry\n3: mango\n4: tutti fruit\n5: chocolate\n6: almond crunch\n7: coffee.\n: ";
    int selectF;
    cin >> selectF;
    cout << "Wafer required : Y = 1 / N = 0:";
    bool wafer;
    cin >> wafer;
    cout << "Enter Number of scoops : ";
    int sccops;
    cin >> sccops;
    int total = leCream->Scoop_price(selectF, sccops);
    leCream->Vanila_Wafer(total, wafer);
    output(selectF, sccops, wafer);
}