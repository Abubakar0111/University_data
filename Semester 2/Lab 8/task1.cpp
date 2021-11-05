#include <iostream>
using namespace std;

class Person
{
protected:
    string PersonClass_Name;
    int year_of_birth;

public:
    Person(string name, int DOB)
    {
        PersonClass_Name = name;
        year_of_birth = DOB;
    }
    Person() {} // for drived class
};

class Employee
{
protected:
    int employeeID;
    int joiningYear;
    string jobTitle;

    int courseID;
    string courseTitle;
};

class Administration : public Employee //drived from Employee dicussing job
{
public:
    Administration(int empID, int JoinY, string JobTy, int corsID, string corsTy)
    {
        employeeID = empID;
        joiningYear = JoinY;
        jobTitle = JobTy;
        courseID = corsID;
        courseTitle = corsTy;
    }
    Administration() {}
    void setJobTitle(int cID, int jJob, string cTitle);
    void getJobTitle();
};

void Administration::setJobTitle(int cID, int jJob, string cTitle)
{
    employeeID = cID;
    joiningYear = jJob;
    jobTitle = cTitle;
}

void Administration::getJobTitle()
{
    cout << "Employee ID is : " << employeeID << endl;
    cout << "Joining year  is : " << joiningYear << endl;
    cout << "Job Title is : " << jobTitle << endl;
}

class Academic : public Employee // Drived from Employee .. dicussing course
{
public:
    Academic() {}
    Academic(int eID, int jYear, string jTitle, int cID, string cTitle)
    {
        employeeID = eID;
        joiningYear = jYear;
        jobTitle = jTitle;
        courseID = cID;
        courseTitle = cTitle;
    }
    void setCourseID(int cID)
    {
        courseID = cID;
    }
    void setCourseTitle(string cTitle)
    {
        courseTitle = cTitle;
    }
};

class Student : public Person //drived from Person .. discuss a student
{
    int studentID;
    int enrolledSemester;

public:
    Student(int sID, int eStd, string cName, int cYear)
    {

        studentID = sID;
        enrolledSemester = eStd;
        PersonClass_Name = cName; // from base person
        year_of_birth = cYear;    // from base person
    }
    void Display()
    {
        cout << "Student ID is : " << studentID << endl;
        cout << "Student Enrolled Semester  is : " << enrolledSemester << endl;
        cout << "Student name from base class is : " << PersonClass_Name << endl;
        cout << "Student Year of Birth from base class is : " << year_of_birth << endl;
    }
};

class DeanHOD : public Administration, public Academic
{
public:
    DeanHOD(int emplyID, int joinYear, string jName, int cID, string cTitle)
    {
        Administration::setJobTitle(emplyID, joinYear, jName);
        Academic::setCourseID(cID);
        Academic::setCourseTitle(cTitle);
        cout << ":::::::::::::::::" << endl;
        Administration::getJobTitle();
        cout << ":::::::::::::::::" << endl;
    }
};
int main()
{
    Person obj_Person("Abubakar", 2001);
    cout << "\t:::::::::::::::::" << endl;
    Student obj_Student(21, 2, "Abubakar", 2001);
    obj_Student.Display();
    cout << "\t:::::::::::::::::" << endl;
    Administration obj_Administration(01, 2001, "Coder", 00, "Null");
    obj_Administration.setJobTitle(02, 2020, "Programmer");
    obj_Administration.getJobTitle();
    Academic Obj_Acadmic(00, 000, "000", 22, "CODER");
    cout << endl;

    int employeeID, JoinYear, courseID;
    string jobTitle, courseTitle;
    cout << ":::: Dean/HOD ::: Employee section ::: " << endl;
    cout << "Enter EmplyeeID : ";
    cin >> employeeID;
    cout << "Enter Employee Joining Year : ";
    cin >> JoinYear;
    cout << "Enter Job Title : ";
    cin >> jobTitle;
    cout << ":::: Dean/HOD ::: Student section ::: " << endl;
    cout << "Enter course ID : ";
    cin >> courseID;
    cout << "Enter Course Title  : ";
    cin >> courseTitle;
    DeanHOD Obj_HOD(employeeID, JoinYear, jobTitle, courseID, courseTitle);
}