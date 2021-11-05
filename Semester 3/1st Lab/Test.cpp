#include <iostream>
using namespace std;
int main()
{
    int marks;
    string grade;
    cout << "Enter your marks :";
    cin >> marks;
    if (marks < 90)
    {
        grade = "A";
    }
    if (marks > = 86 &&marks < = 90)
    {
        grade = "A-";
    }
    if (marks > = 81 &&marks < = 96)
    {
        grade = "B+";
    }
    if (marks > = 77 &&marks < = 81)
    {
        grade = "B";
    }
    if (marks > = 72 &&marks < = 77)
    {
        grade = "B-";
    }
    if (marks > = 68 &&marks < = 72)
    {
        grade = "C+";
    }
    if (marks > = 63 &&marks < = 68)
    {
        grade = "C";
    }
    if (marks > = 58 &&marks < = 63)
    {
        grade = "C-";
    }
    if (marks > = 54 &&marks < = 58)
    {
        grade = "D+";
    }
    if (marks > = 50 &&marks < = 54)
    {
        grade = "D";
    }
    if (marks < 50)
    {
        grade = "F";
    }
    cout "Your grade is : " & lt;
    <
        gradeendl;
}