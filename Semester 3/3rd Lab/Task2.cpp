#include <iostream>

using namespace std;
int Fun(string s1, string s2, int s1_size, int s2_size)
{
    int count = 0;

    for (int i = 0; i < s1_size; i++)
    {
        for (int j = 0; j < s2_size; j++)
        {
            if (s1[i] == s2[j])
            {
                count++;
                // s2[j] = '*';
                break;
            }
        }
    }
    return count;
}
int main()
{
    int count = 0;
    char s1[] = "back", s2[] = "abcd";
    int s1_size = sizeof(s1);
    int s2_size = sizeof(s2);

    cout << "S1 size is : " << s1_size << endl;
    cout << "S2 size is : " << s2_size << endl;

    int New_s1 = s1_size - 1;
    int New_s2 = s2_size - 1;
    cout << "- S1 size is : " << New_s1 << endl;
    cout << "- S2 size is : " << New_s2 << endl;

    cout << "The common string char is :  " << Fun(s1, s2, New_s1, New_s2) << endl;
}