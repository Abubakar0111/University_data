#include<iostream>

using namespace std;

class Student{

    public:
    string name;
    int regNo;
    string dpt;
    string Class;
    float CGPA;
    string Gender;


    void input();
    void MaxCgpa();

    };

    void Student:: input(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter Enrollment# : ";
        cin>>regNo;
        cout<<"Enter department : ";
        cin>>dpt;
        cout<<"Enter CGPA : ";
        cin>>CGPA;
        cout<<"Enter Gender Male/Female : ";
        cin>>Gender;
    }
    void Student:: MaxCgpa(){
    }

int main(){


    int section=2,total=2,sec;
    Student student[section][total];
    float maxGPA=0;

    for (int i=0; i<section; i++)
     {
        cout<<"::::: Enter Sec "<<i+1<<" Data \n";

         for(int j=0; j<total; j++)
         {
             cout<<"::::: Student "<<j+1<<" Records ::::;\n";
             student[i][j].input();
             cout<<endl;
         }
         cout<<endl;
     }

    cout<<"\nEnter section# to find Highest GPA : ";
    cin>>sec;
    for(int j=0; j<total; j++)
    {
        if (student[sec-1][j].CGPA>maxGPA)
        {
          maxGPA=student[sec-1][j].CGPA;
        }
        if (student[sec-1][j].CGPA==maxGPA)
        {
          cout<<"Highest GPA in sec# "<<sec<<" The Student name is "<<student[sec-1][j].name<<endl;;
          break;
        }
    }
int male=0,female=0;
    for(int j=0; j<total; j++)
    {
        if (student[sec-1][j].Gender=="Male" || student[sec-1][j].Gender=="male")
        {
          male++;
        }
        if (student[sec-1][j].Gender=="Female" || student[sec-1][j].Gender=="female")
        {
          female++;
        }
    }
    cout<<"Your have in section# "<<sec<<" Male "<<male<<" and Female is "<<female<< endl;

}