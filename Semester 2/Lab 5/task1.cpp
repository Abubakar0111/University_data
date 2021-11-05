#include <iostream>

using namespace std;

class entertainment
{
private:
	string Title, Air_Date;
	string *Genre_category;
	string Type;
	string Runtime;
	string Country;
	string *Actors_names;
	string *owners_name;
	float Rating;
	int size;
	int count;

public:
	entertainment()
	{
		size = 3;
		cout << "\n::::  ::::  " << endl;

		Genre_category = new string[size];

		Actors_names = new string[size];

		owners_name = new string[size];
	}

	entertainment(entertainment &obj1)
	{
		Genre_category = new string[size];

		Genre_category = obj1.Genre_category;

		Country = obj1.Country;
		Rating = obj1.Rating;
		count = obj1.count;
	}
	void setter()
	{
		count = 0;
		Title = "Gravity";
		Air_Date = " October 26th,2014";
		Type = "Movie";
		Runtime = "2h 14m";
		Country = "USA";
		Rating = 8.2;

		Genre_category[0] = "Action";
		Genre_category[1] = "Horror";
		Genre_category[2] = "Comedy";

		owners_name[0] = "Will smith";
		owners_name[1] = "Johney";
		owners_name[2] = "crish";

		Actors_names[0] = "Robert Downey, Jr.";
		Actors_names[1] = "Will Smith";
		Actors_names[2] = "Johnny Depp";
	}
	void getter()
	{
		count++;
		if (count == 1)
		{
			cout << "Title = " << Title << endl;

			cout << "Owner name -> ";
			for (int i = 0; i < 3; i++)
			{
				cout << *(owners_name + i) << ", ";
			}

			cout << "\nAir date = " << Air_Date << endl;

			cout << "Actor -> ";

			for (int i = 0; i < 3; i++)
			{
				cout << *(Actors_names + i) << ", ";
			}
			cout << "\nType = " << Type << endl;
			cout << "RunTime = " << Runtime << endl;
		}

		if (count == 2)
		{
			// cout<<"::::"<<*Genre_category<<endl;
			cout << "Genre -> ";
			for (int i = 0; i < 3; i++)
			{
				cout << *(Genre_category + i) << ", ";
			}
			cout << "\nCountry = " << Country << endl;
			cout << "Rating = " << Rating << "/10" << endl;
		}
	}
};

int main(void)
{
	entertainment obj1;
	obj1.setter();
	obj1.getter();
	entertainment obj2(obj1);
	obj2.getter();
}