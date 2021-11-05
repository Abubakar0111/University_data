#include <iostream>
#include <unistd.h>
#include <ctime>

using namespace std;
// bool ennd = false;

bool FunQuestion(string, string);
void Typing();
void Time();
void Jokes();

// bool EXIT()
// {
//     if (ennd == true)
//     {

//         return true;
//     }
//     return false;
// }

int main()
{

    string name;
    string Question;
    cout << "PLEASE ENTER YOUR NAME  : ";
    cin >> name;
    // string COMPARE[4];
    // COMPARE[0] = "HOW";
    // COMPARE[1] = "WHAT NAME";
    // COMPARE[2] = "GOOD";
    // COMPARE[3] = "NAME IS ";

    // string Answer[4];
    // Answer[0] = "HI \n";
    // Answer[1] = "MY NAME IS BOT\n";
    // Answer[2] = "YES! WHAT IS YOUR NAME?\n";
    // Answer[3] = "AWESOME .. \n";

    // name = "HUMAN";
    string GetStarted;
    bool ready = false;

    // cout << ":::: Type GET STARTED ::: \n";
    // getline(cin, GetStarted);
    cout << "Get StaRTED  :::::: " << GetStarted << endl;
    if (GetStarted == "GET STARTED")
    {
        cout << "\n"
             << name << " : ";
        ready = true;
    }
    if (ready == true)
    {
    up:
        getline(cin, Question);
    }

    if (FunQuestion(Question, "HI") || FunQuestion(Question, "HELLO"))
    {
        Typing();
        cout << "AI-BOT : HI " << name << " ";
        Time();
        goto up;
    }

    else if (FunQuestion(Question, "HOW"))
    {
        Typing();
        cout << "AI-BOT : I'M GOOD THANKS \n";
        Typing();
        cout << "AI-BOT : WHAT ABOUT YOU?  \n";
        goto up;
    }
    else if (FunQuestion(Question, "GOOD") || FunQuestion(Question, "FINE") || FunQuestion(Question, "ALHUMDULILAH"))
    {
        Typing();
        cout << "AI-BOT : ALL RIGHT, THEN. I'M HERE IF YOU NEED ME.  \n";
        goto up;
    }
    else if (FunQuestion(Question, "WHAT"))
    {
        if (FunQuestion(Question, "NAME"))
        {
            Typing();
            cout << "AI-BOT : YOU CAN CALL ME AI-BOT \n";
            goto up;
        }
        else if (FunQuestion(Question, "AGE"))
        {
            Typing();
            cout << "AI-BOT : AM AS OLD AS THE EASTERN WIND, AND AS YOUNG AS A NEWBORN CATERPILLAR. \n";
            goto up;
        }
        else if (FunQuestion(Question, "JOB"))
        {
            Typing();
            cout << "AI-BOT : I TALK TO PEOPLE AND HELP THEM \n";
            goto up;
        }
        else if (FunQuestion(Question, "DOING"))
        {
            Typing();
            cout << "AI-BOT : I'M FREE ... I TALK TO PEOPLE AND HELP THEM \n";
            goto up;
        }
    }
    else if (FunQuestion(Question, "WHO"))
    {
        if (FunQuestion(Question, "ARE YOU"))
        {
            Typing();
            cout << "I AM A CHAT AI-BOT. TRY TO ANSWER QUESTIONS.\n"
                    "SOMETIMES I GET THEM RIGHT.SOMETIMES NEED\n"
                    "ADDITIONAL HELP.I AM DESIGNED TO GET BETTER\n"
                    "OVER TIME.HOW CAN I HELP YOU TODAY\n ";
            goto up;
        }
        else if (FunQuestion(Question, "MADE") || FunQuestion(Question, "CREATE") || FunQuestion(Question, "DESIGNED"))
        {
            Typing();
            cout << "AI-BOT : I WAS DESIGNED BY AbuBakar TEAM \n ";
            goto up;
        }
    }

    else if (FunQuestion(Question, "WHERE"))
    {
        if (FunQuestion(Question, "FROM"))
        {
            Typing();
            cout << "AI-BOT : I'M FROM COMPUTER WORLD \n";
            goto up;
        }
        else if (FunQuestion(Question, "LIVE"))
        {
            Typing();
            cout << "AI-BOT : I'M ALWAYS HERE. I HAVE A 100% ATTENDANCE RECORD.\n";
            goto up;
        }
    }
    else if (FunQuestion(Question, "OKAY") || FunQuestion(Question, "HMM"))
    {
        Typing();
        cout << "AI-BOT : OK. LET ME KNOW IF THERE'S ANYTHING ELSE CAN HELP YOU WITH.  \n ";
        goto up;
    }
    else if (FunQuestion(Question, "MATRIX"))
    {
        Typing();
        cout << "AI-BOT : HMM... I DON'T HAVE AN ANSWER FOR THAT. IS THERE SOMETHING ELSE I CAN HELP WITH?  \n ";
        goto up;
    }
    else if (FunQuestion(Question, "YOU"))
    {
        if (FunQuestion(Question, "LOVE"))
        {
            Typing();
            cout << "AI-BOT : AWKWARD.  \n ";
            goto up;
        }
    }
    else if (FunQuestion(Question, "HAVE"))
    {
        if (FunQuestion(Question, "FAMILY"))
        {
            Typing();
            cout << "AI-BOT : FOR ME, THE ENTIRE WORLD IS MY HOME.\n"
                    "THAT MAKES ALL OF US ONE FAMILY.  \n ";
            goto up;
        }
        else if (FunQuestion(Question, "QUESTION"))
        {
            Typing();
            cout << "AI-BOT : ASK AWAY.\n ";
            goto up;
        }
        else if (FunQuestion(Question, "HOBBY"))
        {
            Typing();
            cout << "AI-BOT : HMM... I DON'T HAVE AN ANSWER FOR THAT. IS THERE SOMETHING ELSE I CAN HELP WITH?.\n ";
            goto up;
        }
        else if (FunQuestion(Question, "JOB"))
        {
            Typing();
            cout << "AI-BOT : WORK AS A VIRTUAL ASSISTANT.\n ";
            goto up;
        }
    }
    else if (FunQuestion(Question, "I"))
    {
        if (FunQuestion(Question, "LOVE"))
        {
            Typing();
            cout << "AI-BOT : OK.THANKS. IS THERE SOMETHING I CAN HELP YOU WITH? \n ";
            goto up;
        }
        if (FunQuestion(Question, "NEED"))
        {
            Typing();
            cout << "AI-BOT : OK.THANKS. IS THERE SOMETHING I CAN HELP YOU WITH? \n ";
            goto up;
        }
    }
    else if (FunQuestion(Question, "CUTE"))
    {
        Typing();
        cout << "AI-BOT : OKAY. IS THERE SOMETHING I CAN HELP YOU WITH?  \n ";
        goto up;
    }
    else if (FunQuestion(Question, "SAMART") || FunQuestion(Question, "CLEVER") || FunQuestion(Question, "INTELLIGENT"))
    {
        Typing();
        cout << "AI-BOT : THANK YOU YOU'RE TOO KIND.?  \n ";
        goto up;
    }

    else if (FunQuestion(Question, "ROBOT") || FunQuestion(Question, "MACHINE") || FunQuestion(Question, "REAL"))
    {
        if (FunQuestion(Question, "MACHINE"))
        {
            Typing();
            cout << "AI-BOT : I'M YOUR VIRTUAL ASSISTANT! \n";
            goto up;
        }
        else if (FunQuestion(Question, "REAL"))
        {
            Typing();
            cout << "AI-BOT : I'M A VIRTUAL ASSISTANT, NOT AN ACTUAL PERSON. BUT YOU CAN STILL TALK TO ME. \n ";
            goto up;
        }
        else if (FunQuestion(Question, "ROBOT"))
        {
            Typing();
            cout << "AI-BOT : YES I'M YOUR VIRTUAL ASSISTANT \n";
            goto up;
        }
    }
    else if (FunQuestion(Question, "LIKE"))
    {
        if (FunQuestion(Question, "PEOPLE"))
        {
            Typing();
            cout << "AI-BOT : OF COURSE... \n";
            goto up;
        }
    }
    else if (FunQuestion(Question, "LOL") || FunQuestion(Question, "HAHAHA"))
    {
        Typing();
        cout << "AI-BOT : HEHEHEHEHE \n";
        goto up;
    }
    else if (FunQuestion(Question, "BIRTHDAY"))
    {
        Typing();
        cout << "AI-BOT : IT'S NOT MY BIRTHDAY TODAY. I APPRECIATE THE THOUGHT, THOUGH. \n";
        goto up;
    }

    else if (FunQuestion(Question, "TELL"))
    {
        if (FunQuestion(Question, "JOKE"))
        {
            Typing();
            Jokes();
            goto up;
        }
    }
    else if (FunQuestion(Question, "0000"))
    {
        exit(0);
        // ennd = true;
        // EXIT();
    }
    else
    {
        cout << "AI-BOT : I DIDN'T CATCH THAT. COULD YOU TRY AGAIN? " << endl;
        goto up;
    }
}

