#include <iostream>

using namespace std;
int main()
{
    int max = 0, min = 0;
    int s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
    cout << "Enter you salary\'s : " << endl;
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8 >> s9 >> s10;
    if (s1 > s2 && s1 > s3 && s1 > s4 && s1 > s5 && s1 > s6 && s1 > s7 && s1 > s8 && s1 > s9 && s1 > s10)
    {
        max = s1;
    }
    else if (s2 > s1 && s2 > s3 && s2 > s4 && s2 > s5 && s2 > s6 && s2 > s7 && s2 > s8 && s2 > s9 && s2 > s10)
    {
        max = s2;
    }
    else if (s3 > s1 && s3 > s2 && s3 > s4 && s3 > s5 && s3 > s6 && s3 > s7 && s3 > s8 && s3 > s9 && s3 > s10)
    {
        max = s3;
    }
    else if (s4 > s1 && s4 > s2 && s4 > s3 && s4 > s5 && s4 > s6 && s4 > s7 && s4 > s8 && s4 > s9 && s4 > s10)
    {
        max = s4;
    }
    else if (s5 > s1 && s5 > s2 && s5 > s3 && s5 > s4 && s5 > s6 && s5 > s7 && s5 > s8 && s5 > s9 && s5 > s10)
    {
        max = s5;
    }
    else if (s6 > s1 && s6 > s2 && s6 > s3 && s6 > s4 && s6 > s5 && s6 > s7 && s6 > s8 && s6 > s9 && s6 > s10)
    {
        max = s6;
    }
    else if (s7 > s1 && s7 > s2 && s7 > s3 && s7 > s4 && s7 > s5 && s7 > s6 && s7 > s8 && s7 > s9 && s7 > s10)
    {
        max = s7;
    }
    else if (s8 > s1 && s8 > s2 && s8 > s3 && s8 > s4 && s8 > s5 && s8 > s6 && s8 > s7 && s8 > s9 && s8 > s10)
    {
        max = s8;
    }
    else if (s9 > s1 && s9 > s2 && s9 > s3 && s9 > s4 && s9 > s5 && s9 > s6 && s9 > s7 && s9 > s8 && s6 > s10)
    {
        max = s9;
    }
    else
    {
        max = s10;
    }

    cout << "Max salary is : " << max << endl;

    if (s1 < s2 && s1 < s3 && s1 < s4 && s1 < s5 && s1 < s6 && s1 < s7 && s1 < s8 && s1 < s9 && s1 < s10)
    {
        min = s1;
    }
    else if (s2 < s1 && s2 < s3 && s2 < s4 && s2 < s5 && s2 < s6 && s2 < s7 && s2 < s8 && s2 < s9 && s2 < s10)
    {
        min = s2;
    }
    else if (s3 < s1 && s3 < s2 && s3 < s4 && s3 < s5 && s3 < s6 && s3 < s7 && s3 < s8 && s3 < s9 && s3 < s10)
    {
        min = s3;
    }
    else if (s4 < s1 && s4 < s2 && s4 < s3 && s4 < s5 && s4 < s6 && s4 < s7 && s4 < s8 && s4 < s9 && s4 < s10)
    {
        min = s4;
    }
    else if (s5 < s1 && s5 < s2 && s5 < s3 && s5 < s4 && s5 < s6 && s5 < s7 && s5 < s8 && s5 < s9 && s5 < s10)
    {
        min = s5;
    }
    else if (s6 < s1 && s6 < s2 && s6 < s3 && s6 < s4 && s6 < s5 && s6 < s7 && s6 < s8 && s6 < s9 && s6 < s10)
    {
        min = s6;
    }
    else if (s7 < s1 && s7 < s2 && s7 < s3 && s7 < s4 && s7 < s5 && s7 < s6 && s7 < s8 && s7 < s9 && s7 < s10)
    {
        min = s7;
    }
    else if (s8 < s1 && s8 < s2 && s8 < s3 && s8 < s4 && s8 < s5 && s8 < s6 && s8 < s7 && s8 < s9 && s8 < s10)
    {
        min = s8;
    }
    else if (s9 < s1 && s9 < s2 && s9 < s3 && s9 < s4 && s9 < s5 && s9 < s6 && s9 < s7 && s9 < s8 && s6 < s10)
    {
        min = s9;
    }
    else
    {
        min = s10;
    }
    cout << "Min Salery is : " << min << endl;
}