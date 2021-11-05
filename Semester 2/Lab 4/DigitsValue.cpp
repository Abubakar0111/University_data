#include <iostream>
#include <string>

using namespace std;
int main()
{
    char code[9] = {'L', 'Z', '1', '2', '3', '5', '9', '6', '7'};
    cout<<"Before : "<< code << endl;
    char Alpa = 'A';
    char numaric = '1';
    int round = 1;
    int nextLine = 0;


    for (int i = 0; i < 26; i++)
    {

        nextLine = i + 1;

        if (nextLine % 9 == 0)
        {
            round++;
        }


        for (int j = 0; j < 9; j++)
        {
            if (code[j] == Alpa)
            {
                code[j] = numaric;
            }
        }
        numaric++;
        Alpa++;

        if (nextLine % 9 == 0)
        {
            numaric = '1';
        }

    }

    cout << "After : " << code << endl;
    int sum1 = code[1] + code[3] + code[5];
    int sum2 = 3 * (code[0] + code[2] + code[4] + code[6]);

    int check_digit = sum1 + sum2;
    check_digit = 10 - (check_digit % 10);
    if (check_digit == 10)
    {
        check_digit = 0;
    }
    cout << "Check Digit :::: " << check_digit << endl;
}