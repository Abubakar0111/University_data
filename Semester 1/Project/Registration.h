#include <iostream>
#include <fstream>
using namespace std;

void welcome1() //Own Welcome Function
{
    string name; //Taking name
    cout << "Enter your name : ";
    cin >> name;
    cout << "+-----------------------------------------------------------------------" << endl;
    cout << " _  _  _ _______        ______   _____  _______ _______ \n"
            " |  |  | |______ |      |       |     | |  |  | |______    "
         << name << " to\n"
                    " |__|__| |______ |_____ |_____  |_____| |  |  | |______    Pharmacy. \n"
         << endl;
    cout << "+------------------------------------------------------------------------" << endl;
}
void inValidGamil()
{
    cout << "\t\t+-----------------------------------+" << endl;
    cout << "\t\t|     :::::: InVailed Gmail :::::   |" << endl;
    cout << "\t\t+-----------------------------------+" << endl;
}
void inValidPassword()
{
    cout << "\t\t+--------------------------------------+" << endl;
    cout << "\t\t|     :::::: InVailed Password :::::   |" << endl;
    cout << "\t\t+--------------------------------------+" << endl;
}
void welcome2()
{
    cout << ":::: Welcom to MEDECINE PREDICTION SYSTEM :::: " << endl;
}
void PasswordLegth()
{
    cout << "\n\t\t+---------------------------------------------------+" << endl;
    cout << "\t\t|    :::::: Min password Length must be 8  :::::    |" << endl;
    cout << "\t\t+---------------------------------------------------+" << endl;
}
class SignUP
{
private:
    bool gMailButton;
    char data;
    string gMail, password;

public:
    void GamilandPassword(int count)
    {
    againGamil:
        ofstream outfile;                           // out data from program --> to file
        outfile.open("gmailSaving.txt", ios ::app); // Opne function 1 = file -- 2 = mod -> append for write
        cout << "Enter your Gmail : ";
        cin >> gMail;
        gMailButton = false;

        int indexOfGmail;
        indexOfGmail = 1;
        indexOfGmail = gMail.find('@'); // for @ <--
        // cout << "position of p is :" << indexOfGmail << endl;
        if (indexOfGmail != -1) //when they not find the give back -1
        {
            // cout << "::: SIGN IN Succesfully " << endl;
            gMailButton = true;
            outfile << gMail << endl; // when gmail is true then go to file
        }

        if (gMailButton == false)
        {
            inValidGamil();
            goto againGamil;
        }
    againPassword:
        cout << "Enter your Password : ";
        cin >> password;
        int sizeOfPassword = password.length();
        // cout << "P is : " << sizeOfPassword << endl;
        if (sizeOfPassword > 7)
        {
            outfile << password << endl; // when Password is true then go to file
        }
        else
        {
            inValidPassword();
            PasswordLegth();
            goto againPassword;
        }
    }
};

class SignIN
{
    bool correctGmail;
    bool correctPassword;
    int correctGmailButton;
    // int map;
    string gmail;
    string password;

public:
    void setter()
    {
        correctGmail = false;
        correctPassword = false;
        correctGmailButton = 0;
    }
    void Fun_signIn(int count)
    {
        ifstream inFile;
        inFile.open("gmailSaving.txt");
        cout << "Enter Your Gmail : ";
        cin >> gmail;
        cout << "Enter your Password : ";
        cin >> password;

        string str;

        while (getline(inFile, str))
        {
            if (correctGmailButton == 1) //when Gmail is found then {correctGmailButton} will be 1 :::
            {
                if (password == str) //comparing password and string from file
                {
                    correctPassword = true;
                    break;
                }
            }
            else if (gmail == str) //comparing Gmail and string from file
            {
                correctGmail = true;
                correctGmailButton++; // when Gmail is correct then checking for new text in file --- see above :::
                // cout << "Found :: " << endl;
            }
            else
            {
                // correctGmail = false;
            }
        }
    }
    // }
    bool gmailChecker() // return true false value to the main
    {
        return correctGmail;
    }
    bool passwordChecker()
    {
        return correctPassword;
    }
};

int fileSize()
{
    string line;
    int count = 0;
    ifstream file("gmailSaving.txt");
    while (getline(file, line))
    {
        count++;
    }
    // cout << "Numbers of lines in the file : " << count << endl;
    count = count + 2; // for next two inputs Gmail and passwords
    return count;
}

bool Registration_main()
{
    welcome1();
    SignUP signUp; //class obj
    SignIN signIn; //class obj

    int count = fileSize(); //counting file text line size
    int choose;
again:
    signIn.setter(); // for becoming defualt value
    cout << "1 Registrarion ::::\n2 SignIn ::::\n=> ";
    cin >> choose;
    if (choose == 1) //for registration
    {
    notRegister:
        cout << "\n  :::::: Registration Section :::::" << endl;
        signUp.GamilandPassword(count); //count is file size
        // welcom();
        goto again;
    }
    else if (choose == 2) // for sign Up
    {
        cout << "\n  :::::: SignIn Section :::::" << endl;
        signIn.Fun_signIn(count); //count is file size

        bool verifyGmail = signIn.gmailChecker();       //returing true/false value
        bool verifyPassword = signIn.passwordChecker(); //returing true/false value

        if (verifyGmail == 1 || verifyPassword == 1)
        {
            if (verifyPassword == 0)
            {
                cout << "::: Wrong password ::: " << endl;
                goto again;
            }
            if (verifyGmail == 1 && verifyPassword == 1)
            {
                return true; // returning value to another class
            }
            welcome2(); //
            goto again;
        }
        else
        {
            cout << "::: Wrong Gmail :::: " << endl;
            goto again;
        }
    }
    else
    {
        choose = 0;
        cout << "::: Choose valid option :::: " << endl;
        goto again;
    }
    return false;
}
