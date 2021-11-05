#include <iostream>
using namespace std;

// converts character array
// to string and returns it
string convertToString(char *a, int size)
{
    int i;
    string s = "";
    for (i = 0; i < size; i++)
    {
        s = s + a[i];
    }
    return s;
}

// Driver code
int main()
{
    char a[] = {'C', 'O', 'D', 'E'};
    char b[] = "geeksforgeeks";

    int a_size = sizeof(a) / sizeof(char);
    int b_size = sizeof(b) / sizeof(char);

    string s_a = convertToString(a, a_size);
    string s_b = convertToString(b, b_size);

    cout << s_a << endl;
    cout << s_b << endl;

    return 0;
}
