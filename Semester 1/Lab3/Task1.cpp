#include <iostream>

using namespace std;
int main()
{

      int retired, employedSalary, pension = 0000, count;
      int employeeWork = 1000;
      int perHour = 300;
      cout << "Enter age of retired one’s : ";
      cin >> retired;

      if (retired >= 60 && retired <= 70)
      {
            pension = 30000;
      }

      else if (retired > 70)
      {
            pension = 40000;
      }
      cout << "Your age is " << retired << " and your pension is : " << pension << endl;
      cout << " Enter employee working hours : ";
      cin >> employeeWork;

      if (employeeWork < 8)
      {
            cout << "Minimum 8hr required to take your reward " << endl;
      }

      if (employeeWork == 8)
      {
            employedSalary = 1000;
            cout << "Your working hours is " << employeeWork << " and your salary is : " << employedSalary << endl;
      }

      else if (employeeWork >= 8 && employeeWork <= 11)
      {
            cout << "Your working hours is " << employeeWork << " and your salary is : " << perHour * employeeWork << endl;
      }
      else if (employeeWork >= 11)
      {
            employedSalary = 1000;
            cout << "your time limit exceed from limiting hours and your salary as per day is : " << employedSalary << endl;
      }
}