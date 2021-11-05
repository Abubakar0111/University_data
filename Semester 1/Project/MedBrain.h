#include <iostream>
#include "Detail.h"

using namespace std;

void MedBrain()
{
    int MaxSymptoms[15] = {};
    int max = 0;
    int index = 0;
    string names[15]; //for medecine name
    // int med[15]; //For medecine price
    // char order;                                  //Order Y/N
    // double wantBlister = 0, wantTube = 0;        //How MANY
    // double dChargesM = 3, dChargesT = 15;        //Delivery Charges per blister & tube
    // double tDeliveryChargesT, tDeliveryChargesM; //Total Delivery charges

    // ========================= MED & PRICES
    // int mefnac_Ds = 30;
    // int arinacForte = 60;
    // int Losazole = 160;
    // int entamizole = 34;
    // int spasrid = 70;
    // int evion = 65;
    // int vermox = 30;
    // int clobevate = 82;
    // int zyrtec = 95;
    // int Cofcol = 35;
    // int Trisil = 20;
    // int Asmax = 355;
    // int No_Spa = 100;
    // int Vibramycin = 50;
    // int Somogel = 65;
    Details detail;
    string *Discreption = detail.GetDiscription(); //getting description of array from Detail class
    string *SideEffects = detail.getSideEffect();  //getting SideEffects of array from Detail class
Up:
    cout << "\n                          +--------------------------------+" << endl;
    cout << "! Please read carefully =>  | Pick up just 5 symptoms        |" << endl;
    cout << "                            +--------------------------------+" << endl;
    cout << endl;

    int same = 0, gSymptoms = 0, inPut = 0; //for same, have no more symptoms, greater then 66
    bool noMore = false;
    int arr[5]; //For Sumptoms
    cout << "Please Enter Your Symptoms " << endl;

    for (int i = 0; i < 5; i++) //input symptoms
    {

        do
        { //again runing

            if (same > 0) //For again runing
            {
                cout << "      ! Please choose another symptoms. " << endl;
                same = 0;
            }

            if (gSymptoms > 0) //For again runing
            {
                cout << "      ! Please Enter valid symptoms number  " << endl;
                gSymptoms = 0;
            }

            cout << "Symptoms #" << i + 1 << " : "; //inputing
            cin >> arr[i];

            inPut++; //for nxt use

            if (arr[i] == 000) //breaking the system
            {
                noMore = true;
                break;
            }

            if (arr[i] > 66) //greater then 66
            {
                gSymptoms++;
            }
            for (int j = 0; j < i; j++) //Don't use agian same symptoms
            {
                if (i >= 1)
                {
                    if (arr[i] == arr[j])
                    {
                        same++;
                    }
                }
            }
        } while (same > 0 || gSymptoms > 0);

        if (arr[i] == 000) //for again
        {
            for (int j = i + 1; j < 5; j++) //for refiling extra input
            {
                arr[j] = 0;
            }
        }

        if (noMore == true)
        {
            break;
        }
    }

    cout << endl;
    for (int i = 0; i < 5; i++) //Checking Symptoms
    {
        if (arr[i] == 1 || arr[i] == 3 || arr[i] == 5 || arr[i] == 22) //Checking Symptoms
        {
            *(MaxSymptoms + 0) += 1; //count availability
            names[0] = " Mefnac D.S tablet ";
            // med[0] = mefnac_Ds; //for price
        }

        if (arr[i] == 1 || arr[i] == 7 || arr[i] == 15 || arr[i] == 16 || arr[i] == 19 || arr[i] == 20 || arr[i] == 23) //Checking Symptoms
        {
            *(MaxSymptoms + 1) += 1; //count availability
            // med[1] = arinacForte;    //for price
            names[1] = " Arinac Forte tablet ";
        }

        if (arr[i] == 2 || arr[i] == 6 || arr[i] == 12) //Checking Symptoms
        {
            *(MaxSymptoms + 2) += 1; //count availability
            // med[2] = Losazole;       //for price
            names[2] = " Losazole capsule";
        }

        if (arr[i] == 4 || arr[i] == 8 || arr[i] == 24 || arr[i] == 25) //Checking Symptoms
        {
            *(MaxSymptoms + 3) += 1; //count availability
            // med[3] = entamizole;     //for price
            names[3] = " Entamizole D.S tablet";
        }

        if (arr[i] == 21 || arr[i] == 26 || arr[i] == 27 || arr[i] == 66) //Checking Symptoms
        {
            *(MaxSymptoms + 4) += 1; //count availability
            // med[4] = spasrid;        //for price
            names[4] = " Spasrid tablet";
        }

        if (arr[i] == 11 || arr[i] == 13 || arr[i] == 28 || arr[i] == 29 || arr[i] == 30 || arr[i] == 31 || arr[i] == 33) //Checking Symptoms
        {
            *(MaxSymptoms + 5) += 1; //count availability
            // med[5] = evion;          //for price
            names[5] = " Evion capsule";
        }

        if (arr[i] == 2 || arr[i] == 17 || arr[i] == 32 || arr[i] == 22) //Checking Symptoms
        {
            *(MaxSymptoms + 6) += 1; //count availability
            // med[6] = vermox;         //for price
            names[6] = " Vermox tablet ";
        }

        if (arr[i] == 33 || arr[i] == 34 || arr[i] == 35 || arr[i] == 36 || arr[i] == 37 || arr[i] == 38 || arr[i] == 39) //Checking Symptoms
        {
            *(MaxSymptoms + 7) += 1; //count availability
            // med[7] = clobevate;      //for price
            names[7] = " Clobevate Cream ";
        }

        if (arr[i] == 15 || arr[i] == 40) //Checking Symptoms
        {
            *(MaxSymptoms + 8) += 1; //count availability
            // med[8] = zyrtec;         //for price
            names[8] = " Zyrtec tablet";
        }

        if (arr[i] == 15 || arr[i] == 18 || arr[i] == 19 || arr[i] == 23 || arr[i] == 41 || arr[i] == 42 || arr[i] == 43 || arr[i] == 44 || arr[i] == 45) //Checking Symptoms
        {
            *(MaxSymptoms + 9) += 1; //count availability
            // med[9] = Cofcol;         //for price
            names[9] = " Cofcol tablet";
        }

        if (arr[i] == 2 || arr[i] == 4 || arr[i] == 12 || arr[i] == 21 || arr[i] == 46 || arr[i] == 47 || arr[i] == 48 || arr[i] == 49) //Checking Symptoms
        {
            *(MaxSymptoms + 10) += 1; //count availability
            // med[10] = Trisil;         //for price
            names[10] = " Trisil tablet ";
        }

        if (arr[i] == 1 || arr[i] == 10 || arr[i] == 20 || arr[i] == 50 || arr[i] == 51 || arr[i] == 52 || arr[i] == 53 || arr[i] == 54) //Checking Symptoms
        {
            *(MaxSymptoms + 11) += 1; //count availability
            // med[11] = Asmax;          //for price
            names[11] = " Asmax tablet";
        }

        if (arr[i] == 6 || arr[i] == 16 || arr[i] == 21 || arr[i] == 29 || arr[i] == 38 || arr[i] == 43 || arr[i] == 55 || arr[i] == 56 || arr[i] == 57 || arr[i] == 58 || arr[i] == 59) //Checking Symptoms
        {
            *(MaxSymptoms + 12) += 1; //count availability
            // med[12] = No_Spa;         //for price
            names[12] = " No_Spa tablet";
        }

        if (arr[i] == 39 || arr[i] == 51 || arr[i] == 60 || arr[i] == 61 || arr[i] == 62) //Checking Symptoms
        {
            *(MaxSymptoms + 13) += 1; //count availability
            // med[13] = Vibramycin;     //for price
            names[13] = " Vibramycin tablet";
        }

        if (arr[i] == 63 || arr[i] == 64 || arr[i] == 65) //Checking Symptoms
        {
            *(MaxSymptoms + 14) += 1; //count availability
            // med[14] = Somogel;        //for price
            names[14] = " Somogel Gel";
        }
        if (arr[i] == 000)
        {
            cout << "You Select only " << inPut - 1 << " Symptoms : " << endl;
            break;
        }
    }
    for (int i = 0; i < 15; i++)
    {
        if (MaxSymptoms[i] > max) //Finding max symptoms
        {
            max = MaxSymptoms[i];
            index = i;
        }
    }
    cout << "                     +---------------------------------------------+" << endl;
    cout << "Most recommended =>  | My software found " << *(names + index) << "     |" << endl;
    cout << "                     +---------------------------------------------+" << endl;
    cout << "\n\t\t\t- Discreption - \n"
         << *(Discreption + index) << endl; // from detail class
    cout << "\n\t\t\t- Side Effect - \n"
         << *(SideEffects + index) << endl; // from detail class

    // goto Up;
}
