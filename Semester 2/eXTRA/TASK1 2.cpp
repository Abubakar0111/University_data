#include <iostream>

using namespace std;
void grade_calculator(int, int[]);
int main()
{
    int size = 3;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Sbj " << i + 1 << " Marks : ";
        cin >> arr[i];
    }
    grade_calculator(size, arr);
}
void grade_calculator(int size, int arr[])
{
    int forGradeA = 0;

    if (arr[0] > 60 && arr[0 + 1] > 60 && arr[0 + 2] > 60)
    {
        cout << ":::: Got A grade :::: " << endl;
        exit(0);
    }
    if (arr[0] > 60 || arr[0 + 1] > 60 || arr[0 + 2] > 60)
    {
        cout << ":::: Got B grade :::: " << endl;
        exit(0);
    }
    if (arr[0] < 60 || arr[0 + 1] < 60 || arr[0 + 2] < 60)
    {
        cout << ":::: Got F grade :::: " << endl;
    }
}
