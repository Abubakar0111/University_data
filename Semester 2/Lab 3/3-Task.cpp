
#include <iostream>

using namespace std;

class Student
{
public:
    int age;
    int cnic;
    int semester;
    char name;
    void setall(int &, int &, int &, char &) ;
    void displayall();
};

void Student :: setall(int &age, int &cnic, int &semester, char &name) 
{
    cout<<"Enter age : ";
    cin>>age;
    cout<<"Enter cinc : ";
    cin>>cnic;
    cout<<"Enter semester # : ";
    cin>>semester;
    cout<<"Enter Name : ";
    cin>>name;
}

void Student ::displayall()
{
    cout << "\n\n:::: The entered data is :::: "<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Cinc : "<<cnic<<endl;
    cout<<"Semester # : "<<semester<<endl;
    cout<<"Name : "<<name<<endl;
}

int main()
{
    Student obj;
    obj.setall(obj.age,obj.cnic,obj.semester,obj.name);
    obj.displayall();

}