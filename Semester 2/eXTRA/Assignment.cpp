#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    string Roll_Number;
    int Semester_Number;

public:
    void Input_Student_Record()
    {
        cout << "Enter Student name : ";
        cin >> name;
        cout << "Enter Student Roll number : ";
        cin >> Roll_Number;
        cout << "Enter Student Semester Number : ";
        cin >> Semester_Number;
    }
    void Display_Student_Record()
    {
        cout << "Student Name is : " << name << endl;
        cout << "Student Roll number is : " << Roll_Number << endl;
        cout << "Student Semester Number is : " << Semester_Number << endl;
    }
    void Modify_Student_Record(string search)
    {
        string searchFun;
        searchFun = search;
        if (searchFun == name)
        {
            cout << "\n::: Found ::::\n";
            cout << "Enter Student name : ";
            cin >> name;
            cout << "Enter Student Roll number : ";
            cin >> Roll_Number;
            cout << "Enter Student Semester Number : ";
            cin >> Semester_Number;
        }
    }
    string getNameFun()
    {
        return name;
    }
};

class Course
{
protected:
    string Course_Code;
    string Course_Title;
    float Credit_Hours;

public:
    void Input_Course()
    {
        /* code */
        cout << "Enter course code : ";
        cin >> Course_Code;
        cout << "Enter course Title : ";
        cin >> Course_Title;
        cout << "Enter course Credit Hours : ";
        cin >> Credit_Hours;
    }
    void Display_Student_Course() //for check run time
    {
        cout << "Student course code is : " << Course_Code << endl;
        cout << "Student course Title is : " << Course_Title << endl;
        cout << "Student course Credit Hours  is : " << Credit_Hours << endl;
    }
    void Modify_Course()
    {
        string search;
        cout << "Enter Course title for searching : ";
        cin >> search;
        if (search == Course_Title)
        {
            cout << "Enter course code : ";
            cin >> Course_Code;
            cout << "Enter course Title : ";
            cin >> Course_Title;
            cout << "Enter course Credit Hours : ";
            cin >> Credit_Hours;
        }
    }
    void getCourseTitle()
    {
        cout << "Course title  is : " << Course_Title << endl;
    }
    string title()
    {
        return Course_Title;
    }
};

class Registration : public Course
{
    int howMany;
    int total;

public:
    int Sbj[20]; // set to max
    bool button;
    int addDrop;