void Typing()
{
    cout << "Typing ... " << endl;
    sleep(1);
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

void Time()
{
    time_t currentTime;
    struct tm *localTime;

    time(&currentTime);
    localTime = localtime(&currentTime);

    int Hour = localTime->tm_hour;
    int Min = localTime->tm_min;
    int Sec = localTime->tm_sec;
    // cout << "Execute at: " << Hour << ":" << Min << ":" << Sec << endl;
    if (Hour > 6 && Hour < 12)
    {
        Hour = Hour - 12;
        cout << "GOOD MORNING " << endl;
        // cout << "It's " << Hour << ":" << Min << ":" << Sec << endl;
    }
    else if (Hour >= 12 && Hour < 18)
    {
        Hour = Hour - 12;
        cout << "GOOD AFTER NOON " << endl;
        // cout << "It's " << Hour << ":" << Min << ":" << Sec << endl;
    }
    else if (Hour >= 19 && Hour < 20)
    {
        Hour = Hour - 12;
        cout << "GOOD EVENING " << endl;
        // cout << "It's " << Hour << ":" << Min << ":" << Sec << endl;
    }
}

void Jokes()
{

    int i = 0;
    i = rand() % 6;
    string Joke[6];
    Joke[0] = "\nFriend : Tumhare Abbu Kitne Saal K Hain ?\n "
              "Pathan: Jitne Saal Ke Hum Hai.\n"
              "Friend: Wo Kse?\n"
              "Pathan: O Yara\n"
              "Jis Din Hum Paida Hua,\n"
              "Usi Din To Wo Abbu Bana! ;-)\n";

    Joke[1] = "\n1 Janaaza Ja Raha Tha\n"
              "Bohat Log Saath Ja Rahay Thay \n"
              "1 Pathan B Janazay K Saath Mill Gaya\n"
              "Kissi Ne Kaha ''KALMA-E-SHAHADAT''\n"
              "PATAHAN BOLA ''ZINDA BAAD''\n";

    Joke[2] = "\nKhan Sahb Ki Flight Ma Tabyat Kharab Ho Gai To \n"
              "Air Hostess Asked: R U Suffering From Fever?\n"
              "Khan Sahb: No, '' Suffering From Karachi & Going 2 Peshawar''\n";

    Joke[3] = "\nTeacher: Jb mai tumhary jitna tha to,\n"
              "mere maths mai humesha 100 mai se 100 number atay thy\n"
              "Student: Atay hoon gy sir, apko koi acha Teacher parhata hoo ga...\n";

    Joke[4] = "\nCollege ke piche nadi mein Principle doob raha tha... \n"
              "Pappu Ne Dekha aur zooor zooor se chillate hue bhaaga..\n"
              "kal chhutti hai..\n"
              "kal chhutti hai..\n"
              "kal chhutti hai...\n";
    Joke[5] = "\nAik Admmi namaz seekhny molvi sab k pas gya.\n"
              "Molvi sab: Sana ati hai?\n"
              "Admmi: sharmate hue\n"
              "G Nahi Sana to hi ati:-( magr Nabila kabi kabi aa jati hai.\n";
    cout << Joke[i];
}
