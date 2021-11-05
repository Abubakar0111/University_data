#include <iostream>
using namespace std;

class Sale
{

    float INPUT[3];

public:
    void getData()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter month " << i + 1 << " sale : ";
            cin >> INPUT[i];
        }
    }
    void putData()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Month " << i + 1 << " sale " << INPUT[i] << endl;
        }
    }
};
class publication
{
    string title;
    float price;

public:
    virtual void getData()
    {
        cout << endl;
        cout << "Enter Title of string : ";
        cin >> title;
        cout << "Enter Price of int : ";
        cin >> price;
    }
    virtual void putdata()
    {
        cout << endl;
        cout << "Title of string : " << title << endl;
        cout << "Price of int : " << price << endl;
    }
};

class Book : public publication, public Sale
{
    int pageCount;

public:
    void getData()
    {
        cout << endl;

        publication::getData();
        cout << "Enter Book page count : ";
        cin >> pageCount;
    }
    void putdata()
    {
        cout << endl;
        publication::putdata();
        cout << "Page count of Book : " << pageCount << endl;
    }
};

class Cd : public publication, public Sale
{
    int playingTime;

public:
    void getData()
    {
        publication::getData();
        cout << "Enter playing Time of CD : ";
        cin >> playingTime;
    }
    void putdata()
    {
        publication::putdata();
        cout << "Playing Time of CD : " << playingTime << endl;
    }
};

int main()
{
    int size = 100;
    publication *ptrpub[size];
again:
    int n = 0;
    char option;
    Sale SaleObj[size];

    do
    {
        cout << "Which data you want to add Book or Cd ? b / c : ";
        cin >> option;
        if (option == 'b' || option == 'B')
        {
            ptrpub[n] = new Book;
            SaleObj[n].getData();
            ptrpub[n]->getData();
        }
        else if (option == 'c' || option == 'C')
        {
            ptrpub[n] = new Cd;
            SaleObj[n].getData();
            ptrpub[n]->getData();
        }
        n++;
        cout << "Wants to add more Y/N : ";
        cin >> option;
    } while (option == 'y');
    cout << "::::::::::::::::::::::\n";
    for (int i = 0; i < n; i++)
    {
        ptrpub[i]->putdata();
        SaleObj[i].putData();
    }

    cout << endl;
}
