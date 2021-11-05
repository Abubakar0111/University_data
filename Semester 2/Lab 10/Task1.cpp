#include <iostream>
using namespace std;

class AnimalClass
{
    string name;
    string zoo;

public:
    virtual void Getter()
    {

        name = "Hmaza";
        zoo = "Nisar";
    }
    virtual void show()
    {
        cout << " NAME IS  : " << name << endl;
        cout << " Zoo is : " << zoo << endl;
    }
};

class BirdsClass : public AnimalClass
{
    bool Flying;

public:
    void Getter()
    {
        Flying = true;
    }
    void show()
    {
        cout << "The Flying is  : " << Flying << endl;
    }
};

class ReptilesClass : public BirdsClass
{
    int Length;

public:
    void Getter()
    {
        Length = 25;
    }
    void show()
    {
        cout << "The length is : " << Length << endl;
    }
};

int main()
{
    AnimalClass *animal = new AnimalClass;
    animal->Getter();
    cout << "3 3 3 3 3 3################################### 3 3 3 3 3 " << endl;

    animal->show();
    BirdsClass birdObj;
    animal = &birdObj;
    cout << "3 3 3 3 3 3################################### 3 3 3 3 3 " << endl;

    animal->Getter();
    animal->show();
    ReptilesClass reptiles;
    animal = &reptiles;
    cout << "3 3 3 3 3 3################################### 3 3 3 3 3 " << endl;

    animal->Getter();
    animal->show();
}