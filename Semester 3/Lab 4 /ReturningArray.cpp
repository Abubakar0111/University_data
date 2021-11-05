#include <iostream>

using namespace std;
int SIZE;
int *RETURN(int arr[])
{
    SIZE++;
    int newarr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i + 2;
    }
    int *ptr = &newarr[SIZE];
    return ptr;
}
void OUTPUT(int array[])
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "** ELEMENT #" << i + 1 << " : " << array[i] << " : \n";
    }
    cout << endl;
}
int main()
{
    cout << "Enter SIZE : ";
    cin >> SIZE;

    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = i + 1;
    }
    int ptr2;
    ptr2 = *RETURN(arr);
    arr[SIZE] = ptr2;
    OUTPUT(arr);

    ptr2 = *RETURN(arr);
    arr[SIZE] = ptr2;
    OUTPUT(arr);
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << "::ELEMENT #" << i + 1 << " : " << arr[i] << " : \n";
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << " :  " << ptr2 + i << "\n";
    }
}