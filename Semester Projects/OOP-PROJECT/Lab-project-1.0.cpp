#include <iostream>
#include <string>

using namespace std;

struct Extra //struct
{
    string nameS, yourN;           //input name & using again run
    bool foroutput, digit, gmailB; //for correcting password & Gmail
    char gmail[10], pas[10];       //For input Gmail & Password
};

bool passwordAndGmail(struct Extra pro); //Function
void pharmacy();                         //Function

int main()
{

    Extra Pro = {}; //struct

    if (passwordAndGmail(Pro) == 1) //When Your password & Gmail is Correct then Next 'FUNCTION' call
    {
        pharmacy();
    }
    else
    {
        exit(0);
    }
}

bool passwordAndGmail(Extra Pro)
{

    int invalidG = 0, sixC = 0, pDigit = 0; //For again runing
    int g = 0, x = 0;                       //finding size

    do
    { //Again Runing

        system("clear"); //Clear the back

        if (invalidG > 0 || sixC > 0 || pDigit > 0) //For Again
        {
            cout << "+-----------------------------------------------------------------------" << endl;
            cout << " _  _  _ _______        ______   _____  _______ _______ \n"
                    " |  |  | |______ |      |       |     | |  |  | |______    "
                 << Pro.nameS << " to\n"
                                 " |__|__| |______ |_____ |_____  |_____| |  |  | |______    Pharmacy. \n"
                 << endl;
            cout << "+------------------------------------------------------------------------" << endl;
        }

        if (invalidG > 0) //For Again
        {
            cout << "            +-----------------------------------+" << endl;
            cout << "            |     :::::: InVailed Gmail :::::   |" << endl;
            cout << "            +-----------------------------------+" << endl;

            Pro.gmailB = false;
        }
        if (sixC > 0) //For Again
        {
            cout << "            +-----------------------------------------------------+" << endl;
            cout << "            |   ! Password must have at least 6 charecter         |" << endl;
            cout << "            +-----------------------------------------------------+" << endl;
        }

        if (pDigit > 0) //For Again
        {

            cout << "            +-----------------------------------------------------+" << endl;
            cout << "            |   ! The password should have at least one digit     |" << endl;
            cout << "            +-----------------------------------------------------+" << endl;
        }

        if (invalidG > 0 || sixC > 0 || pDigit > 0) //For again
        {

            cout << endl;
            cout << "            +----------------------------------------------------------------+" << endl;
            cout << "            |     ::::: Please Enter Valid Gmail and Strong password :::::   |" << endl;
            cout << "            +----------------------------------------------------------------+" << endl;
        }

        cout << endl;
        if (invalidG == 0 && sixC == 0 && pDigit == 0) //for 1st time Run => when these all equal to zero
        {
            cout << "\n Enter Your Name : ";
            getline(cin, Pro.yourN); //Input Whole line of name

            Pro.nameS = Pro.yourN; //assigning for AGAIN runing
            cout << endl;
            cout << "+-----------------------------------------------------------------------" << endl;
            cout << " _  _  _ _______        ______   _____  _______ _______ \n"
                    " |  |  | |______ |      |       |     | |  |  | |______    "
                 << Pro.yourN << " to \n"
                                 " |__|__| |______ |_____ |_____  |_____| |  |  | |______    Pharmacy. \n"
                 << endl;
            cout << "+------------------------------------------------------------------------" << endl;
            cout << endl;
            cout << "            +----------------------------------------------------------------+" << endl;
            cout << "            |     !!!!! Please Enter Valid Gmail and Strong password !!!!!   |" << endl;
            cout << "            +----------------------------------------------------------------+" << endl;
            cout << endl;
        }
        // int invalidG=0,sixC=0,pDigit=0;//For again runing

        cout << "        ==::: SIGN UP NOW :::== " << endl;
        cout << endl;
        cout << "Enter Valid Gmail =====> ";
        cin >> Pro.gmail;
        cout << endl;
        cout << "Enter Strong password =====> ";
        cin >> Pro.pas;

        while (Pro.gmail[g] != '\0') // counting gmail character
        {
            g++;
        }

        while (Pro.pas[x] != '\0') // counting pass character
        {
            x++;
        }

        for (int i = 0; i < g; i++) // finding '@' in Gmail
        {
            if (isalpha(Pro.gmail[i]) || isdigit(Pro.gmail[i]))
            {
                Pro.gmailB = false;
            }
            else if (Pro.gmail[i] == '@')
            {
                Pro.gmailB = true;
                break;
            }
        }

        if (Pro.gmailB == false) // Printing Gmail chaking
        {
            invalidG++; //For again runing
            cout << "            +-----------------------------------+" << endl;
            cout << "            |     :::::: InVailed Gmail :::::   |" << endl;
            cout << "            +-----------------------------------+" << endl;
        }

        for (int i = 0; i < x; i++)
        {
            if (isdigit(Pro.pas[i]) == 1) //  finding digits
            {
                Pro.digit = true;
                break;
            }
            else
            {
                Pro.digit = false;
            }
        }
        if (Pro.digit == false) // digit result
        {
            pDigit++;
            cout << "            +-----------------------------------------------------+" << endl;
            cout << "            |   ! The password should have at least one digit     |" << endl;
            cout << "            +-----------------------------------------------------+" << endl;
        }
        if (x < 6) //Count password charector
        {
            sixC++;
            cout << "            +-----------------------------------------------------+" << endl;
            cout << "            |   ! Password must have at least 6 charecter         |" << endl;
            cout << "            +-----------------------------------------------------+" << endl;
        }

        if (Pro.digit == true && Pro.gmailB == true) //Final Massege
        {
            Pro.foroutput = true;
            cout << "               +-----------------------------------------------------+" << endl;
            cout << "               |     :::: Thanks For puting Correct Details ::::     |" << endl;
            cout << "               +-----------------------------------------------------+" << endl;
        }
        else //Again Runing
        {

            cout << "            +--------------------------------------------------------------+" << endl;
            cout << "            |     :::: Exit the Program and put valid information ::::     |" << endl;
            cout << "            +--------------------------------------------------------------+" << endl;
        }
    } while (Pro.foroutput == false); //go to Top
    return Pro.foroutput;
}

