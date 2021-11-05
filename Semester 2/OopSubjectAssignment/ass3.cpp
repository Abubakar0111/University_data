#include <iostream>
using namespace std;

class Sale // base class 1
{

    float INPUT[3];

public:
    void getData()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter month " << i + 1 << " sale: $";
            cin >> INPUT[i];
        }
    }
    void putData()
    {
        cout << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "\tMonth " << i + 1 << " sale: $" << INPUT[i] << endl;
        }
    }
};
class publication // base class 2
{
    string title;
    float price;

public:
    virtual void getData()
    {
        // cout << "\n:::: IN BASE CLASS INPUT :::: " << endl;
        cout << "\nEnter Title of string : ";
        cin >> title;
        cout << "Enter Price of int : ";
        cin >> price;
    }
    virtual void putdata()
    {
        // cout << "\n:::: IN BASE CLASS OUTPUT:::: " << endl;

        cout << "\tTitle of string : " << title << "" << endl;
        cout << "\tPrice of int : " << price << "  " << endl;
    }
};

class Book : public publication, public Sale // drived 1
{
    int pageCount;

public:
    void getData()
    {

        publication::getData();
        // cout << "\n:::: IN Drived BOOK CLASS INPUT :::: " << endl;
        cout << "Enter Book page count : ";
        cin >> pageCount;
        Sale::getData();
    }
    void putdata()
    {
        cout << "\n:::::::: Data From BOOK Class ::::::::: \n";
        publication::putdata();
        // cout << "\n:::: IN Drived BOOK CLASS OUTPUT ::::::::::: " << endl;
        cout << "\tPage count of Book : " << pageCount << "  " << endl;
        Sale::putData();
    }
};

class Cd : public publication, public Sale // drived 2
{
    int playingTime;

public:
    void getData()
    {
        publication::getData();
        // cout << "\n:::: IN Drived CD CLASS INPUT :::: " << endl;
        cout << "Enter playing Time of CD : ";
        cin >> playingTime;
        // cout << "Cin Done in CD class playing " << endl;
        Sale::getData();
    }
    void putdata()
    {
        cout << "\n:::::::: Data From CD Class ::::::::: \n";

        publication::putdata();
        // cout << "\n:::: IN Drived CD CLASS OUTPUT :::: " << endl;

        cout << "\tPlaying Time of CD : " << playingTime << " " << endl;
        Sale::putData();
    }
};

int main()
{
    int size = 20;
    publication *ptrPublication[size];
    char Again;
again:
    int index = 0;
    char choice;

Another:
    cout << "\n\t\t::::: Which data you want to add ::::: \nBook or Cd -> B / C : ";
    cin >> choice;
    if (choice == 'b' || choice == 'B')
    {
        ptrPublication[index] = new Book;
        ptrPublication[index]->getData();
    }
    else if (choice == 'c' || choice == 'C')
    {
        ptrPublication[index] = new Cd;
        ptrPublication[index]->getData();
    }
    index++;
    cout << "Wants to add more Y / N : ";
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        goto Another;
    }
    for (int i = 0; i < index; i++)
    {
        cout << endl;
        ptrPublication[i]->putdata();
        cout << endl;
    }
    cout << "::::::::: Thank You for using :::::::: " << endl;
}
