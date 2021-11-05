#include <iostream>
#include <ctime>

using namespace std;
class examination
{
    int creditHours;
    string courseTitle;
    string courseDescription;
    string courseInstructor;
    int month, date, year;

public:
    examination()
    {
        cout << "Credit Hours :";
        cin >> creditHours;
        cout << "Course Description : ";
        cin >> courseDescription;
        cout << "Course Instructor : ";
        cin >> courseInstructor;
        cout << "Enter month : ";
        cin >> month;
        cout << "Enter date : ";
        cin >> date;
        cout << "Enter year : ";
        cin >> year;
    }
    void timeM();
};

void examination ::timeM()
{
    time_t now = time(0);
    // Convert now to tm struct for local timezone
    tm *localtm = localtime(&now);
    cout << "The local date and time is: " << asctime(localtm) << endl;
    // Convert now to tm struct for UTC
    tm *gmtm = gmtime(&now);
    if (gmtm != NULL)
    {
        cout << "The UTC date and time is: " << asctime(gmtm) << endl;
    }
    else
    {
        cerr << "Failed to get the UTC date and time" << endl;
        
    }
}
int main()
{
    examination obj;
    obj.timeM();
}