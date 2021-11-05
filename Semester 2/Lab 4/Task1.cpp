#include <iostream>

using namespace std;

class Passport
{
      string p;
      string Country;
      string SureName;
      string givenName;
      string fullName;
      char Sex;
      string IssuanceDate;
      char PersonalNumber;
      char Passport_number;

public:
      Passport()
      {
            PersonalNumber = ' ';
      }
      Passport(string &SureName, string &givenName)
      {
            fullName = SureName + SureName;
      }
      Passport(char s, string c, char P)
      {
            Sex = s;
            Country = c;
            Passport_number = P;
      }
      string PassportNumberFun()
      {
            p = "P";
            return p;
      }
      string CountryFun()
      {
            Country = "PAK";
            return Country;
      }
      string SureNameFun()
      {
            SureName = "ANWAR";
            return SureName;
      }
      string GivenNameFun()
      {
            givenName = "SHAHAB";
            return givenName;
      }
      char SexFun()
      {
            Sex = 'F';
            return Sex;
      }
      string IssuanceDateFun()
      {
            IssuanceDate = "12-12-12";
            return IssuanceDate;
      }

      ~Passport()
      {

            char code[] = {'L', 'Z', '1', '2', '3', '5', '9', '6', '7'};
            char Passport_number[9];
            char Date_of_birth[6] = {'0', '1', '0', '2', '2', '2'};
            char ExpPass[6] = {'2', '5', '0', '2', '2', '0'};
            char PersonalNumber[14] = {'0', '0', '9', '2', '3', '3', '4', '4', '7', '0', '8', '5', '3', '1'};

            for (int i = 0; i < 9; i++)
            {
                  Passport_number[i] = code[i];
            }

            char Alpa = 'A';
            char numaric = '1';
            int round = 1;
            int nextLine = 0;

            for (int i = 0; i < 26; i++)
            {

                  nextLine = i + 1;

                  if (nextLine % 9 == 0)
                  {
                        round++;
                  }

                  for (int j = 0; j < 9; j++)
                  {
                        if (code[j] == Alpa)
                        {
                              code[j] = numaric;
                        }
                  }
                  numaric++;
                  Alpa++;

                  if (nextLine % 9 == 0)
                  {
                        numaric = '1';
                  }
            }

            int sum1 = code[1] + code[3] + code[5] + code[7];
            int sum2 = 3 * (code[0] + code[2] + code[4] + code[6] + code[8]);

            int check_digit = sum1 + sum2;
            check_digit = 10 - (check_digit % 10);
            if (check_digit == 10)
            {
                  check_digit = 0;
            }
            // cout << "\n   Check Digit of Passport : " << check_digit << endl;

            int sum1D = Date_of_birth[1] + Date_of_birth[3] + Date_of_birth[5];
            int sum2D = 3 * (Date_of_birth[0] + Date_of_birth[2] + Date_of_birth[4]);
            int check_digitD = sum1D + sum2D;
            check_digitD = 10 - (check_digitD % 10);
            if (check_digitD == 10)
            {
                  check_digitD = 0;
            }
            cout << "Passport Expiry = ";
            for (int i = 0; i < 6; i++)
            {
                  cout << ExpPass[i];
            }
            cout << endl;
            cout << "Country of Issuance = " << Country << endl;
            cout << "Citizenship Number = ";
            for (int i = 0; i < 14; i++)
            {
                  cout << PersonalNumber[i];
            }
            cout << endl;
            cout << "DOB = ";
            for (int i = 0; i < 6; i++)
            {
                  cout << Date_of_birth[i];
            }
            cout << endl;
            cout << "Passport Number = ";
            for (int i = 0; i < 9; i++)
            {
                  cout << Passport_number[i];
            }
            cout << endl;
            cout << "Father Name = " << GivenNameFun() << endl
                 << endl;
            cout << "::::: M A C H I N E  R E A D A B L E - C O D E ::::::" << endl;
            cout << PassportNumberFun() << "<" << CountryFun() << SureNameFun() << "<<" << GivenNameFun() << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
            // cout << "   Check Digit of Birthday : " << check_digitD << endl;

            for (int i = 0; i < 9; i++) ////////
            {
                  cout << Passport_number[i];
            }

            int sum1p = ExpPass[1] + ExpPass[3] + ExpPass[5];
            int sum2p = 3 * (ExpPass[0] + ExpPass[2] + ExpPass[4]);
            int check_digitp = sum1p + sum2p;
            check_digitp = 10 - (check_digitp % 10);
            if (check_digitp == 10)
            {
                  check_digitp = 0;
            }

            int sum1N = PersonalNumber[1] + PersonalNumber[3] + PersonalNumber[5] + PersonalNumber[7] + PersonalNumber[9] + PersonalNumber[11] + PersonalNumber[13];
            int sum2N = 3 * (PersonalNumber[0] + PersonalNumber[2] + PersonalNumber[4] + PersonalNumber[6] + PersonalNumber[8] + PersonalNumber[10] + PersonalNumber[12]);
            int check_digitN = sum1N + sum2N;
            check_digitN = 10 - (check_digitN % 10);
            if (check_digitN == 10)
            {
                  check_digitN = 0;
            }

            int sum1ALL = PersonalNumber[1] + PersonalNumber[3] + PersonalNumber[5] + PersonalNumber[7] + PersonalNumber[9] + PersonalNumber[11] + PersonalNumber[13] + code[1] + code[3] + code[5] + code[7] + Date_of_birth[1] + Date_of_birth[3] + Date_of_birth[5] + ExpPass[1] + ExpPass[3] + ExpPass[5];
            int sum2ALL = 3 * (PersonalNumber[0] + PersonalNumber[2] + PersonalNumber[4] + PersonalNumber[6] + PersonalNumber[8] + PersonalNumber[10] + PersonalNumber[12] + code[0] + code[2] + code[4] + code[6] + code[8] + Date_of_birth[0] + Date_of_birth[2] + Date_of_birth[4] + ExpPass[0] + ExpPass[2] + ExpPass[4]);
            int check_digitALL = sum1ALL + sum2ALL;
            check_digitALL = 10 - (check_digitALL % 10);
            if (check_digitALL == 10)
            {
                  check_digitALL = 0;
            }

            cout << "[" << check_digit << "]" << Country;
            for (int i = 0; i < 6; i++)
            {
                  cout << Date_of_birth[i];
            }
            cout << "[" << check_digitD << "]" << SexFun();
            for (int i = 0; i < 6; i++)
            {
                  cout << ExpPass[i];
            }
            cout << "[" << check_digitp << "]";
            for (int i = 0; i < 14; i++)
            {
                  cout << PersonalNumber[i];
            }
            cout << "[" << check_digitN << "]"
                 << "<[0" << check_digitALL << "]\n\n";
      }
};
int main()
{
      Passport obj;
      cout << "\n\n::::: Your Data is :::: \nFull Name : " << obj.SureNameFun() << " " << obj.GivenNameFun() << endl;
      cout << "Gender : " << obj.SexFun() << endl;
      cout << "Nationality : " << obj.CountryFun() << endl;
      cout << "Issuance Date : " << obj.IssuanceDateFun() << endl;
}