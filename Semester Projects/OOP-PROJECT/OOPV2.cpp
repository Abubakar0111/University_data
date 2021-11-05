#include <iostream>
#include "Registration.h"
#include "MedicineData.h"
#include "Graphics.h"
#include "MedBrain.h"
#include "Covid-19.h"
// #include "chatbotv2.h"

// #include <stdlib.h> //for using the function sleep
// #include <time.h>
// #include <stdio.h>
#include <unistd.h>

using namespace std;
int main()
{
    //////////////////////////////////////////////
    cout << endl;
    Graphics Design;
    IntialGraphics initialGraphics;
    initialGraphics.chatBotGraphics();
    // exit(0);
    MedicineData medicineData;
    bool userRegister = false;
    if (Registration_main())
    {
        userRegister = true;
    }

    if (userRegister)
    {
    option:
        string option = Design.Option();
        int choose;
        cout << option << endl;
        cin >> choose;

        if (choose == 1)
        {
            cout << "\t\t:::: Welcome to Chat Bot system :::: \n\n ";
            // ChatBotMain();
            goto option;
        }
        else if (choose == 2)
        {
            initialGraphics.welcome1();
            sleep(2); //make the programme waiting for 1 second
            initialGraphics.welcome2();
            cout << endl;
            medicineData.Name();
            MedBrain();
            goto option;
        }
        else if (choose == 3)
        {
            cout << "\t\t::: Welcome to Covid-19 Checker ::::\n\n ";
            Covid();
            if (END_COVID() == true)
            {
                goto option;
            }
        }
        else
        {
            cout << "::: Faild ::: " << endl;
            goto option;
        }
    }
}
