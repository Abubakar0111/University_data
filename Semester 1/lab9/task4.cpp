#include <iostream>

using namespace std;
bool isVowel(char);

int main()
{
    char userChar;
    cout << "Please enter a character : ";
    cin >> userChar;
    if (isVowel(userChar))
        cout << userChar << " is a vowel " << endl;
    else
        cout << userChar << " is not a vowel " << endl;
    return 0;
}
bool isVowel(char letter)
{
    switch (letter)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'T':
    case 'O':
    case 'U':
        return true;
    default:
        return false;
    }
}