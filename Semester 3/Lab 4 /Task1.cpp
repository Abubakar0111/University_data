#include <iostream>

using namespace std;
void INSERT_AT_END(int n, int arrSize, int array[])
{
    int value;
    cout << "Enter the value to insert at the End  : ";
    cin >> value;
    for (int c = n - 1; c >= arrSize - 1; c--)
    {
        array[c + 1] = array[c];
    }
    array[arrSize] = value;
}

void OUT_PUT(int Size, int array[])
{
    cout << "Resultant array is\n"
         << endl;
    for (int c = 0; c <= Size; c++)
    {
        cout << array[c];
    }
}

void DATA_ITEM(int Size, int array[])
{
    int DEL, count = 0;
    // cout << "Enter Value you want to delete : ";
    // cin >> DEL;

    // for (int i = 0; i < Size; i++)
    // {
    //     if (DEL == array[i])
    //     {
    //         /* code */
    //     }
    // }
    cout << "\nEnter element to be delete :: ";
    cin >> DEL;

    for (int i = 0; i <= Size; i++)
    {
        if (array[i] == DEL)
        {
            for (int j = i; j < (Size - 1); j++)
            {
                array[j] = array[j + 1];
            }
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "\nElement not found..!!\n";
    }
    else
    {
        cout << "\nElement deleted successfully..!!\n";
        // cout << "\nNow the new array is ::\n";
        // for (int i = 0; i < (Size - 1); i++)
        // {
        //     cout << array[i] << " ";
        // }
    }
    cout << "\n";
}
void SEARCH(int Size, int array[])
{
    int num, cnt, pos;
    cout << "\n Enter Element to be Searched : ";
    cin >> num;
    for (int i = 0; i < Size; i++)
    {
        if (array[i] == num)
        {
            cnt = 1;
            pos = i + 1;
            break;
        }
    }
    if (cnt == 0)
    {
        cout << "\n Element Not Found..!!";
    }
    else
    {
        cout << "\n Element " << num << " Found At Position " << pos;
    }
}
void IS_EMPTY(int Size, int array[])
{
    for (int i = 0; i < Size; i++)
    {
        if (array[i] == NULL)
        {
            cout << " ::: The Array is Empty ::::  " << endl;
            break;
        }
        else
        {
            cout << " ::: The Array is not Empty ::::  " << endl;
            break;
        }
    }
}
int main()
{
    int position, c, n, value;
    cout << "Enter number of elements in array :";
    cin >> n;
    int array[n];
    cout << "Enter elements\n"
         << endl;
    for (c = 0; c < n; c++)
    {
        cin >> array[c];
    }
    int arrSize = sizeof(array) / sizeof(array[0]);
    cout << "\nThe array Size is " << arrSize << endl;
    INSERT_AT_END(n, arrSize, array);
    OUT_PUT(arrSize, array);
    DATA_ITEM(arrSize, array);
    OUT_PUT(arrSize, array);
    SEARCH(arrSize, array);
    OUT_PUT(arrSize, array);
    IS_EMPTY(arrSize, array);

    // cout << "Enter the location where you wish to insert an element\n"
    //      << endl;
    // cin >> position;
}