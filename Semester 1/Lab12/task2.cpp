#include <iostream>
using namespace std;
int main()
{
    int ReplaceE = 0;
    int negitive = 0;
    cout << "==== Eliminate evens ====" << endl;
    int size = 10;
    int values[size];

    for (int i = 0; i < size; i++) //For input
    {
        cout << "Enter value of " << i + 1 << " :";
        cin >> *(values + i);
    }
    for (int i = 0; i < size; i++) //Before odd positove
    {
        if (*(values + i) > negitive)
        {
            if (*(values + i) % 2 != 0)
            {
                cout << "Before odd positive ==> " << *(values + i) << endl;
            }
        }
    }
    for (int i = 0; i < size; i++) //After add in odd positive
    {

        if (*(values + i) > negitive)
        {
            if (*(values + i) % 2 != 0)
            {
                cout << " After adding 1 in odd positive ==>" << *(values + i) + 1 << endl;
            }
        }
    }
    for (int i = 0; i < size; i++) //Before odd negative
    {

        if (*(values + i) < negitive)
        {
            if (*(values + i) % 2 != 0)
            {
                cout << "Before odd negitive ==> " << *(values + i) << endl;
            }
        }
    }
    for (int i = 0; i < size; i++) //After add in odd positive
    {
        if (*(values + i) < negitive)
        {
            if (*(values + i) % 2 != 0)
            {
                cout << "After adding -1 in odd negitive ==> " << *(values + i) - 1 << endl;
            }
        }
    }
}
