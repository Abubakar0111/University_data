#include <iostream>

using namespace std;
int* highOM(int OM[], int size);


int main()
{

    int size = 0;
    cout << "Enter total student : ";
    cin >> size;
    int OM[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << i + 1 << " : ";
        cin >> OM[i];
    }
    int * f = highOM(OM, size);

    for (int i = 0; i < size; i++)
    {
        if (f[i] > 7)
        {
            cout<<"Student "<<i+1 << " is : " << f[i]<<endl;
        }
    }
    
}
int* highOM(int OM[], int size)
{
    return OM;
}
