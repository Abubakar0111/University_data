#include <iostream>
using namespace std;
int main()
{
    int arr[5], temp, choose;

    cout << "Enter 5 integers number : " << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Press 1 for Ascending order\nPress 2 for Descending order : " ;
    cin >> choose;

    if (choose == 1)
    {
        for (int a = 0; a < 5; a++)
            for (int i = 0; i < 4; i++)
                if (arr[i] > arr[i + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
        cout << "Ascending order : " << endl;
        for (int i = 0; i < 5; i++)
            cout << arr[i] << "   ";
    }

    else if (choose == 2)
    {
        for (int d = 0; d < 5; d++)
            for (int i = 0; i < 4; i++)
                if (arr[i] < arr[i + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
        cout << "Descending order : " << endl;
        for (int i = 0; i < 5; i++)
            cout << arr[i] << "   ";
    }
    else
    {
        cout << "Invalied number"<<endl;
    }
}