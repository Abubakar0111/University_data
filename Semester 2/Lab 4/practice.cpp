#include <iostream>
#include <string>
using namespace std;
class popcorn
{
private:
	int bill = 0, flavor_number, size, if_wrap, sauce, quality_num;
	bool gift_wrap;
	string name, phone, email;

public:
	string flavor_type[11];
	string pack_size[4];
	int pack_price[4];
	string sauce_type[4];
	int souce_price[4];
	string Quality[5];
	popcorn()
	{
		flavor_type[11] = "Chocolate flavour", "English Toffee", "Salted Caramel", "Jalepeno",
		"Caramel", "Cheese", "Spiced Cheese", "Plain Salted", "Buttered", "Salt and Pepper", "Garlic";
		pack_size[4] = "small", "medium", "large", "tin";
		pack_price[4] = 100, 250, 500, 750;
		sauce_type[4] = "no sauce", "choclate souce", "caramel sauce", "melted cheese";
		souce_price[4] = 0, 50, 30, 60;
		Quality[5] = "exellent", "Good", "normal", "bad", "Poor";
	}
	void Flavor()
	{
		cout << "\tchoose your flavour \n";
		cout << "press 1 for choclate flavour\npress 2 for English toffee\npress 3 for salted caramel\n";
		cout << "press 4 for jelepeno\npress 5 for caramel\npress 6 for cheese\npress 7 for spiced cheese\m";
		cout << "press 8 forplain salted\npress 9 for buttered\npress 10 for salt and pepper\npress 11 for garlic\n";
		cin >> flavor_number;
		if (flavor_number < 1 || flavor_number > 11)
		{
			while (flavor_number < 1 || flavor_number > 11)
			{
				cout << "\a************invalid Input Re-Enter flavour number : ";
				cin >> flavor_number;
			}
		}
	}
	void Size()
	{
		cout << "\tchoose your order size\nPress 1 for small in Rs 100\n";
		cout << "Press 2 for medium in Rs 250\nPress 3 for large in Rs 500\nPress 4 for tin in Rs 750\n";
		cin >> size;
		if (size < 1 || size > 4)
		{
			while (size < 1 || size > 4)
			{
				cout << "\a************invalid Input Re-Enter Size : ";
				cin >> size;
			}
		}
	}
	void Sauce()
	{
		cout << "\tChoose sauc if u want\nPress 1 for no sauce\nPress 2 for choclate sauce in Rs 50\n";
		cout << "Press 3 for caramel sauce in Rs 30\nPress 4 for melted cheese in Rs 60\n";
		cin >> sauce;
		if (sauce < 1 || sauce > 4)
			while (sauce < 1 || sauce > 4)
			{
				cout << "\a************invalid Input Re-Enter sauce : ";
				cin >> sauce;
			}
	}
	void Wrap()
	{
		cout << "do you want gift wrapping for Rs.50(only)\npress 1 for yes and 0 for no";
		cin >> if_wrap;
		while (if_wrap < 0 || if_wrap > 1)
		{
			cout << "\a****Invalid input Re-enter \ndo you want gift wrapping for Rs.50(only)\npress 1 for yes and 0 for no ";
			cin >> if_wrap;
		}
		if (if_wrap == 1)
			gift_wrap = true;
		else if (if_wrap == 0)
			gift_wrap = false;
	}
	void quality()
	{
		cout << "\tPlease Rate over serving quality from 1 to 5\nPress 1 for Excellent";
		cout << "\nPress 2 for good\npress 3 for normal\nPress 4 for Bad\nPress 5 for Poor";
		cin >> quality_num;
		cout << "\t:) *******************THANK YOU*********************** :)\n";
	}
	void Order()
	{
		cout << "\tYour Order is : \nPopcorn Flavour : " << flavor_type[flavor_number - 1];
		cout << "\nSize of your order is : " << pack_size[size - 1] << endl;
		cout << "\nSauce on popcorn : " << sauce_type[sauce] << endl;
		cout << "\nWrapping : " << if_wrap << endl;
	}
	void Bill()
	{
		cout << "Your Total bill is : ";
		bill += pack_price[size];
		bill += souce_price[sauce];
		if (gift_wrap == true)
			bill += 50;
		cout << bill;
	}
};

int main()
{

	popcorn corn;

	corn.Flavor();
	system("cls");
	corn.Size();
	system("cls");
	corn.Sauce();
	system("Cls");
	corn.Wrap();
	system("Cls");
	corn.quality();
	corn.Order();
	corn.Bill();
};