    void Enter_Result(int ii)
    {
        int howMany = ii;
        cout << "we have " << howMany << " subjects : " << endl;
        for (int i = 0; i < howMany; i++)
        {
            cout << "Enter sbj#" << i + 1 << " : ";
            cin >> Sbj[i];
        }
    }
    void Print_Result_StudentWise(int ii)
    {
        cout << endl;
        howMany = ii;
        total = 0;
        for (int i = 0; i < howMany; i++)
        {
            total = total + Sbj[i];
        }
        int per = total / howMany;
        // cout<<"Total is : "<<total<<endl;
        // cout<<"HowMany is : "<<howMany<<" & per is : "<<per<<endl;
        cout << " Grade : ";
        if (per > 85)
        {
            addDrop = 10;
            cout << "Got A grade  GPA : 4.0 \n";
        }
        else if (per < 85 && per >= 75)
        {
            addDrop = 10;
            cout << "Got B grade  GPA : 3.5 \n";
        }
        else if (per < 75 && per >= 50)
        {
            addDrop = 10;
            cout << "Got C grade  GPA : 3.0 \n";
        }
        else if (per < 50 && per >= 30)
        {
            addDrop = 10;
            cout << "Got D grade  GPA : 2.5\n";
        }
        else
        {
            addDrop = 5;
            cout << "Fail\n";
        }
    }
    void Print_Result_CourseWise(string s, int r)
    {

        for (int i = 0; i <= howMany; i++)
        {

            if (i == r)
            {

                cout << "Course Number [ " << i + 1 << " ] & Title " << s << " :: Have Marks " << Sbj[i] << " : " << endl;
            }
        }
    }
    void Modify_Registration_Record()
    {
        for (int i = 0; i < howMany; i++)
        {
            cout << "Enter sbj#" << i + 1 << " : ";
            cin >> Sbj[i];
        }
    }
    void display()
    {
        cout << "We have howMany in : " << howMany << endl;
        for (int i = 0; i < howMany; i++)
        {
            cout << "Sbj of " << i + 1 << " is : " << Sbj[i] << endl;
        }
    }
    void AddDrop()
    {
        for (int i = 0; i < howMany; i++)
        {

            cout << "Sbj of " << i + 1 << " is : " << Sbj[i] << endl;
            if (Sbj[i] >= 80)
            {
                cout << "Subject # " << i + 1;
                cout << " :: Add :: " << endl;
            }
            else if (Sbj[i] <= 80)
            {
                cout << "Subject # " << i + 1;

                cout << " :: Drop :: " << endl;
            }
            else
            {
                cout << "Subject # " << i + 1 << endl;
                cout << " :: Not sure :: " << endl;
            }
        }
    }
};
int main()
{
    int size = 0, add = 0, HowManyCourse = 0;
    string savingName[size];
    cout << "How many students you want to add : ";
    cin >> add;
    size = size + add;
    Student obj_Of_Student[size];
    Course obj_Of_Course[HowManyCourse];
    Registration obj_Of_Registration[size];
up:
    int mainChoose = 0, chooseStudent = 0, chooseCourse = 0, chooseRegistration = 0;
    cout << "\n::: Welcome Studennt data center :::  ";
    cout << "\nPress 1 for Student \nPress 2 for Course\nPress 3 for Registration\n==> ";
    cin >> mainChoose;
    if (mainChoose == 1)
    {
    Std_up:
        cout << "\n\t::: Enter Studennt data :::  ";
        cout << "\n\tPress 1 for Enroll\n\tPress 2 for Display\n\tPress 3 for Modify\n\tPress 000 for Exit()\n\t==> ";
        cin >> chooseStudent;
        if (chooseStudent == 1)
        {
            for (int i = 0; i < size; i++)
            {
                cout << "\n:::Enter Student " << i + 1 << " Record :::: " << endl;
                obj_Of_Student[i].Input_Student_Record();
                // savingName[i] = obj_Of_Student[i].getNameFun();
            }

            goto Std_up;
        }
        else if (chooseStudent == 2)
        {
            for (int i = 0; i < size; i++)
            {
                cout << "\n::: Student " << i + 1 << " Record :::: " << endl;
                obj_Of_Student[i].Display_Student_Record();
            }
            goto Std_up;
        }
        else if (chooseStudent == 3)
        {
            string search;
            cout << "\tEnter name for searching : ";
            cin >> search;

            for (int i = 0; i < size; i++)
            {
                obj_Of_Student[i].Modify_Student_Record(search);
            }
            goto Std_up;
        }

        else if (chooseStudent == 000)
        {
            goto up;
        }
        else
        {
            cout << "\n\n::::: Enter valid :::::\n";
            goto Std_up;
        }
    }
    else if (mainChoose == 2)
    {
    course_up:
        cout << "\n\n\t::: Student Course ::: " << endl;
        cout << "\n\tPress 1 for Input course \n\tPress 3 for Modify course \n\tPress 000 for Exit()\n\t==> ";
        cin >> chooseCourse;
        if (chooseCourse == 1)
        {
            cout << "How many course one student have : ";
            cin >> HowManyCourse;
            for (int i = 0; i < HowManyCourse; i++)
            {
                cout << ":::  Course " << i + 1 << " Details :::; " << endl;
                // for (int j = 0; j < 5; j++)
                // {
                obj_Of_Course[i].Input_Course();
                // }
            }
            goto course_up;
        }
        else if (chooseCourse == 2) // for check run time
        {
            for (int i = 0; i < HowManyCourse; i++)
            {
                obj_Of_Course[i].Display_Student_Course();
            }
            goto course_up;
        }
        else if (chooseCourse == 3)
        {
            for (int i = 0; i < HowManyCourse; i++)
            {
                obj_Of_Course[i].Modify_Course();
            }
            goto course_up;
        }
        else if (chooseCourse == 000)
        {
            goto up;
        }
        else
        {
            cout << "\n\n::::: Enter valid :::::\n";
            goto course_up;
        }
    }
    else if (mainChoose == 3)
    {
        int subj = HowManyCourse;
    reg_up:

        cout << "\n\n\t::: Student Registration ::: " << endl;
        cout << "\n\tPress 1 for EnterResult\n\tPress 2 for Print_Result_StudentWise \n\tPress 3 Print_Result_CourseWise \n\tPress 4 Modify_Registration_Record  \n\tPress 5 Display_Registration_Record \n\tPress 6 Checking add/drop student  \n\tPress 000 for Exit()\n\t==> ";
        cin >> chooseRegistration;
        if (chooseRegistration == 1)
        {
            for (int i = 0; i < size; i++)
            {
                cout << "\n::::  Enter Student " << i + 1 << " Subjects marks :::: \n";
                obj_Of_Registration[i].Enter_Result(subj);
            }
            goto reg_up;
        }
        else if (chooseRegistration == 2)
        {
            for (int i = 0; i < size; i++)
            {

                cout << "Name is : " << obj_Of_Student[i].getNameFun();
                // cout << "Name is :::  " << savingName[i];
                obj_Of_Registration[i].Print_Result_StudentWise(subj);
            }
            goto reg_up;
        }
        else if (chooseRegistration == 3)
        {
            string searchCourseTitle;
            cout << "Enter Course title for getting result :  ";
            cin >> searchCourseTitle;
            for (int i = 0; i <= size; i++)
            {
                // cout << searchCourseTitle << " :::: " << obj_Of_Course[i].title() << endl;
                // cout << "::::: In MAIN course secction ::::: " << endl;
                if (searchCourseTitle == obj_Of_Course[i].title())
                {
                    int record = i;
                    for (int j = 0; j < HowManyCourse; j++)
                    {
                        // obj_Of_Course[j].getCourseTitle();
                        obj_Of_Registration[j].Print_Result_CourseWise(searchCourseTitle, record);
                    }
                }
            }
            goto reg_up;
        }
        else if (chooseRegistration == 4)

        {

            int std_no;
            cout << "Enter student number to modify there result : ";
            cin >> std_no;

            for (int i = 0; i < size; i++)
            {
                if (i == std_no - 1)
                {

                    obj_Of_Registration[i].Modify_Registration_Record();
                }
            }
            cout << "::: Not Founded ::: " << endl;
            goto reg_up;
        }
        else if (chooseRegistration == 5)
        {
            for (int i = 0; i < size; i++)
            {
                obj_Of_Registration[i].display();
            }
            goto reg_up;
        }
        else if (chooseRegistration == 6)
        {
            for (int i = 0; i < size; i++)
            {
                cout << "Student # " << i + 1 << endl;
                obj_Of_Registration[i].AddDrop();
            }
            goto reg_up;
        }
        else if (chooseRegistration == 000)
        {
            goto up;
        }
        else
        {
            cout << "\n\n::::: Enter valid :::::\n";
            goto reg_up;
        }
    }
    goto up;
}