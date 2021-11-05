#include <iostream>
#include <string>

using namespace std;
class publication
{
private:
	string title;
	float price;

public:
	void getdata()
	{
		string t;
		float p;

		cout << "Enter title of publication: ";
		cin >> t;
		cout << "Enter price of publication: ";
		cin >> p;
		title = t;
		price = p;
	}
	void putdata()
	{
		cout << "..............displaying data..............." << endl;
		cout << "Publication title: " << title << endl;
		cout << "Publication price: " << price << "$" << endl;
	}
};
class Book : public publication
{
private:
	int pagecount;

public:
	void getdata()
	{
		publication::getdata();
		cout << "Enter Book Page Count: " << endl;
		cin >> pagecount;
	}
	void putdata()
	{
		publication::putdata();
		cout << "Book page count: " << pagecount << endl;
	}
};
class cd : public publication
{
private:
	float ptime;

public:
	void getdata()
	{
		publication::getdata();
		cout << "Enter cd's playing time: " << endl;
		cin >> ptime;
	}
	void putdata()
	{
		publication::putdata();
		cout << "cd's playing time: " << ptime << " minutes" << endl;
	}
};
int main()
{
	Book b;
	cd c;
	b.getdata();
	c.getdata();
	b.putdata();
	c.putdata();
}