
#include <iostream>
#include <string>

using namespace std;

class IsAlive
{
public:
    IsAlive(bool alive)
    {
        cout << "::: Yes Im alive ::::: " << endl;
    }
};

class Heart
{

private:
    string name;
    IsAlive alive;

public:
    Heart(bool HeartIsWorking) : alive(HeartIsWorking)
    {
        // IsAlive alive(bool alive)
    }
};

class Person //
{
public:
    Person(bool GivingACESS)
    {
        if (GivingACESS)
        {
            Heart infoObject(GivingACESS);
        }
        else
        {
            cout << "::::::::: You have no access to read data ::::::: " << endl;
        }
    }
};

int main()
{
    bool alive;
    cout << "Is human alive : 1/0 ";
    cin >> alive;
    Person working(alive);
}