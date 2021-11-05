#include <iostream>

using namespace std;

// uses overloaded '=' operator from string class
// to convert character array to string
string convertToString(char *a, int size)
{
    string s = a;
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