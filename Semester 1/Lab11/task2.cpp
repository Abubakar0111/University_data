#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2, str3;
    cout << "please Enter a String 1  :";
    getline(cin, str1);

    cout << "please Enter a String to find  :";
    getline(cin, str2);

    cout << "please Enter a string for replace    :";
    getline(cin, str3);

    int x1 = 0;
    // cout<<" your enterd string is :::"<<str1<<endl;

    while (str1[x1] != '\0')
    {
        x1++;
    }
    // cout<<"THE LENGTH Of STr§ 1st IS :::: :"<<x1<<endl;

    int x2 = 0;

    while (str2[x2] != '\0')
    {
        x2++;
    }
    // cout<<"THE LENGTH Of 2nd IS :::: :"<<x2<<endl;
    int findable = (str1.find(str2));
    int findableR = (str1.rfind(str2));
    // cout<<"Findable is <<<<<"<<findable<<endl;
    // // cout<<"Findable is <<<<< Reverse "<<findableR<<endl;
    // cout<<"Find from left === "<<(str1.substr(findable,x2))<<endl;
    // cout<<"Find from right === "<<(str1.substr(findableR,x2))<<endl;
    string find2 = (str1.substr(findable, x2));
    // cout<<"Finf 2 ==="<<find2;
    string findR2 = (str1.substr(findable, x2));
    string replace = str1.replace(findable, x2, str3);
    string replaceR = str1.replace(findableR, x2, str3);
    string insertS = str1.replace(findableR, x2, str3);
    cout << "Updating Result is : " << insertS << endl;
}
