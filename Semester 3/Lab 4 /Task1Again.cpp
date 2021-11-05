#include <iostream>
using namespace std;
int SIZE;
int *INSERT_AT_END(int array[])
{
    int NewArray[SIZE];
    NewArray[SIZE] = array[SIZE];

    // int *arrAdd = &NewArray[SIZE];
    int END;
    // for (int i = 0; i < SIZE; i++)
    // {
    //     NewArray[i] = array[i];
    // }
    SIZE++;
    cout << "Enter number for last END : ";
    cin >> END;
    NewArray[SIZE - 1] = END;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "ELEMENT #" << i + 1 << " : " << NewArray[i] << " : \n";
    }
    // NewArray = array;

    return NewArray;
}
void OUTPUT(int array[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "** ELEMENT #" << i + 1 << " : " << array[i] << " : \n";
    }
}
int main()
{
    cout << "Enter Element of array : ";
    cin >> SIZE;
    int array[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "ELEMENT #" << i + 1 << " : ";
        cin >> array[i];
    }
    OUTPUT(array);
    int copyFromFun;
    // int *TempArr = &copyFromFun;

    copyFromFun = *INSERT_AT_END(array);
    array[SIZE] = copyFromFun;
    // for (int i = 0; i < SIZE; i++)
    // {
    //     cout << " " << *TempArr + i;
    //     array[i] = *TempArr + i;
    // }
    OUTPUT(array);

    copyFromFun = *INSERT_AT_END(array);
    array[SIZE] = copyFromFun;

    // for (int i = 0; i < SIZE; i++)
    // {
    //     cout << " " << *TempArr + i;
    //     array[i] = *TempArr + i;
    // }
    cout << endl;
    OUTPUT(array);

    copyFromFun = *INSERT_AT_END(array);
    array[SIZE] = copyFromFun;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "::::: ELEMENT #" << i + 1 << " : " << copyFromFun + i << " : \n";
    }
    OUTPUT(array);

    for (int i = 0; i < SIZE; i++)
    {
    }

    for (int i = 0; i < 3; i++)
    {
    }
}