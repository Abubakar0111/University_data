#include <iostream>

using namespace std;

// Base class
class AnimalClass
{
public:
    void animalSound()
    {
        cout << "The animal makes a sound \n";
    }
};

// Derived class
class Pig : public AnimalClass
{
public:
    void animalSound()
    {
        cout << "The pig says: wee wee \n";
    }
};

// Derived class
class Dog : public AnimalClass
{
public:
    void animalSound()
    {
        cout << "The dog says: bow wow \n";
    }
};

int main()
{
    AnimalClass myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}