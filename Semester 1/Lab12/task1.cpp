#include <iostream>
using namespace std;
int main()
{
    int Size_of_month = 6;
    int max = 0, min = 0, indexMAX = 0, indexMIN = 0, sum = 0, avg = 0;
    int month[Size_of_month];
    for (int i = 0; i < Size_of_month; i++)
    {
        cout << "Enyer temprature for day > " << i + 1 << " :";
        cin >> *(month + i);
    }
    min = *(month + 0);
    max = *(month + 0);
    // cout<<":::::: "<<min<<" ::::: "<<max<<endl;
    for (int i = 0; i < Size_of_month; i++)
    {

        if (*(month + i) < min)
        {
            min = (*(month + i));
            indexMIN = i;
        }

        if (*(month + i) > max)
        {
            max = (*(month + i));
            indexMAX = i;
        }

        sum = sum + (*month + i);
    }
    avg = sum / Size_of_month;

    cout << "Lowest temperature :" << *(month + indexMIN) << endl;
    cout << "Highest temperature :" << *(month + indexMAX) << endl;
    cout << "Average temperature :" << avg << endl;
}
