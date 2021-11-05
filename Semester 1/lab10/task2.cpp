#include <iostream>
using namespace std;

int Find_Max_Divisors(int p[], int size)
{
    int count = 0, max = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < p[i] / 2; j++)
        {
            if (p[i] % j == 0)
            {
                count++;
            }
        }
        if (count > max)
            max = p[i];
    }
    return max;
}
int main()
{
    int size = 30;
    int arr[size];
    // int* array = &arr [30];
    // cout << "Please enter values of the array
    cout << "Please enter 30 values of the array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int value = Find_Max_Divisors(arr, size);
    cout << "\n ******** Number w ith most divisors in array is => " << value << " ***********" << endl;
}