void pharmacy()
{
    int arrL[15] = {}; //Finding MAX symptoms in every MED
    int max = 0, index = 0;
    char order;                                  //Order Y/N
    string names[15];                            //for medecine name
    int med[15];                                 //For medecine price
    double wantBlister = 0, wantTube = 0;        //How MANY
    double dChargesM = 3, dChargesT = 15;        //Delivery Charges per blister & tube
    double tDeliveryChargesT, tDeliveryChargesM; //Total Delivery charges

    // ========================= MED & PRICES
    int mefnac_Ds = 30;
    int arinacForte = 60;
    int Losazole = 160;
    int entamizole = 34;
    int spasrid = 70;
    int evion = 65;
    int vermox = 30;
    int clobevate = 82;
    int zyrtec = 95;
    int Cofcol = 35;
    int Trisil = 20;
    int Asmax = 355;
    int No_Spa = 100;
    int Vibramycin = 50;
    int Somogel = 65;

    //////////////////////////////////////////////
    cout << endl;

    cout << "                             ╔═╗┬ ┬┌─┐┬─┐┌┬┐┌─┐┌─┐┬ ┬ \n"
            "                             ╠═╝├─┤├─┤├┬┘│││├─┤│  └┬┘ \n"
            "                             ╩  ┴ ┴┴ ┴┴└─┴ ┴┴ ┴└─┘ ┴  \n"
         << endl;

    cout << "                 +---------------------------------------------------+" << endl;
    cout << "                 |                                                   |" << endl;
    cout << "                 |     ::::: Welcome to small Medical store :::::    |" << endl;
    cout << "                 |                                                   |" << endl;
    cout << "                 +---------------------------------------------------+" << endl;
    cout << endl;

    // / list of Symptoms with numbring, and their MED  /////////

    int fever = 1;         //mefnac_Ds 1 & //arinacForte=2; & Asmax=12;
    int stomach_worms = 2; //Losazole=3; & vermox=7; & Trisil=11;
    int body_pain = 3;     //mefnac_Ds 1
    int disterbance = 4;   //displaysPopSalon=4; & Trisil=11;
    int head_Aches = 5;    //mefnac_Ds 1
    int stomach_pain = 6;  //Losazole=3; & //No_Spa=13;
    int swelling = 7;      //arinacForte=2;
    int motion = 8;        //entamizole=4;
    int abdominal_Distension = 9;
    int becterial_Infection = 10;             //Asmax=12;
    int long_term_blockage_in_the_liver = 11; //evion=6;
    int stomac_ulcers = 12;                   //Losazole=3; & Trisil=11;
    int cramping_in_the_leg = 13;             //evion=6;
    int cold_Fever = 14;
    int allergy = 15;                          //zyrtec=9; & //arinacForte=2; & Cofcol=10;
    int mestrual_Pian = 16;                    //arinacForte=2; & No_Spa=13;
    int infections_caused_by_thread_worm = 17; //vermox=7;
    int iron_deficient = 18;                   //Cofcol=10;
    int congestion = 19;                       //arinacForte=2; & //Cofcol=10;
    int runny_nose = 20;                       //arinacForte=2; & //Asmax=12;
    int upset_stomach = 21;                    //spasrid=5; & Trisil=11; & //No_Spa=13;
    int moderate_pain = 22;                    //mefnac_Ds=1;
    int inflammation = 23;                     //arinacForte=2; & //Cofcol=10;
    int infection_of_small_intestine = 24;     //entamizole=4;
    int amoebic_infections = 25;               //entamizole=4;
    int Anti_Spasmodic = 26;                   //spasrid=5;
    int preventing_or_arresting_spasms = 27;   //spasrid=5;
    int hair_falls_out_in_small_patches = 28;  //evion=6;
    int weakness = 29;                         //evion=6; & No_Spa=13;
    int inability_to_absorb_nutrients = 30;    //evion=6;
    int fertility_disturbances = 31;           //evion=6;
    int threadworm = 32;                       //vermox=7;
    int skin_problem = 33;                     //evion=6; & clobevate=8;
    int skin_redness_and_itchy_patches = 34;   //clobevate=8;
    int intractable_eczema = 35;               //clobevate=8;
    int inflammatory_skin = 36;                //clobevate=8;
    int treatment_of_psoriasis = 37;           //clobevate=8;
    int skin_look_scaly_or_rough = 38;         //clobevate=8; & //No_Spa=13;
    int bacterial_infection_on_skin = 39;      //clobevate=8; & Vibramycin=14;
    int urticaria_rash = 40;                   //zyrtec=9;
    int lazy_and_tired = 41;                   //Cofcol=10;
    int Being_sleepy = 42;                     //Cofcol=10;
    int weakness_and_low_energy_level = 43;    //Cofcol=10; & //No_Spa=13;
    int Poor_ability_to_concentrate = 44;      //Cofcol=10;
    int Iron_deficient = 45;                   //Cofcol=10;
    int Heartburn = 46;                        //Trisil=11;
    int Vomiting = 47;                         //Trisil=11;
    int Loss_of_appetite = 48;                 //Trisil=11;
    int acidity = 49;                          //Trisil=11;
    int asthma = 50;                           //Asmax=12;
    int anti_biotic = 51;                      //Asmax=12;  & Vibramycin=14;
    int allergic_rhinitis = 52;                //Asmax=12;
    int sneezing = 53;                         //Asmax=12;
    int Loss_of_breath = 54;                   //Asmax=12;
    int Coughing = 54;                         //Asmax=12;
    int Abdominal_pain = 55;                   //No_Spa=13;
    int decrease_in_heart_rate = 56;           //No_Spa=13;
    int dry_mouth = 57;                        //No_Spa=13;
    int decreased_lung_secretions = 58;        //No_Spa=13;
    int burning_sensation_in_stomach = 59;     //No_Spa=13;
    int trouble_breathing_swelling = 60;       //Vibramycin=14;
    int urinary_tract_infections = 61;         //Vibramycin=14;
    int respiratory = 62;                      //Vibramycin=14;
    int Local_Numbness = 63;                   //Somogel=15;
    int mouth_infection = 64;                  //Somogel=15;
    int mouth_ulcers = 65;                     //Somogel=15;
    int pain_in_musculus = 66;                 //spasrid=5;

    cout << " 1: Fever                         2: Stomach worms                        3: Body pain " << endl;
    cout << " 4: Disterbance                   5: Head Aches                           6: Stomach pain " << endl;
    cout << " 7: Swelling                      8: Motion                               9: Abdominal Distension " << endl;
    cout << " 10: Becterial Infection          11: Long term blockage in thecliver     12: Stomac ulcers " << endl;
    cout << " 13: Cramping in the leg          14: ColdFever                           15: Allergy " << endl;
    cout << " 16: Mestrual Pian                17: Infections caused by thread worm    18: Iron deficient" << endl;
    cout << " 19: Congestion                   20: Runny_nose                          21: Upset stomach" << endl;
    cout << " 22: Moderatec pain               23: Inflammation                        24: Infection of small intestine" << endl;
    cout << " 25: Amoebic infections           26: Anti Spasmodic                      27: Preventing or arresting spasms" << endl;
    cout << " 28: Hair falls in small patches  29: Weakness                            30: inability to absorb nutrients" << endl;
    cout << " 31: Fertility disturbances       32: Threadworm                          33: Skin problem" << endl;
    cout << " 34: Skin redness & itchy patches 35: Intractable eczema                  36: Inflammatory skin" << endl;
    cout << " 37: Treatment of psoriasis       38: Skin look scaly or rough            39: Bacterial infection on skin" << endl;
    cout << " 40: Brticaria rash               41: Lazy and tired                      42: Being sleepy" << endl;
    cout << " 43: Weakness & low energy level  44: Poor ability to concentrate         45: Iron deficient" << endl;
    cout << " 46: Heartburn                    47: Vomiting                            48: Loss of appetite" << endl;
    cout << " 49: Acidity                      50: Asthma                              51: Anti biotic" << endl;
    cout << " 52: Allergic rhinitis            53: sneezing                            54: Loss of breath" << endl;
    cout << " 55: Abdominal pain               56: decrease in Heart rate              57: Dry mouth" << endl;
    cout << " 58: decreased lung secretions    59: Burning sensation in stomach        60: Trouble breathing swelling" << endl;
    cout << " 61: Urinary tract infections     62: Respiratory                         63: Local_Numbness" << endl;
    cout << " 64: Mouth infection              65: Mouth ulcers                        66: Pain in musculus" << endl;
    cout << "\n                         ::::::  NO MORE SYMPTOMS => 000 :::::                       " << endl;
    cout << endl;
    cout << "                            +--------------------------------+" << endl;
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
        if (*(arr + i) == 1 || *(arr + i) == 3 || *(arr + i) == 5 || *(arr + i) == 22) //Checking Symptoms
        {
            *(arrL + 0) += 1; //count availability
            names[0] = " Mefnac D.S tablet ";
            med[0] = mefnac_Ds; //for price
        }

        if (*(arr + i) == 1 || *(arr + i) == 7 || *(arr + i) == 15 || *(arr + i) == 16 || *(arr + i) == 19 || *(arr + i) == 20 || *(arr + i) == 23) //Checking Symptoms
        {
            *(arrL + 1) += 1;     //count availability
            med[1] = arinacForte; //for price
            names[1] = " Arinac Forte tablet ";
        }

        if (*(arr + i) == 2 || *(arr + i) == 6 || *(arr + i) == 12) //Checking Symptoms
        {
            *(arrL + 2) += 1;  //count availability
            med[2] = Losazole; //for price
            names[2] = " Losazole capsule";
        }

        if (*(arr + i) == 4 || *(arr + i) == 8 || *(arr + i) == 24 || *(arr + i) == 25) //Checking Symptoms
        {
            *(arrL + 3) += 1;    //count availability
            med[3] = entamizole; //for price
            names[3] = " Entamizole D.S tablet";
        }

        if (*(arr + i) == 21 || *(arr + i) == 26 || *(arr + i) == 27 || *(arr + i) == 66) //Checking Symptoms
        {
            *(arrL + 4) += 1; //count availability
            med[4] = spasrid; //for price
            names[4] = " Spasrid tablet";
        }

        if (*(arr + i) == 11 || *(arr + i) == 13 || *(arr + i) == 28 || *(arr + i) == 29 || *(arr + i) == 30 || *(arr + i) == 31 || *(arr + i) == 33) //Checking Symptoms
        {
            *(arrL + 5) += 1; //count availability
            med[5] = evion;   //for price
            names[5] = " Evion capsule";
        }

        if (*(arr + i) == 2 || *(arr + i) == 17 || *(arr + i) == 32 || *(arr + i) == 22) //Checking Symptoms
        {
            *(arrL + 6) += 1; //count availability
            med[6] = vermox;  //for price
            names[6] = " Vermox tablet ";
        }

        if (*(arr + i) == 33 || *(arr + i) == 34 || *(arr + i) == 35 || *(arr + i) == 36 || *(arr + i) == 37 || *(arr + i) == 38 || *(arr + i) == 39) //Checking Symptoms
        {
            *(arrL + 7) += 1;   //count availability
            med[7] = clobevate; //for price
            names[7] = " Clobevate Cream ";
        }

        if (*(arr + i) == 15 || *(arr + i) == 40) //Checking Symptoms
        {
            *(arrL + 8) += 1; //count availability
            med[8] = zyrtec;  //for price
            names[8] = " Zyrtec tablet";
        }

        if (*(arr + i) == 15 || *(arr + i) == 18 || *(arr + i) == 19 || *(arr + i) == 23 || *(arr + i) == 41 || *(arr + i) == 42 || *(arr + i) == 43 || *(arr + i) == 44 || *(arr + i) == 45) //Checking Symptoms
        {
            *(arrL + 9) += 1; //count availability
            med[9] = Cofcol;  //for price
            names[9] = " Cofcol tablet";
        }

        if (*(arr + i) == 2 || *(arr + i) == 4 || *(arr + i) == 12 || *(arr + i) == 21 || *(arr + i) == 46 || *(arr + i) == 47 || *(arr + i) == 48 || *(arr + i) == 49) //Checking Symptoms
        {
            *(arrL + 10) += 1; //count availability
            med[10] = Trisil;  //for price
            names[10] = " Trisil tablet ";
        }

        if (*(arr + i) == 1 || *(arr + i) == 10 || *(arr + i) == 20 || *(arr + i) == 50 || *(arr + i) == 51 || *(arr + i) == 52 || *(arr + i) == 53 || *(arr + i) == 54) //Checking Symptoms
        {
            *(arrL + 11) += 1; //count availability
            med[11] = Asmax;   //for price
            names[11] = " Asmax tablet";
        }

        if (*(arr + i) == 6 || *(arr + i) == 16 || *(arr + i) == 21 || *(arr + i) == 29 || *(arr + i) == 38 || *(arr + i) == 43 || *(arr + i) == 55 || *(arr + i) == 56 || *(arr + i) == 57 || *(arr + i) == 58 || *(arr + i) == 59) //Checking Symptoms
        {
            *(arrL + 12) += 1; //count availability
            med[12] = No_Spa;  //for price
            names[12] = " No_Spa tablet";
        }

        if (*(arr + i) == 39 || *(arr + i) == 51 || *(arr + i) == 60 || *(arr + i) == 61 || *(arr + i) == 62) //Checking Symptoms
        {
            *(arrL + 13) += 1;    //count availability
            med[13] = Vibramycin; //for price
            names[13] = " Vibramycin tablet";
        }

        if (*(arr + i) == 63 || *(arr + i) == 64 || *(arr + i) == 65) //Checking Symptoms
        {
            *(arrL + 14) += 1; //count availability
            med[14] = Somogel; //for price
            names[14] = " Somogel Gel";
        }
        if (*(arr + i) == 000)
        {
            cout << "You selecter only " << inPut - 1 << " Symptoms : " << endl;
            break;
        }
    }

    char wCoupon;  // Y/N
    string coupon; //Enter coupon

    int couponM = 0, couponOFFM; //For Med calculating
    int couponT = 0, couponOFFT; //For Tube calculating

    bool sCoupon = false; //For next use of printing Total bill of Med with 25%OFF

    for (int i = 0; i < 15; i++)
    {
        if (arrL[i] > max) //Finding max symptoms
        {
            max = arrL[i];
            index = i;
        }
    }
    cout << "                     +---------------------------------------------+" << endl;
    cout << "Most recommended =>  | My software found " << *(names + index) << "     |" << endl;
    cout << "                     +---------------------------------------------+" << endl;
    cout << endl;

    cout << "Do you want to order this Medecine Y/N: ";
    cin >> order;
    if (order == 'y')
    {

        cout << endl;
        cout << "\t\t\t+-----------------+------------------------------------------+" << endl;
        cout << "\t\t\t| COUPON > NY2021 | use this & GET 25% OFF                   |" << endl;
        cout << "\t\t\t+-----------------+------------------------------------------+" << endl;
        cout << "\t\t\t+-----------------+------------------------------------------+" << endl;
        cout << "\t\t\t| New Year OFFER! | Order upto 5 Blister, GET 20 Masks FREE' |" << endl;
        cout << "\t\t\t+-----------------+------------------------------------------+\n"
             << endl;

        cout << "Do you want to coupon code Y/N : ";
        cin >> wCoupon;
        if (wCoupon == 'y' || wCoupon == 'Y')
        {
            cout << "Enter your coupon code : ";
            cin >> coupon;
        }
        else
        {
            cout << endl;
        }
        if (coupon == "NY2021")
        {
            sCoupon = true;
            cout << "\t\t\t+-------+-------------------------+--------+" << endl;
            cout << "\t\t\t|       +    You GOT 25% OFF      +        |" << endl;
            cout << "\t\t\t+-------+-------------------------+--------+" << endl;
            cout << endl;
        }
        else
        {

            cout << "\t\t\t+-------+-------------------------+---------+" << endl;
            cout << "\t\t\t|       +   ! You missed COUPON   +         |" << endl;
            cout << "\t\t\t+-------+-------------------------+---------+" << endl;
            cout << endl;
        }

        if (index == 14 || index == 7) //Showing Price
        {
            cout << "\t\t\t+--------------------------------------+" << endl;
            cout << "\t\t\t|    One tube price is " << med[index] << " RS           |" << endl; // Price tube
            cout << "\t\t\t+--------------------------------------+\n"
                 << endl;
        }
        else
        {
            cout << "\n\t\t\t+------------------------------------------+" << endl;
            cout << "  \t\t\t| One blister  price is " << med[index] << " RS              |" << endl; // Price others Tablet
            cout << "  \t\t\t+------------------------------------------+" << endl;
        }

        if (index == 14 || index == 7)
        {
            cout << "\n\n How many Tubes :";
            cin >> wantTube;
        }
        else
        {
            cout << "\n\n How many blister you want : ";
            cin >> wantBlister;
        }

        tDeliveryChargesM = dChargesM * wantBlister; //Calculating Total for MED
        tDeliveryChargesT = dChargesT * wantTube;    //Calculating Total for TUBE

        couponM = med[index] * wantBlister; //Coupon for med
        couponT = med[index] * wantTube;    //Coupon for tube
        couponOFFT = 75 * couponT / 100;    //coupon 25% off tube
        couponOFFM = 75 * couponM / 100;    //coupon 25% off med

        cout << "\t\t\t +--------------------------------------------------+" << endl;
        cout << "\t\t\t |                                                  |" << endl;
        cout << "\t\t\t |                ::::: Your Bill :::::             |" << endl;
        cout << "\t\t\t |                                                  |" << endl;
        cout << "\t\t\t +--------------------------------------------------+\n"
             << endl;

        if (wantBlister > 5)
        {
            cout << endl;
            cout << "\t\t\t+-------+++++++++++++++++++++++++++++++++++++++------+" << endl;
            cout << "\t\t\t|       ::::::::: You Got 20 Masks ::::::::::::      | " << endl;
            cout << "\t\t\t+-------+++++++++++++++++++++++++++++++++++++++------+\n"
                 << endl;
        }
        else
        {
            cout << endl;
        }

        if (sCoupon == true) // coupon bill
        {
            if (index == 14 || index == 7)
            {

                cout << "\t\t+---------------------------------------------------------------------+" << endl;
                cout << "\t\t| Delivery charges per tube " << dChargesT << " RS  | Total Delivery charges " << tDeliveryChargesT << " RS      |" << endl;
                cout << "\t\t|---------------------------------------------------------------------|" << endl;
                cout << "\t\t| " << wantTube << " Tube price with 25% OFF " << couponOFFT << " RS " << endl;
                cout << "\t\t|---------------------------------------------------------------------|" << endl;
                cout << "\t\t| Your Total bill 25% OFF " << couponOFFT + tDeliveryChargesT << "" << endl;
                cout << "\t\t+---------------------------------------------------------------------+" << endl;
            }
            else
            {
                cout << "\t\t+-----------------------------------------------------------------------+" << endl;
                cout << "\t\t| Delivery charges per Blister " << dChargesM << " Rs   |  Total Delivery charges " << tDeliveryChargesM << " RS   |" << endl;
                cout << "\t\t|-----------------------------------------------------------------------|" << endl;
                cout << "\t\t| " << wantBlister << " Blister price with 25% OFF " << couponOFFM << " RS" << endl;
                cout << "\t\t|-----------------------------------------------------------------------|" << endl;
                cout << "\t\t| Your Total bill 25% OFF " << couponOFFM + tDeliveryChargesM << " RS" << endl;
                cout << "\t\t+-----------------------------------------------------------------------+" << endl;
            }
        }
        else //without coupon bill
        {

            if (index == 14 || index == 7)
            {
                cout << "\t\t+---------------------------------------------------------------------+" << endl;
                cout << "\t\t| Delivery charges per tube " << dChargesT << " RS  | Total Delivery charges " << tDeliveryChargesT << " RS      |" << endl;
                cout << "\t\t|---------------------------------------------------------------------|" << endl;
                cout << "\t\t| " << wantTube << " Tube price is " << med[index] * wantTube << " RS" << endl;
                cout << "\t\t|---------------------------------------------------------------------|" << endl;
                cout << "\t\t| Your Total bill price is " << med[index] * wantTube + tDeliveryChargesT << "" << endl;
                cout << "\t\t+---------------------------------------------------------------------+" << endl;
            }
            else
            {
                cout << "\t\t+-----------------------------------------------------------------------+" << endl;
                cout << "\t\t| Delivery charges per Blister " << dChargesM << " Rs   |  Total Delivery charges " << tDeliveryChargesM << " RS   |" << endl;
                cout << "\t\t|-----------------------------------------------------------------------|" << endl;
                cout << "\t\t| " << wantBlister << " Blister price is " << med[index] * wantBlister << " RS" << endl;
                cout << "\t\t|-----------------------------------------------------------------------|" << endl;
                cout << "\t\t| Your Total bill is " << med[index] * wantBlister + tDeliveryChargesM << " RS" << endl;
                cout << "\t\t+-----------------------------------------------------------------------+" << endl;
            }
        }

        cout << endl;
        if (index == 14 || index == 7)
        {
            cout << "\t\t+-------+-----------------------------------------------------+" << endl;
            cout << "\t\t|  NOTE | The medication is used as a local anesthetic agent. |" << endl;
            cout << "\t\t+-------+-----------------------------------------------------+" << endl;
        }
        else if (index == 0 || index == 3 || index == 6 || index == 9)
        {
            cout << "\t\t+-------+--------------------------------------------+" << endl;
            cout << "\t\t| NOTE  |  This medicine should be taken with food.  | " << endl;
            cout << "\t\t+-------+--------------------------------------------+" << endl;
        }
        else
        {
            cout << "\t\t+-------+------------------------------------------------+" << endl;
            cout << "\t\t| NOTE  |  This medicine should not be taken with food.  |" << endl;
            cout << "\t\t+-------+------------------------------------------------+" << endl;
        }

        cout << "\n\t\t            ==== Thanks For using our servises ====       " << endl;
    }
    else //if  Y/N Order
    {
        cout << "\n\t\t            ==== Thanks For using our servises ====       " << endl;
    }
    cout << endl;
}
