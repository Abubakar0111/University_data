#include <iostream>
#include <unistd.h>
#include <ctime>

using namespace std;
void Typing()
{
    cout << "Typing ... " << endl;
    sleep(1);
}
void Time()
{
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);
    localTime = localtime(&currentTime);

    int Hour = localTime->tm_hour;
    int Min = localTime->tm_min;
    int Sec = localTime->tm_sec;
    cout << "Execute at: " << Hour << ":" << Min << ":" << Sec << endl;
    if (Hour > 6 && Hour < 12)
    {
        Hour = Hour - 12;
        cout << "Good Morning " << endl;
        cout << "It's Time " << Hour << ":" << Min << ":" << Sec << endl;
    }
    else if (Hour >= 12 && Hour < 18)
    {
        Hour = Hour - 12;
        cout << "Good After Noon " << endl;
        cout << "It's Time " << Hour << ":" << Min << ":" << Sec << endl;
    }
    else if (Hour >= 19 && Hour < 20)
    {
        Hour = Hour - 12;
        cout << "Good Evening " << endl;
        cout << "It's Time " << Hour << ":" << Min << ":" << Sec << endl;
    }
}
bool FunQuestion(string Question, string Q)
{
    bool Found = false;
    if ((Question.find(Q) != string::npos))
    {
        Found = true;
    }
    return Found;
}
int main()
{
    Time();
    string Question;
    // // string Q[4];
    // string Hi = "HI";
    // string aslamoAlaikum = "Aslamo Alikum";
Up:
    cout << "H : ";
    getline(cin, Question);

    // if
    // int find = (Question.find("HI"));
    if (FunQuestion(Question, "HOO"))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found " << endl;
    }

    if ((Question.find("HI") != string::npos))
    {
        // cout << "Typing ... " << endl;
        // sleep(1);
        Typing();
        cout << "C: HI! HOW ARE YOU!" << endl;
        // cout << "Find  -> : " << (Question.substr((Question.find("HI")), Question.size())) << endl;
        goto Up;
    }
    if ((Question.find("FINE") != string::npos) || (Question.find("ALHUMDULILAH") != string::npos))
    {
        Typing();
        cout << "C: THAT'S GOOD ... HOW CAN I HELP YOU ? \n";
        // cout << "Find  -> : " << (Question.substr((Question.find("HOW")), Question.size())) << endl;
        goto Up;
    }
    if ((Question.find("HELP") != string::npos) || (Question.find("NEED`") != string::npos))
    {
        Typing();
        cout << "C: TELL ME ABOUT YOURSELF \n";
        // cout << "Find  -> : " << (Question.substr((Question.find("WOW")), Question.size())) << endl;
        goto Up;
    }
    else
    {
        Typing();
        cout << "I CODN'T UNDERSTANT PLEASE RE-ENTER \n";
        goto Up;
    }

    // {
    //     cout << "Hello! How are you " << endl;
    //     goto Up;
    // }
    // else if
    // (Question.find(aslamoAlaikum));
    // {
    //     cout << "Walaikum salam " << endl;
    //     goto Up;
    // }
    //     else
    // {
    //     cout << "I don't Understand " << endl;
    //     goto Up;
    // }

    return 0;
}