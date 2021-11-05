#include <iostream>
using namespace std;

void readArray(int *, int);           //....A
void findEvenSum(int *, int);         //....B
void searchThirdSmallest(int *, int); //...C
void findGreater(int *, int);         //...D
void reverseValues(int *, int);       //...E
void displayAboveAvarage(int *, int); //....F

int main()
{
    int size = 7;
    int small = 0;
    int count = 0;
    int arr[size];

    readArray(arr, size); //For input

    findEvenSum(arr, size); //For Even Sum

    searchThirdSmallest(arr, size); //For Third Small

    findGreater(arr, size); //for Find Greater from M

    reverseValues(arr, size);
    displayAboveAvarage(arr, size);
}
void readArray(int arr[], int size)
//For input
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter values in the index of " << i << " is :";
        cin >> arr[i];
    }
}

void findEvenSum(int arr[], int size)
//For Even Sum
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }

    cout << " Even Sum is " << sum << endl;
}
void searchThirdSmallest(int arr[], int size) //For Third Small
{
    int count = 0;
    int small = arr[0];
    int thirdS = 0;

    for (int i = 0; i < size; i++)
    {

        if (arr[i] < small)
        {
            count++;
            small = arr[i]; // cout<<"Count "<<count<<" "<<arr[i]<<end;
            if (count == 4)
            {
                thirdS = arr[i];
            }
        }
    }

    cout << "Third small is " << thirdS << endl;
}

void findGreater(int arr[], int size)
{
    cout << " Enter velue of 'M' and check greater value :";
    int m, max, reset;
    cin >> m;
    cout << "Greater value from M is => ";
for (int i=0; i<size; i++)
{
if(arr[i]>m)
{
    reset = arr[i];
    cout << reset << ", ";
}
}
cout << endl;
}
void reverseValues(int arr[] ,int size)
{
    int S = 6;
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[S];
        S--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "In Reverse " << arr[i]<< " " << endl;
    }
}