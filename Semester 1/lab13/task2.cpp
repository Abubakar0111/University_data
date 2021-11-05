#include <iostream>
#include <string>
using namespace std;

struct StudentData //Definition of a struct to store the information of a student
{
       string SFname;
       string SLname;
       int scores;
       char grade;
};
void Sinfo();                //function that takes the info from the user and store it
char AssGrade(int);          //function that assign the grade to the entered score
void highestScore(int);      //function that find the highest test score
void printHighestscore(int); //function that print the highest test score
void outputRecord();         //function that prints the information entered by the user

StudentData s[20]; //instance of StudentData to store the data of 20 student

int highest_score[20], highest;

int main()
{
       Sinfo();                    //calling of a function to take the data from the user
       printHighestscore(highest); //print the higest test score
       outputRecord();             //prints the record
       system("pause");
       return 0;
}
void Sinfo() //function that inputs the data from the user
{
       for (int i = 0; i < 5; i++)
       {
              cout << "Student No." << i + 1 << endl;
              cout << " First name :";
              cin >> s[i].SFname;
              cout << " Last name :";
              cin >> s[i].SLname;
              cout << " Test score :";
              cin >> s[i].scores;

              if (s[i].scores >= 0 && s[i].scores <= 100) //check weither the test socre are in the range of 0~100
                     s[i].grade = AssGrade(s[i].scores);  //calls the grade function to assign the grade
              else
              {
                     do
                     {
                            cout << " Entered invalid test scores" << endl;
                            cout << " AGAIN Enter the test score" << i + 1 << " :";
                            cin >> s[i].scores;
                     } while (s[i].scores < 0 || s[i].scores > 100);
                     s[i].grade = AssGrade(s[i].scores);
              }
              cout << endl;
              highestScore(i);
       }
}
char AssGrade(int num) //function to assign the grade
{
       char grade;
       if (num >= 90)
              grade = 'A';
       else if (num >= 80)
              grade = 'B';
       else if (num >= 70)
              grade = 'C';
       else if (num >= 60)
              grade = 'D';
       else
              grade = 'F';
       return grade;
}
void highestScore(int j) //Function to find highest score
{
       if (j == 0)
       {
              highest_score[0] = s[j].scores;
              highest = s[j].scores;
       }
       else if (s[j].scores >= highest)
       {
              highest_score[j] = s[j].scores;
              highest = s[j].scores;
       }
}
void printHighestscore(int h) //Function to print highest score
{
       cout << "Higest test Score= " << h << endl;
       cout << "STUDENT(s) got the Highest score are" << endl;

       for (int i = 0; i < 5; i++)
       {
              if (highest_score[i] == h)
              {
                     cout << s[i].SFname << endl;
              }
       }
}
void outputRecord() //Function to output the record entered bythe user
{
       cout << "LAST NAME"
            << " First Name"
            << " \t\tTEST SCORE"
            << "\tGRADE" << endl;
       for (int i = 0; i < 5; i++)
       {
              cout << s[i].SLname << ", " << s[i].SFname << " \t\t\t " << s[i].scores << " \t\t " << s[i].grade << endl;
       }
}