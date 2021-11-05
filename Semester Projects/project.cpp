#include <iostream>
#include <string>
using namespace std;

void routes()
{
    cout << "\t \t \t \t ==================================================" << endl;
    cout << "\t \t \t \t \t Welcome To Flight Booking System" << endl;
    cout << "\t \t \t \t ==================================================" << endl;
    cout << endl
         << endl;
    cout << "\t One Way Flight Routes : " << endl
         << endl;
    cout << "\t Available National Flights Are : " << endl;
    cout << "\t Flight Route 1 : Islamabad To Karachi    \t \t \t Fare : Rs 10,000 \t Tax : 10%" << endl;
    cout << "\t Flight Route 2 : Islamabad To Lahore     \t \t \t Fare : Rs 6,000 \t Tax : 10%" << endl;
    cout << "\t Flight Route 3 : Islamabad To Multan     \t \t \t Fare : Rs 7,000 \t Tax : 10%" << endl;
    cout << "\t Flight Route 4 : Islamabad To Quetta     \t \t \t Fare : Rs 8,000 \t Tax : 10%" << endl;
    cout << "\t Flight Route 5 : Islamabad To Peshawar   \t \t \t Fare : Rs 6,000 \t Tax : 10%" << endl;
    cout << "\t Flight Route 6 : Islamabad To Faisalabad \t \t \t Fare : Rs 9,000 \t Tax : 10%" << endl;
    cout << endl
         << endl;
    cout << "\t Available International Flights Are : " << endl;
    cout << "\t Flight Route 7  :  Islamabad,Pakistan To Ankara,Turkey       \t Fare : Rs 42,000 \t Tax : 15%" << endl;
    cout << "\t Flight Route 8  :  Islamabad,Pakistan To Beijing,China       \t Fare : Rs 49,000 \t Tax : 20%" << endl;
    cout << "\t Flight Route 9  :  Islamabad,Pakistan To Moscow,Russia       \t Fare : Rs 55,000 \t Tax : 18%" << endl;
    cout << "\t Flight Route 10 :  Islamabad,Pakistan To Tokyo,Japan         \t Fare : Rs 43,000 \t Tax : 30%" << endl;
    cout << "\t Flight Route 11 :  Islamabad,Pakistan To Ottawa,Canada       \t Fare : Rs 39,000 \t Tax : 17%" << endl;
    cout << "\t Flight Route 12 :  Islamabad,Pakistan To Riyadh,Saudi Arabia \t Fare : Rs 40,000 \t Tax : 23%" << endl;
    cout << endl
         << endl;
}
void booking()
{
    string full_name, b, passport, time, fc;
    double total_fare;
    int a, age, d;
    cout << "Enter Your Full Name : " << endl;
    getline(cin, full_name);
    cout << endl;
    cout << "Enter Your Age : " << endl;
    cin >> age;
    while (true)
    {
        if (age <= 0)
        {
            cout << "Invalid Age ! " << endl;
            cout << "Enter Your Age Again" << endl;
            cin >> age;
        }
        else
            break;
    }
    cout << endl;
    cout << "Enter Your Passport Number" << endl;
    cin.ignore();
    getline(cin, passport);
    cout << endl;
    cout << "\t \t \t \t   ==================================================" << endl;
    cout << "\t \t \t \t \t \t Select Your Flight Class " << endl;
    cout << "\t \t \t \t   ==================================================" << endl
         << endl;
    cout << "\t \t \t \t  1. First Class" << endl;
    cout << "\t \t \t \t  2. Busniess Class" << endl;
    cout << "\t \t \t \t  3. Economy Class" << endl
         << endl;
    cout << "Enter Flight Class" << endl;
    getline(cin, fc);
    cout << "\t \t \t \t   ==================================================" << endl;
    cout << "\t \t \t \t \t \t Select Your Flight Date " << endl;
    cout << "\t \t \t \t   ==================================================" << endl
         << endl;
    cout << "\t \t \t \t  Available Months Are :  July, September, October, November" << endl
         << endl;
    cout << "Enter A Month : " << endl;
    getline(cin, b);
    if (b == "July" || b == "july")
    {
        cout << "\t \t \t \t  Available Dates Are : 8, 14, 20, 29" << endl
             << endl;
        cout << "Enter A Date : " << endl;
        cin >> d;
        while (true)
        {
            if (d == 8 || d == 14 || d == 20 || d == 29)
                break;
            else
            {
                cout << "Invalid Input !" << endl;
                cout << "Enter A Date Again" << endl;
                cin >> d;
            }
        }
        cout << endl;
        cout << "\t \t \t \t   ==================================================" << endl;
        cout << "\t \t \t \t \t \t Select Your Flight Timings " << endl;
        cout << "\t \t \t \t   ==================================================" << endl
             << endl;
        cout << "\t \t \t \t  Available Timings Are : 11:30 Am, 6:00 Am, 1:00 Pm, 9:15 Pm" << endl
             << endl;
        cout << "Enter Time (hours:minutes:Am/Pm)" << endl;
        cin.ignore();
        getline(cin, time);
    }
    else if (b == "September" || b == "september")
    {
        cout << "\t \t \t \t  Available Dates Are : 8, 14, 20, 29" << endl
             << endl;
        cout << "Enter A Date : " << endl;
        cin >> d;
        while (true)
        {
            if (d == 8 || d == 14 || d == 20 || d == 29)
                break;
            else
            {
                cout << "Invalid Input !" << endl;
                cout << "Enter A Date Again" << endl;
                cin >> d;
            }
        }
        cout << endl;
        cout << "\t \t \t \t   ==================================================" << endl;
        cout << "\t \t \t \t \t \t Select Your Flight Timings " << endl;
        cout << "\t \t \t \t   ==================================================" << endl
             << endl;
        cout << "\t \t \t \t  Available Timings Are : 11:30 Am, 6:00 Am, 1:00 Pm, 9:15 Pm" << endl
             << endl;
        cout << "Enter Time (hours:minutes:Am/Pm)" << endl;
        cin.ignore();
        getline(cin, time);
    }
    else if (b == "October" || b == "october")
    {
        cout << "\t Available Dates Are : 8, 14, 20, 29" << endl
             << endl;
        cout << "Enter A Date : " << endl;
        cin >> d;
        while (true)
        {
            if (d == 8 || d == 14 || d == 20 || d == 29)
                break;
            else
            {
                cout << "Invalid Input !" << endl;
                cout << "Enter A Date Again" << endl;
                cin >> d;
            }
        }
        cout << endl;
        cout << "\t \t \t \t   ==================================================" << endl;
        cout << "\t \t \t \t \t \t Select Your Flight Timings " << endl;
        cout << "\t \t \t \t   ==================================================" << endl
             << endl;
        cout << "\t \t \t \t  Available Timings Are : 11:30 Am, 6:00 Am, 1:00 Pm, 9:15 Pm" << endl
             << endl;
        cout << "Enter Time (hours:minutes:Am/Pm)" << endl;
        cin.ignore();
        getline(cin, time);
    }
    else if (b == "November" || b == "november")
    {
        cout << "\t Available Dates Are : 8, 14, 20, 29" << endl
             << endl;
        cout << "Enter A Date : " << endl;
        cin >> d;
        while (true)
        {
            if (d == 8 || d == 14 || d == 20 || d == 29)
                break;
            else
            {
                cout << "Invalid Input !" << endl;
                cout << "Enter A Date Again" << endl;
                cin >> d;
            }
        }
        cout << endl;
        cout << "\t \t \t \t   ==================================================" << endl;
        cout << "\t \t \t \t \t \t Select Your Flight Timings " << endl;
        cout << "\t \t \t \t   ==================================================" << endl
             << endl;
        cout << "\t \t \t \t  Available Timings Are : 11:30 Am, 6:00 Am, 1:00 Pm, 9:15 Pm" << endl
             << endl;
        cout << "Enter Time (hours:minutes:Am/Pm)" << endl;
        cin.ignore();
        getline(cin, time);
    }
    cout << endl;
    cout << "\t Enter Flight Route (1 - 12) To Book Your Flight : ";
    cin >> a;
    while (true)
    {
        if (a >= 1 && a <= 12)
            break;
        else
        {
            cout << "Invalid Number !" << endl;
            cout << "Please Enter Correct Number From (1 - 12)" << endl;
            cin >> a;
        }
    }
    switch (a)
    {
    case (1):
        cout << endl;
        cout << "\t Your Flight From Islamabad To Karachi Has Been Booked" << endl
             << endl;
        total_fare = 10000 + (10000 * 0.1);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 2D" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;
        break;
    case (2):
        cout << endl;
        cout << "\tYour Flight From Islamabad To Lahore Has Been Booked" << endl
             << endl;
        total_fare = 6000 + (6000 * 0.1);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 1C" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;
        break;
    case (3):
        cout << endl;
        cout << "\t Your Flight From Islamabad To Multan Has Been Booked" << endl
             << endl;
        total_fare = 7000 + (7000 * 0.1);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 5B" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;
        break;
    case (4):
        cout << endl;
        cout << "\t Your Flight From Islamabad To Quetta Has Been Booked" << endl
             << endl;
        total_fare = 8000 + (8000 * 0.1);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 5F" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;
        break;
    case (5):
        cout << endl;
        cout << "\t Your Flight From Islamabad To Peshawar Has Been Booked" << endl
             << endl;
        total_fare = 6000 + (6000 * 0.1);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 6A" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;
        break;
    case (6):
        cout << endl;
        cout << "\t Your Flight From Islamabad To Faisalabad Has Been Booked" << endl
             << endl;
        total_fare = 9000 + (9000 * 0.1);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 7C" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;
        break;
    case (7):
        cout << endl;
        cout << "\t Your Flight From Islamabad,Pakistan To Ankara,Turkey Has Been Booked" << endl
             << endl;
        total_fare = 42000 + (42000 * 0.15);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 7A" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;
        break;
    case (8):
        cout << endl;
        cout << "\t Your Flight From Islamabad,Pakistan To Beijing,China Has Been Booked" << endl
             << endl;
        total_fare = 49000 + (49000 * 0.2);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 4D" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;
        break;
    case (9):
        cout << endl;
        cout << "\t Your Flight From Islamabad,Pakistan To Moscow,Russia Has Been Booked" << endl
             << endl;
        total_fare = 55000 + (55000 * 0.18);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 4B" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;

        break;
    case (10):
        cout << endl;
        cout << "\t Your Flight From Islamabad,Pakistan To Tokyo,Japan Has Been Booked" << endl
             << endl;
        total_fare = 43000 + (43000 * 0.3);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 3A" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;
        break;
    case (11):
        cout << endl;
        cout << "\t Your Flight From Islamabad,Pakistan To Ottawa,Canada Has Been Booked" << endl
             << endl;
        total_fare = 39000 + (39000 * 0.17);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 2E" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;
        break;
    case (12):
        cout << endl;
        cout << "\t Your Flight From Islamabad,Pakistan To Riyadh,Saudi Arabia Has Been Booked" << endl
             << endl;
        total_fare = 40000 + (40000 * 0.23);
        cout << "\t Name            : " << full_name << endl;
        cout << "\t Age             : " << age << endl;
        cout << "\t Passport Number : " << passport << endl;
        cout << "\t Flight Date     : " << d << "-" << b << "-2021" << endl;
        cout << "\t Flight Time     : " << time << endl;
        cout << "\t Seat Number     : 2A" << endl;
        cout << "\t Flight Class    : " << fc << endl;
        cout << "\t Total Fare      : "
             << "Rs " << total_fare << endl;
        break;
    default:
        cout << "\t Error !" << endl;
        cout << "\t Invalied Number" << endl;
        break;
    }
}
int main()
{
    string choice = "0";
    do
    {
        routes();
        booking();
        cout << endl
             << endl;
        cout << "Do You Want To Book Another Flight ?" << endl;
        cin.ignore();
        getline(cin, choice);
    } while (choice == "yes" || choice == "Yes");
    cout << endl
         << endl;
    cout << "\t Thank You For Booking MM Airlines" << endl;
    cout << "\t Hope You Have A Safe Flight" << endl;
    return 0;
}
