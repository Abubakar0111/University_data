#include <iostream>
using namespace std;

class publication
{
    string title;
    float price;

public:
    virtual void getData()
    {
        cout << endl;
        cout << "ENTER THE TITLE :: ";
        cin >> title;
        cout << "ENTER THE PRICE:: ";
        cin >> price;
    }
    virtual void putdata()
    {
        cout << endl;
        cout << "TITLE:: " << title << endl;
        cout << "PRICE :: " << price << endl;
    }
};

class Sale
{

    float INPUT[3];

public:
    void getData()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "ENTER MONTH " << i + 1 << " SALE : ";
            cin >> INPUT[i];
        }
    }
    void putData()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << "MONTH SALE IS :: " << INPUT[i] << endl;
        }
    }
};
class Book : public publication, public Sale
{
    int pageCount;

public:
    void getData()
    {
        publication::getData();
        cout << "ENTER THE NUMBER OF PAGES : ";
        cin >> pageCount;
    }
    void putdata()
    {
        cout << endl;
        publication::putdata();
        cout << " COUNT THE PAGE OF  Book :: " << pageCount << endl;
    }
};

class Cd : public publication, public Sale
{
    int playingTime;

public:
    void getData()
    {
        publication::getData();
        cout << "ENTER THE TIME OF CD ::";
        cin >> playingTime;
    }
    void putdata()
    {
        publication::putdata();
        cout << " START THE TIME OF CD : " << playingTime << endl;
    }
};

int main()
{
    int s = 100;
    publication *obj[s];
    int n = 0;
    char choose;
    Sale SaleObj[s];

    do
    {
        cout << "BOOK = B \nCD = C \n ::";
        cin >> choose;
        if (choose == 'b' || choose == 'B')
        {
            obj[n] = new Book;
            SaleObj[n].getData();
            obj[n]->getData();
        }
        else if (choose == 'c' || choose == 'C')
        {
            obj[n] = new Cd;
            SaleObj[n].getData();
            obj[n]->getData();
        }
        n++;
        cout << "DID YOU WANT TO ADD OR NOT Y / N : ";
        cin >> choose;
    } while (choose == 'y');
    for (int i = 0; i < n; i++)
    {
        obj[i]->putdata();
        SaleObj[i].putData();
    }

    cout << endl;
}