#include<iostream>
#include<string>
using namespace std;

class Passport
{
private:

	string Full_name;
	string Passport_number;
	string Nationality;
	string gender;
	string Date_of_Birth;
	string Country_Of_Issuance;
	string  Date_of_Issuance;
	string  Date_of_Expiry;
	string Citizenship_number;
	string passport_type;
public:
	Passport()
	{
		Citizenship_number = "***";
	}
	Passport(string fn, string sn)
	{
		Full_name = fn + sn;

	}
	Passport(string g, string N, string P)
	{
		gender = g;
		Nationality = N;
		Passport_number = P;
	}


	void setNationality()
	{
		cout << "please enter Nationality " << endl;
		cin >> Nationality;
	}

	void setFull_name()
	{
		cout << "please enter Full name " << endl;
		cin >> Full_name;
	}

	void setPassport_number()
	{
		cout << "plEASE enter Passport number" << endl;
		cin >> Passport_number;
	}

	void setgender()
	{
		cout << "please enter gender" << endl;
		cin >> gender;
	}

	void setDate_of_Birth()
	{
		cout << "please enter your date of birth" << endl;
		cin >> Date_of_Birth;
	}

	void setCountry_Of_Issuance()
	{
		cout << "please enter country of issuance" << endl;
		cin >> Date_of_Issuance;
	}

	void setDate_of_Issuance()
	{
		cout << "please enter Date of issuance" << endl;
		cin >> Date_of_Issuance;
	}
	void setDate_of_Expiry()
	{
		cout << "please enter date of expiry" << endl;
		cin >> Date_of_Expiry;
	}
	void setCitizenship_number()
	{
		cout << "please enter Citizenship number" << endl;
		cin >> Citizenship_number;
	}
	void setpassport_type()
	{
		cout << "please enter passport type" << endl;
		cin >> passport_type;
	}
	void displayall() {
		cout << "the entered data is  =:" << endl << endl;
		cout << "full name =:" << Full_name << endl;
		cout << "Passport number=: " << Passport_number << endl;
		cout << "gender=: " << gender << endl;
		cout << "Nationality =:" << Nationality << endl;
		cout << "date of birth=: " << Date_of_Birth << endl;
		cout << "Country of issuance=: " << Country_Of_Issuance << endl;
		cout << "date of issuance =: " << Date_of_Issuance << endl;
		cout << "date of expiry =: " << Date_of_Expiry << endl;
		cout << "date of issuance =: " << Citizenship_number << endl;
		cout << "passport type=: " << passport_type << endl;
	}

};
int main() {
	Passport p1;
	p1.setFull_name();
	p1.setPassport_number();
	p1.setNationality();
	p1.setgender();
	p1.setDate_of_Birth();
	p1.setCountry_Of_Issuance();
	p1.setDate_of_Issuance();
	p1.setDate_of_Expiry();
	p1.setCitizenship_number();
	p1.setpassport_type();
	Passport p2( "aqib","Riaz" );
	p2.setPassport_number();
	p2.setNationality();
	p2.setgender();
	p2.setDate_of_Birth();
	p2.setCountry_Of_Issuance();
	p2.setDate_of_Issuance();
	p2.setDate_of_Expiry();
	p2.setCitizenship_number();
	p2.setpassport_type();
	Passport p3( "Male","Pakistani","629032" );
	p3.setFull_name();
	p3.setDate_of_Birth();
	p3.setCountry_Of_Issuance();
	p3.setDate_of_Issuance();
	p3.setDate_of_Expiry();
	p3.setCitizenship_number();
	p3.setpassport_type();
	cout << "now displaying object 1" << endl;
	p1.displayall();
	cout << "now displaying object 2" << endl;
	p2.displayall();
	cout << "now displaying object 3" << endl;
	p3.displayall();
	return 0;
}