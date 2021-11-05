#include <iostream>

using namespace std;
bool finished = false;
bool END_COVID();
void Covid()
{
    int input, Fever = 0, Cough = 0, LossOfTasteAndSmell = 0, Fatigue = 0, Headaches = 0, AchesAndPains = 0, Sneezing = 0, SoreThroat = 0, RunnyNose = 0, Diarrhoea = 0, ShortnessOfBreath = 0;
    int coronaVirus = 0, Flu = 0, Cold = 0;
    cout << "\t\tDo you have any of the following symptoms? \n\n";
    cout << "\t\t:::: Please check all statements that apply to you ::::: \n\n";
    cout << "\t\t+-----------------------------------------------------------------------------------------------+\n";
    cout << "\t\t|  1 Fever\t\t|\t2 Cough\t\t\t|\t3 Loss of taste and smell   \t|\n"
            "\t\t+-----------------------------------------------------------------------------------------------+\n"
            "\t\t|  4 Fatigue\t\t|\t5 Headaches\t\t|\t6 Aches and pains\t\t|\n"
            "\t\t+-----------------------------------------------------------------------------------------------+\n"
            "\t\t|  7 Sneezing\t\t|\t8 Sore throat\t\t|\t9 Runny/stuffy nose\t\t|\n"
            "\t\t+-----------------------------------------------------------------------------------------------+\n"
            "\t\t|  10 Diarrhoea\t\t|\t11 Shortness of breath\n"
            "\t\t+-----------------------------------------------------------------------------------------------+\n";
    cout << "\n\t\t\t\t\t\t::::::  NO MORE SYMPTOMS => 000 :::::" << endl;

    int same = 0, out = 0, inPut = 0, size = 11; //for same, have no more symptoms, greater then 66
    bool noMore = false;
    int Symptoms[11]; //For Sumptoms
    int Second;
    cout << "\nPlease Enter Your Symptoms " << endl;

    for (int i = 0; i < size; i++) //input symptoms
    {

        do
        { //again runing

            if (same > 0) //For again runing
            {
                cout << "      ! Please choose another symptoms. " << endl;
                same = 0;
            }

            if (out > 0) //For again runing
            {
                cout << "      ! Please Enter valid symptoms number  " << endl;
                out = 0;
            }
            cout << "\no=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o\no=o=o=o=o> ";

            cout << "Symptoms #" << i + 1 << " : "; //inputing
            cin >> Symptoms[i];
            cout << "o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o\n\n";

            inPut++; //for nxt use

            if (Symptoms[i] > 11) //greater then 11
            {
                out++;
            }
            for (int j = 0; j < i; j++) //Don't use agian same symptoms
            {
                if (i >= 1)
                {
                    if (Symptoms[i] == Symptoms[j])
                    {
                        same++;
                    }
                }
            }

        } while (same > 0 || out > 0);

        for (int j = i; j < i + 1; j++)
        {
            if (Symptoms[i] == 1)
            {
            SecondUP1:
                cout << "How high is your fever level? \n20%\n50%\n80%\n=> ";
                cin >> Second;
                if (Second >= 0 && Second <= 20)
                {
                    Cold = Cold + 1;
                }
                else if (Second > 20 && Second < 50)
                {
                    Flu = Flu + 1;
                }
                else if (Second >= 50 && Second <= 100)
                {
                    coronaVirus = coronaVirus + 1;
                }
                else
                {
                    cout << "::: Enter valid info ::: " << endl;
                    goto SecondUP1;
                }
            }
            if (Symptoms[i] == 2)
            {
            SecondUP2:
                cout << "How high is your cough level? \n20%\n50%\n80%\n=> ";
                cin >> Second;
                if (Second >= 0 && Second <= 20)
                {
                    Cold = Cold + 1;
                }
                else if (Second > 20 && Second < 50)
                {
                    Flu = Flu + 1;
                }
                else if (Second >= 50 && Second <= 100)
                {
                    coronaVirus = coronaVirus + 1;
                }
                else
                {
                    cout << "::: Enter valid info ::: " << endl;
                    goto SecondUP2;
                }
            }
            if (Symptoms[i] == 3)
            {
            SecondUP3:
                cout << "How your Loss of taste and smell? \n1 Sudden\n2 Rare\n3 SomeTime\n=> ";
                cin >> Second;
                if (Second == 1) //sudden
                {
                    coronaVirus = coronaVirus + 1;
                }
                else if (Second == 2) //rare
                {
                    Flu = Flu + 1;
                }
                else if (Second == 3) //sometime
                {
                    Cold = Cold + 1;
                }
                else
                {
                    cout << "::: Enter valid info ::: " << endl;
                    goto SecondUP3;
                }
            }
            if (Symptoms[i] == 4)
            {
            SecondUP4:
                cout << "How high is your Fatigue level? \n20%\n50%\n80%\nWhat is Fatigue?/Info ->Type 111 \n=> ";
                cin >> Second;
                if (Second >= 0 && Second <= 20)
                {
                    coronaVirus = coronaVirus + 1;
                }
                else if (Second >= 20 && Second <= 50)
                {
                    Cold = Cold + 1;
                }
                else if (Second > 50 && Second <= 100)
                {
                    Flu = Flu + 1;
                }
                else if (Second == 111)
                {
                    cout << "\n! Fatigue is a feeling of constant tiredness or weakness and can be physical, mental or a combination of both." << endl;
                    goto SecondUP4;
                }
                else
                {
                    cout << "::: Enter valid info ::: " << endl;
                    goto SecondUP4;
                }
            }

            if (Symptoms[i] == 5)
            {
            SecondUP5:
                cout << "\nHow high is your Headaches level? \n20%\n50%\n80%\n=> ";
                cin >> Second;
                if (Second >= 0 && Second <= 20)
                {
                    coronaVirus = coronaVirus + 1;
                }
                else if (Second >= 20 && Second <= 50)
                {
                    Cold = Cold + 1;
                }
                else if (Second > 50 && Second <= 100)
                {
                    Flu = Flu + 1;
                }
                else
                {
                    cout << "::: Enter valid info ::: " << endl;
                    goto SecondUP5;
                }
            }
            if (Symptoms[i] == 6)
            {
            SecondUP6:
                cout << "\nHow high is your Aches and pains level? \n20%\n50%\n80%\nInfo 111\n=> ";
                cin >> Second;
                if (Second >= 0 && Second <= 20)
                {
                    coronaVirus = coronaVirus + 1;
                }
                else if (Second >= 20 && Second <= 50)
                {
                    Cold = Cold + 1;
                }
                else if (Second > 50 && Second <= 100)
                {
                    Flu = Flu + 1;
                }
                else if (Second == 111)
                {
                    cout << "! An ache is discomfort that continues for some time. \n"
                            "! It is usually associated with a specific part of the body, such as a headache, a stomachache, a toothache, an earache. ... \n"
                            "! Pain is usually stronger, more sudden, and more difficult to ignore. \n"
                            "! You would feel pain when you cut yourself or hit your head on something\n";
                    goto SecondUP6;
                }
                else
                {
                    cout << "::: Enter valid info ::: " << endl;
                    goto SecondUP6;
                }
            }
            if (Symptoms[i] == 7)
            {
            SecondUP7:
                cout << "How high is your Sneezing level? \n20%\n50%\n80%\n=> ";
                cin >> Second;
                if (Second >= 0 && Second <= 20)
                {
                    coronaVirus = coronaVirus + 0;
                }
                else if (Second >= 20 && Second <= 50)
                {
                    Flu = Flu + 0;
                }
                else if (Second > 50 && Second <= 100)
                {
                    Cold = Cold + 1;
                }
                else
                {
                    cout << "::: Enter valid info ::: " << endl;
                    goto SecondUP7;
                }
            }
            if (Symptoms[i] == 8)
            {
            SecondUP8:
                cout << "\nHow high is your Sore throat level? \n20%\n50%\n80%\nInfo 111\n=> ";
                cin >> Second;
                if (Second >= 0 && Second <= 20)
                {
                    coronaVirus = coronaVirus + 1;
                }
                else if (Second >= 20 && Second <= 50)
                {
                    Cold = Cold + 1;
                }
                else if (Second > 50 && Second <= 100)
                {
                    Flu = Flu + 1;
                }
                else if (Second == 111)
                {
                    cout << "\n! A sore throat is a painful, dry, or scratchy feeling in the throat." << endl;
                    goto SecondUP8;
                }
                else
                {
                    cout << "::: Enter valid info ::: " << endl;
                    goto SecondUP8;
                }
            }
            if (Symptoms[i] == 9)
            {
            SecondUP9:
                cout << "\nHow high is your Runny/stuffy nose level? \n20%\n50%\n80%\n=> ";
                cin >> Second;
                if (Second >= 0 && Second <= 20)
                {
                    coronaVirus = coronaVirus + 1;
                }
                else if (Second >= 20 && Second <= 50)
                {
                    Flu = Flu + 1;
                }
                else if (Second > 50 && Second <= 100)
                {
                    Cold = Cold + 1;
                }
                else
                {
                    cout << "::: Enter valid info ::: " << endl;
                    goto SecondUP9;
                }
            }
            if (Symptoms[i] == 10)
            {
                int SecondAge;
            SecondUP10:
                cout << "Confirm your age : ";
                cin >> SecondAge;
                cout << "How high is your Diarrhoea level? \n20%\n50%\n80%\nInfo 111\n=> ";
                cin >> Second;
                if (SecondAge < 20 && Second >= 0 && Second <= 20)
                {
                    Cold = Cold + 0;
                }
                else if (Second >= 20 && Second <= 50)
                {
                    coronaVirus = coronaVirus + 1;
                    Flu = Flu + 1;
                }
                else if (SecondAge < 20 && Second > 50 && Second <= 100)
                {
                    coronaVirus = coronaVirus + 1;
                    Flu = Flu + 1;
                }
                else if (Second == 111)
                {

                    cout << "\n! Diarrhea is frequent, loose, and watery bowel movements.\nBowel movements, also called stools, are body wastes passed through the rectum and anus.\n";
                    goto SecondUP10;
                }
                else
                {
                    cout << "::: Enter valid info ::: " << endl;
                    goto SecondUP10;
                }
            }
            if (Symptoms[i] == 11)
            {
            SecondUP11:
                cout << "\nHow high is your Shortness of breath level? \n20%\n50%\n80%\n=> ";
                cin >> Second;
                if (Second >= 0 && Second <= 20)
                {
                    Flu = Flu + 0;
                }
                else if (Second >= 20 && Second <= 50)
                {
                    Cold = Cold + 0;
                }
                else if (Second > 50 && Second <= 100)
                {
                    coronaVirus = coronaVirus + 2;
                }
                else
                {
                    cout << "::: Enter valid info ::: " << endl;
                    goto SecondUP11;
                }
            }
        }

        if (Symptoms[i] == 000) //breaking the system
        {
            noMore = true;
            break;
        }
        if (Symptoms[i] == 000) //for again
        {
            for (int j = i + 1; j < size; j++) //for refiling extra input
            {
                Symptoms[j] = 0;
            }
        }
        // if (noMore == true)
        // {
        //     break;
        // }
    }

    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " - > " << Symptoms[i] << endl;
    }

    for (int i = 0; i < size; i++)
    {
        if (Symptoms[i] == 1)
        {
            cout << "In " << i + 1 << endl;
            // if (Fever > 1)
            // {
            //     counti;
            // }
            // else
            // {
            Fever++;
            // }
        }
        else if (Symptoms[i] == 2)
        {
            cout << "In " << i + 1 << endl;

            // if (Cough > 1)
            // {
            //     break;
            // }
            // else
            // {
            Cough++;
            // }
        }
        else if (Symptoms[i] == 3)
        {
            cout << "In " << i + 1 << endl;

            // if (LossOfTasteAndSmell > 1)
            // {
            //     break;
            // }
            // else
            // {
            LossOfTasteAndSmell++;
            // }
        }
        else if (Symptoms[i] == 4)
        {
            cout << "In " << i + 1 << endl;

            // if (Fatigue > 1)
            // {
            //     break;
            // }
            // else
            // {
            Fatigue++;
            // }
        }
        else if (Symptoms[i] == 5)
        {
            cout << "In " << i + 1 << endl;

            // if (Headaches > 1)
            // {
            //     break;
            // }
            // else
            // {
            Headaches++;
            // }
        }
        else if (Symptoms[i] == 6)
        {
            cout << "In " << i + 1 << endl;

            // if (AchesAndPains > 1)
            // {
            //     break;
            // }
            // else
            // {
            AchesAndPains++;
            // }
        }
        else if (Symptoms[i] == 7)
        {
            cout << "In " << i + 1 << endl;

            // if (Sneezing > 1)
            // {
            //     break;
            // }
            // else
            // {
            Sneezing++;
            // }
        }
        else if (Symptoms[i] == 8)
        {
            cout << "In " << i + 1 << endl;

            // if (SoreThroat > 1)
            // {
            //     break;
            // }
            // else
            // {
            SoreThroat++;
            // }
        }
        else if (Symptoms[i] == 9)
        {
            cout << "In " << i + 1 << endl;

            // if (RunnyNose > 1)
            // {
            //     break;
            // }
            // else
            // {
            RunnyNose++;
            // }
        }
        else if (Symptoms[i] == 10)
        {
            cout << "In " << i + 1 << endl;

            // if (Diarrhoea > 1)
            // {
            //     break;
            // }
            // else
            // {
            Diarrhoea++;
            // }
        }
        else if (Symptoms[i] == 11)
        {
            ShortnessOfBreath++;
        }
        else
        {
            cout << "Out " << endl;
        }
    }

    // cout << "1 -> " << Fever << endl;
    // cout << "2 -> " << Cough << endl;
    // cout << "3 -> " << LossOfTasteAndSmell << endl;
    // cout << "4 -> " << Fatigue << endl;
    // cout << "5 -> " << Headaches << endl;
    // cout << "6 -> " << AchesAndPains << endl;
    // cout << "7 -> " << Sneezing << endl;
    // cout << "8 -> " << SoreThroat << endl;
    // cout << "9 -> " << RunnyNose << endl;
    // cout << "10 -> " << Diarrhoea << endl;
    // cout << "11 -> " << ShortnessOfBreath << endl;

    if (coronaVirus >= Flu && coronaVirus >= Cold)
    {
        cout << "\no=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=\n";
        cout << "\n!!!!! Your symptoms are very serious, and you may be infected with COVID-19. !!!!!" << coronaVirus << endl;
        cout << "! Stay home and away from others for 14 days.";
        cout << "\n! Keep at least a 1-metre distance from others, even from your family members.";
        cout << "\n! Wear a medical mask to protect others, including if/when you need to seek medical care.";
        cout << "\n! Stay positive by keeping in touch with loved ones by phone or online, and by exercising at home.\n";
        cout << "\no=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=\n";
        finished = true;
        END_COVID();
    }

    if (Flu >= coronaVirus && Flu >= Cold)
    {
        cout << "\no=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=\n";
        cout << "\n!!!!! You may be infected with Flu !!!!!!" << Flu << endl;
        cout << "! Usually, you'll need nothing more than rest and plenty of fluids to treat the flu.\n"
                "! But if you have a severe infection or are at higher risk for complications,\n"
                "! your doctor may prescribe an antiviral drug to treat the flu.\n";
        cout << "\no=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=\n";
        finished = true;
        END_COVID();
    }

    if (Cold >= coronaVirus && Cold >= Flu)
    {
        cout << "\no=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=\n";
        cout << "\nYou may be infected with Cold " << Cold << endl;
        cout << "! These remedies might help you feel better ";
        cout << "\n! Stay hydrated. Water, juice, clear broth or warm lemon water with honey helps loosen congestion and prevents dehydration."
                "\n! Avoid alcohol, coffee and caffeinated sodas, which can make dehydration worse.";
        cout << "\n! Rest. Your body needs rest to heal.";
        cout << "\n! Try honey. Honey may help coughs in adults and children who are older than age 1. Try it in hot tea.\n";
        cout << "\no=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=o=\n";
        finished = true;
        END_COVID();
    }

    // cout << "CORONA VIRUS -> " << coronaVirus << endl;
    // cout << "FLU -> " << Flu << endl;
    // cout << "COLD -> " << Cold << endl;
}
bool END_COVID()
{
    if (finished == true)
    {
        return true;
    }
    else
        return false;
}