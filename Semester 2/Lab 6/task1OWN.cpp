#include <iostream>
#include <fstream>

using namespace std;

class Student
{
  int size;
  string name[5], age[5], Reg[5], search,Botton;
  int choose,count, attempt;


public:
  Student(){
  attempt=0;
  }
  void input()
  {
    ofstream outfile;
    outfile.open("Student.txt", ios ::app);
    attempt++;
    size=5;
    if (count >= 4 && attempt > 2)
    {
      cout << "::: Program has limited storege :::" << endl;
      outfile.close();
    }
    for (int i = 0; i < 5; i++)
    {
      cout << "Enter Student " << count + 1 << " name : ";
      cin >> name[i];
      outfile << name[i] << endl;
      cout << "Enter Student " << count + 1 << " age : ";
      cin >> age[i];
      outfile << age[i] << endl;
      cout << "Enter Student registration : ";
      cin >> Reg[i];
      outfile << Reg[i] << endl;
      count++;
      // cout<<"Count is : "<<count<<endl;
      // cout<<"Attempt is : "<<attempt<<endl;
      if (count == 3 && attempt == 1)
      {
        break;
      }
      if (count == 5 && attempt == 1)
      {
        break;
      }
    }
    outfile.close();
  }
  void searchFun()
  {

    ifstream infile;
    infile.open("Student.txt");
    cout << "Search (name, age or Reg no) : ";
    cin >> search;
  // cout<<"samlpe "<<name[0]<<endl;
    for (int i = 0; i < 5; i++)
    {
      infile>>name[i];
      infile>>age[i];
      infile>>Reg[i];

      // cout<<"Entring in for loop :: "<<name[i]<<" "<<age[i]<<" "<<Reg[i]<<endl;

      if (search == name[i] || search == age[i] || search == Reg[i])
      {
        Botton = name[i];
      }
    }
    // cout<<"Botton is : "<<endl;
    infile.close();
    ifstream infile2;
    infile2.open("Student.txt");
    cout << "\n::::: O U T P U T :::::: " << endl;
    for (int i = 0; i < 5; i++)
    {
      if (name[i]==Botton)
      {
        cout << "Student Name : " << name[i] << endl;
        cout << "Student Age : " << age[i] << endl;
        cout << "Student Registration no : " << Reg[i] << endl;
      }
    }
    infile.close();
  }
};

int main()
{
  int choose;
up:
  cout << "\n:: Press 1 For writing ::: " << endl;
  cout << ":: Press 2 For Searching ::: \n:: Press 0 for exit\n=> ";
  cin >> choose;

  Student obj;

  if (choose == 1)
  {
    obj.input();
    goto up;
  }
  else if (choose == 2)
  {
    obj.searchFun();
    goto up;

  }
  else if (choose == 0)
  {

  }
  
}