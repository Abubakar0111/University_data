#include <iostream>
using namespace std;

struct Student //  -linked list
{
    int id;
    string name;
    char gender;
    Student *next;
};
Student *_Create_std_record(Student *current, int id, string name, char gender) //  for creating new recorde
{
    Student *new_rec = new Student;

    new_rec->id = id;
    new_rec->name = name;
    new_rec->gender = gender;

    new_rec->next = NULL;

    current->next = new_rec;
    return new_rec;
}
void print(Student *std)
{
    Student *node = new Student;
    node = std;
    int count = 0;
    cout << "\n:: Sno: Name\t\tRollno\tSex \n";

    while (node != NULL)
    {
        count++;
        cout << "::: " << count << " : " << node->name << "\t\t" << node->id << "\t" << node->gender << endl;
        node = node->next;
    }
}
Student *ascending(Student *std)
{
    Student *current, *index = new Student;
    // to store pre values  x
    int temp_id;
    string temp_str;
    char temp_chr;

    current = std;
    index = NULL;
    if (std == NULL)
    {
        return current;
    }
    else
    {
        while (current != NULL)
        {

            index = current->next;
            while (index != NULL)
            {
                if (current->id > index->id)
                {
                    temp_id = current->id;
                    current->id = index->id;
                    index->id = temp_id;

                    temp_str = current->name;
                    current->name = index->name;
                    index->name = temp_str;

                    temp_chr = current->gender;
                    current->gender = index->gender;
                    index->gender = temp_chr;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
    return current;
}
int main()
{
    Student *head = new Student;
    head->id = 2000;
    head->name = "Musa";
    head->gender = 'M';
    head->next = NULL;

    Student *current = new Student;
    current = head;
    current = _Create_std_record(current, 2008, "UMAR", 'M');
    current = _Create_std_record(current, 2009, "USMAN", 'M');
    current = _Create_std_record(current, 2003, "USAMA", 'M');
    current = _Create_std_record(current, 2001, "LALA", 'F');
    current = ascending(head); // for sorting data of  students

    print(head);
}