// // #include <iostream>
// #include <unistd.h>
// // #include <stdio.h>

// // using namespace std;
// // // char input(char ch[])
// // // {
// // //     cin >> ch;
// // //     return *ch;
// // // }
// // int main()
// // {
// //     char ch[100];
// //     // cin >> ch;

// //     // string str;
// //     cout << "Enter your Question : ";

// //     // cin >> ch;
// //     gets(ch);
// //     // input(ch);

// //     // getline(cin, str);
// //     cout << "Ch -> " << ch << endl;

// //     // if (str.find(("are you a robot?")) == 0)
// //     if (strcmp(ch, "How"))
// //     {
// //         cout << "I'm fine " << endl;
// //         sleep(1); //make the programme waiting for 1 second
// //         cout << "Typing ... " << endl;
// //         sleep(1); //make the programme waiting for 1 second
// //         cout << "What about you ?? ";
// //         memset(ch, 0, sizeof ch); //rest size
// //         cin >> ch;
// //         cout << "Ch -> " << ch << endl;

// //         cout << "Good" << endl;
// //     }
// // }
// #include <iostream>
// #include <stdio.h>
// #include <string.h>
// using namespace std;
// int main(void)
// {
//     char Question[200][10], Answer[20];
//     int i = 0, c = 0, j = 0;
//     Question[0][0] = 'Hello hi';
//     Question[0][1] = 'bye ';
//     Question[0][2] = 'dfa ';
//     // Question[0][0]='Hello hi';
//     // Question[0][0]='Hello hi';

//     // cout << "\nEnter a paragraph: ";
//     // gets(Question);

//     cout << "\nEnter the word you want to search: ";
//     gets(Answer);

//     if (strlen(Answer))
//     {
//         cout << ":: Found :: " << endl;
//     }

//     while (Question[i] != '\0')
//     {
//         if (Question[i][j] == Answer[c] && Answer[c] != '\0' && Question[i][j] != ' ')
//         {
//             c++;
//             cout << "Question : " << Question[i] << endl;
//             cout << "Answer : " << Answer[i] << endl;
//             cout << "c is  : " << c << endl;
//         }
//         else
//             c = 0;

//         j++;
//         i++;
//     }

//     cout << "Strlen -> " << strlen(Answer) << endl;
//     cout << "c -> " << strlen(Answer) << endl;
//     if (c == strlen("Bye"))
//         cout << "\nWord found" << endl;

//     else
//         cout << "\nWord not found" << endl;
// }

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
    string str1, str2, str3;
    cout << "please Enter a String 1 : ";

    getline(cin, str1);

    cout << "please Enter a String 2 : ";
    getline(cin, str2);

    cout << "please Enter a String 3 : ";
    getline(cin, str3);

    int x1 = 0;
    cout << " your enterd string is :::" << str1 << endl;
    cout << " STR1 SIZE  " << str1.size() << endl;

    while (str1[x1] != '\0')
    {
        x1++;
    }
    int x2 = 0;

    while (str2[x2] != '\0')
    {
        x2++;
    }
    // int size1 = str1->length();
    // int size2 = str2->length();

    int findable = (str1.find(str2));
    cout << "Findable index is -> : " << findable << endl;
    cout << "Find from -> : " << (str1.substr(findable, x2)) << endl;
    // string find2 = (str1.substr(findable, x2));
    // cout << "Find 2 -> : " << find2 << endl;
    // string findR2 = (str1.substr(findable, x2));
    // cout << "FindR2 -> : " << findR2 << endl;
    string replace = str1.replace(findable, x2, str3);

    cout << "::: After replacing : " << replace << endl;
}
