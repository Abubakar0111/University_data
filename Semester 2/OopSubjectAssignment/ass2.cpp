#include <iostream>
using namespace std;
class publication // base class
{
    string title;
    float price;

public:
    void getData()
    {
        cout << "Enter Title of string : ";
        cin >> title;
        cout << "Enter Price of int : ";
        cin >> price;
    }
    void putdata()
    {
        cout << "Title of string : " << title << " <<<< " << endl;
        cout << "Price of int : " << price << " <<<< " << endl;
    }
};

class Book : public publication // drived 1
{
    int pageCount;

public:
    void getData()
    {
        publication::getData();
        cout << "Enter Book page count : ";
        cin >> pageCount;
    }
    void putdata()
    {
        publication::putdata();
        cout << "Page count of Book : " << pageCount << " <<<<< " << endl;
    }
};

class Cd : public publication // drived 2
{
    float playingTime;

public:
    void getdata()
    {
        publication::getData();
        cout << "Enter playing Time of CD: ";
        cin >> playingTime;
    }
    void putdata()
    {
        publication::putdata();
        cout << "Playing Time of CD : " << playingTime << " <<<<< " << endl;
    }
};

int main()
{
    Book Book;
    Book.getData();
    Book.putdata();
    Cd cd;
    cd.getData();
    cd.putdata();
}
