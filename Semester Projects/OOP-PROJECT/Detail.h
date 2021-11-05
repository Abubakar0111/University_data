#include <iostream>
#include <string>
using namespace std;
class Details
{
public:
    string Discription[15];
    string sideEffects[15];
    string Register;
    string choice;

public:
    Details()
    {

        //0 mefnac_Ds
        //1 arinacForte
        //2 Losazole
        //3 entamizole
        //4 spasrid
        //5 evion
        //6 vermox
        //7 clobevate
        //8 zyrtec
        //9 Cofcol
        //10 Trisil
        //11 Asmax
        //12 No_Spa
        //13 Vibramycin
        //14 Somogel
        //0 mefnac_Ds
        Discription[0] = "Before taking mefenamic acid, tell your doctor or pharmacist if you are allergic to it;\n"
                         "or to aspirin or other NSAIDs (e.g., ibuprofen, naproxen, celecoxib);\n"
                         "or if you have any other allergies. This product may contain inactive ingredients, which can cause allergic reactions or other problems.\n"
                         "Talk to your pharmacist for more details.\n";
        sideEffects[0] = "This medication may raise your blood pressure.\n"
                         "Check your blood pressure regularly and tell your doctor if the results are high.\n\n";
        //1 arinacForte
        Discription[1] = "Arinac Forte 400 mg/60 mg Tablet is a combination of two medicines used to treat common cold symptoms.\n"
                         "It provides relief from symptoms like a runny or blocked nose, watery eyes, sneezing, and fever.\n"
                         "It works by blocking the release of certain chemical messengers that cause fever, pain, and inflammation\n";
        sideEffects[1] = "The medicine may not be suitable for everybody. Before taking it, let your doctor know if you have any medical conditions or disorders.\n"
                         "Let your doctor also know all the other medicines you are taking to make sure it is safe for you.\n"
                         "Pregnant and breastfeeding mothers should consult their doctors first before using the medicine.\n\n";
        //2 Losazole
        Discription[2] = "This drug can be used for duodenal and gastric ulcer (stomach ulcers).\n";
        sideEffects[2] = "This drug may cause headache,dizziness, fatigue (tiredness), and skin irritation\n\n";
        //3 entamizole
        Discription[3] = "Entamizole Plus 500mg Tablet is an antibiotic medicine that helps your body fight infections caused by bacteria and parasites.\n"
                         "It is used to treat infections of the liver, stomach, intestines, vagina, brain, heart, lungs, and skin.\n";
        sideEffects[3] = "Before using this medicine, inform your doctor if you are allergic to any medicine or have any kidney or liver problems or any disease of the nervous system.\n"
                         "Your doctor may change the dose or prescribe a different medicine.\n"
                         "This medicine should not be taken if you are pregnant or breastfeeding unless it is absolutely necessary and prescribed by your doctor.\n"
                         "It may cause unusual results with certain medical tests. Therefore, tell any doctor who treats you that you are using this medicine.\n\n";
        //4 spasrid
        Discription[4] = "Dicyclomine+Simethicone is used in the treatment of abdominal pain.\n";
        sideEffects[4] = "Side Effects of Spasrid are Nausea, Dryness in mouth, Blurred vision,\n"
                         "Dizziness, Sleepiness, Weakness, Nervousness.\n\n";
        //5 evion
        Discription[5] = "Evion 400mg Capsule is a medicine used in the treatment of vitamin E deficiency when you do not get enough of it from your daily diet.\n"
                         "Vitamin E helps maintain healthy skin and eyes, and strengthen the body's natural defense against illness and infection (the immune system).\n";
        sideEffects[5] = "Few side effects such as headache, dizziness, blurred vision, nausea, diarrhea, flatulence, abdominal pain, rash, fatigue, and weakness.\n"
                         "These are usually mild and get resolved in sometime.\n"
                         "However, if they do not go away or bother you, consult your doctor.\n\n";
        //6 vermox
        Discription[6] = "Vermox tablet and suspension is intended for oral administration, used for the treatment of gastrointestinal worm infestations.\n";
        sideEffects[6] = "This is a medicine: no long-term use without medical advice, keep out of reach of children, \n"
                         "and read the package leaflet carefully.\n"
                         "Ask your doctor or pharmacist for advice before taking any medicine if you are pregnant.\n"
                         "If side effects occur, contact your doctor immediately.\n"
                         "Medicines cannot be taken back, except in case of defect.\n\n";
        //7 clobevate
        Discription[7] = "This medication is used to treat a variety of skin conditions (e.g., eczema, psoriasis, dermatitis, allergies, rash).\n"
                         "Clobetasol reduces the swelling, itching, and redress that can occur in these types of conditions.\n"
                         "This medication is a very strong (super-high-potency) corticosteroid.\n";
        sideEffects[7] = "Burning, stinging, itching, dryness, or redness at the application site may occur when first applied to the skin.\n"
                         "This should disappear in a few days as your body adjusts to the medication.\n"
                         "If any of these effects persist or worsen, notify your doctor or pharmacist promptly.\n\n";
        //8 zyrtec
        Discription[8] = "If you are taking the over-the-counter product to self-treat, read all directions on the product package before taking this medication.\n"
                         "If you have any questions, consult your pharmacist.\n"
                         "If your doctor has prescribed this medication, take it as directed, usually once daily.\n";
        sideEffects[8] = "Drowsiness, tiredness, and dry mouth may occur.\n"
                         "Stomach pain may also occur, especially in children.\n"
                         "If any of these effects persist or worsen, tell your doctor or pharmacist promptly.\n\n";
        //9 Cofcol
        Discription[9] = "Cofcol Tablet is used for Headache, Toothache, Ear pain, Joint pain, Periods pain, Fever, Cold, Flu, Appetite suppressor, Congestion and other conditions.\n"
                         "Cofcol Tabletmay also be used for purposes not listed in this medication guide.\n";
        sideEffects[9] = "Drowsiness, Dizziness, Constipation, Stomach upset, Blurred vision, or Dry mouth/Nose/Throat may occur.\n\n";

        //10 Trisil
        Discription[10] = "This medication is used to treat the symptoms of too much stomach acid such as stomach upset, heartburn, and acid indigestion.\n"
                          "Aluminum and magnesium antacids work quickly to lower the acid in the stomach.\n"
                          "Liquid antacids usually work faster/better than tablets or capsules.\n";
        sideEffects[10] = "This medication can cause nausea, constipation, diarrhea, or headache. If these symptoms persist or become severe, notify your doctor.\n\n";
        //11 Asmax
        Discription[11] = "Asmax Tablet is used to prevent asthma and exercise-induced narrowing of the muscles in the lungs.\n"
                          "It is a prescription medicine.\n"
                          "This medicine works by blocking the action of certain chemicals in the lungs.\n"
                          "Asmax is also used to relieve seasonal allergies such as irritation in the eyes, a runny nose and a sore throat.\n";
        sideEffects[11] = "The following side-effects may commonly occur in children when using Asmax Tablet.\n"
                          "Discuss with your doctor if any of these side-effects last for a long time or are severe:\n"
                          " chickenpox, cough, eye problem, fever, headache, inflamed nasal passages, lung infection etc\n\n";
        //12 No_Spa
        Discription[12] = "It is an effective medicine to treat spasm or twitches of the smooth muscles in the stomach and heart.\n"
                          "It is used to relieve pain caused due to irritable bowel syndrome, headache, menstrual periods,\n"
                          "and is also used to relieve cervical spasm during labor.\n";
        sideEffects[12] = "Use of this medicine can cause a fall in blood pressure levels\n"
                          "and hence should be used with caution in patients having a disease of the heart and blood vessels.\n\n";
        //13 Vibramycin
        Discription[13] = "Vibramycin is used to treat many different bacterial infections, such as acne, urinary tract infections, \n"
                          "intestinal infections, eye infections, gonorrhea, chlamydia, periodontitis (gum disease), and others.\n";
        sideEffects[13] = "Taking this medicine during pregnancy may affect tooth and bone development in the unborn baby\n\n";
        //14 Somogel
        Discription[14] = "Somogel gives fast relief from pain and soreness caused by mouth ulcers\n"
                          "and other related ailments of the buccal cavity including gingivitis and glossitis.\n"
                          " It is also useful in the treatment of teething problems in babies.\n";
        sideEffects[14] = "Side effects of Somogel are: Dry mouth, Nausea, Diarrhea. Sore mouth.\n\n";
    }
    string fCoice()
    {
        return choice;
    }
    string *GetDiscription()
    {
        return Discription;
    }
    string *getSideEffect()
    {
        return sideEffects;
    }
};
void MedNames()
{
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
}
// int main()
// {
//     Details graphics;
//     string choice = graphics.fCoice();

//     // cout << choice;
//     for (int i = 0; i < 15; i++)
//     {
//         cout << i + 1 << "<>\n"
//              << graphics.Discription[i];
//         cout << graphics.sideEffects[i];
//     }

//     string discription[15];
//     discription[0] =

//         discription[2] = "  .######## #######..######..###..######.#######.#######.########.\n"
//                          "  .##     # ##      ##    ##  ## ##....#....##...##......##.....##\n"
//                          "  .##     # ##      ##        ## ##.........##...##......##.....##\n"
//                          "  .######## ######  ##   ###  ##  ######....##...######..########.\n"
//                          "  .##   ##  ##      ##    ##  ##.......#....##...##......##...##..\n"
//                          "  .##    ## ##      ##    ##  ## ##    #    ##   ##      ##    ##.\n"
//                          "  .##     # #######  ######  ###  ######    ##   ####### ##     ##\n";

//     discription[3] = "/|\n"
//                      " |\n"
//                      "_\n"
//                      " )\n"
//                      "/_\n"
//                      "_\n"
//                      "_)\n"
//                      "_)\n";

//     // cout << discription[0] << endl;
//     // cout << discription[4] << endl;
// }