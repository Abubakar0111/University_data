#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
void division();
int firstnum, secondnum;

int main()
{
    division();
}

void division()
{
    cout << "Enter First Number : ";
    cin >> firstnum;
    cout << "Enter Second Number : ";
    cin >> secondnum;
    if (firstnum == 0)
    {
        cout << "Division is Not Possible as the first number is Zero " << endl;
    }
    else
    {
        cout << "Division is "<<secondnum/ firstnum<< endl;
    }
}