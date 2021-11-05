#include <iostream>
using namespace std;
class sales
{
private:
    int s1, s2, s3;
    float *a1, *a2, *a3;

public:
    void getdata()
    {

        cout << "Enter No. of sales of third last month (Array size): ";
        cin >> s1;
        a1 = new float[s1];
        for (int i = 0; i < s1; i++)
        {
            cout << "Enter sale " << i + 1 << " : ";
            cin >> a1[i];
        }
        cout << "Enter No. of sales of Second last month (Array size): ";
        cin >> s2;
        a2 = new float[s2];
        for (int i = 0; i < s2; i++)
        {
            cout << "Enter sale " << i + 1 << " : ";
            cin >> a2[i];
        }
        cout << "Enter No. of sales of Last last month (Array size): ";
        cin >> s3;
        a3 = new float[s3];
        for (int i = 0; i < s3; i++)
        {
            cout << "Enter sale " << i + 1 << " : ";
            cin >> a3[i];
        }
    }
    void putdata()
    {
        cout << "\nNo. of Sales of third last month is " << s1 << ".\n";
        for (int i = 0; i < s1; i++)
            cout << "Sale " << i + 1 << " is " << a1[i] << endl;
        cout << "No. of Sales of Second last month is " << s2 << ".\n";
        for (int i = 0; i < s2; i++)
            cout << "Sale " << i + 1 << " is " << a2[i] << endl;
        cout << "No. of Sales of third last month is " << s3 << ".\n";
        for (int i = 0; i < s3; i++)
            cout << "Sale " << i + 1 << " is " << a3[i] << endl;
    }
};
class publication
{
private:
    string t;
    float p;

public:
    void getdata()
    {
        cout << "Enter Title of Publication : ";
        cin >> t;
        cout << "Enter Price of Publication : ";
        cin >> p;
    }
    void putdata()
    {
        cout << "\nPublication Title is " << t;
        cout << "\nPublication Price is " << p;
    }
};
class Book : public publication, public sales
{
private:
    int pc;

public:
    void getdata()
    {
        cout << "Enter Sales of Book Published:\n";
        sales::getdata();
        cout << "Enter Book Page Count : ";
        cin >> pc;
    }
    void putdata()
    {
        cout << "\nSales of Book Published:";
        sales::putdata();
        cout << "\nBook page count is " << pc;
    }
};
class cd : public publication, public sales
{
private:
    float ptime;

public:
    void getdata()
    {
        cout << "Enter Sales of CD Published:\n";
        sales::getdata();
        cout << "Enter CD playing time in minutes: ";
        cin >> ptime;
    }
    void putdata()
    {
        cout << "\nSales of CD Published:";
        sales::putdata();
        cout << "\nCD playing time is " << ptime << " minutes.\n";
    }
};
int main()
{
    int i = 0;
    char q = 'y';

    int size = 3;

    publication *p[size];

    Book *b = new Book[size];
    cd *c = new cd[size];

    while (q == 'y')
    {
        p[i]->getdata();
        b[i].getdata();
        c[i].getdata();
        cout << "Do you want to add more records:Press 'y/n':\n";
        cin >> q;
        system("cls");
        i++;
    }
    for (int z = 0; z < i; z++)
    {
        p[z]->putdata();

        b[z].putdata();
        c[z].putdata();
        cout << "\n-----------------------------------------------\n";
    }
    return 0;
}