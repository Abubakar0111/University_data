#include <string>
#include <iostream>

using namespace std;
class Instructor
{
private:
    string InsName;

public:
    Instructor(string name) : InsName(name)
    {
    }
    string getName()
    {
        return InsName;
    }
};

class Depart
{
private:
    Instructor *I_pInstructor; // The dept holds only one teacher
public:
    Depart(Instructor *pInstructor = NULL) : I_pInstructor(pInstructor)
    {
    }
};
int main()
{
    Instructor *pInstructor = new Instructor("Ali"); // create an instructor
    string inName = pInstructor->getName();
    cout << inName << endl;
    // Create a department and use the constructor parameter to pass
    // the teacher to it.
    Depart dep(pInstructor);
    delete pInstructor;
}