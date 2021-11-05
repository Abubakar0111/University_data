#include <iostream>
using namespace std;

int SIZE = 5;

struct Array
{
    int id;
    int data;
};

void Filling(Array *arr) //fill data by  0 0
{
    for (int i = 0; i < SIZE; i++)
    {
        (arr + i)->id = i + 1;
        (arr + i)->data = 0;
    }
}

void Output(Array *arr)
{
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << " Id#" << (arr + i)->id << " : Data " << (arr + i)->data << endl;
    }
    cout << endl;
}

bool isEmpty(Array *arr)
{
    if ((arr + 1)->data == 0)
    {
        return true;
    }
    return false;
}

bool isFull(Array *arr)
{
    for (int i = 0; i < SIZE; i++)
    {
        if ((arr + i)->data == 0)
        {
            return true;
        }
    }
    return false;
}

int list_size(Array *arr)
{
    int size = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if ((arr + i)->data != 0)
        {
            size++;
        }
    }

    return size;
}

void insert(Array *arr, int data)
{
    cout << "Inserting . . . " << data << "\n at white space DONE\n";
    for (int i = 0; i < SIZE; i++)
    {
        if ((arr + i)->data == 0) //inserting at end
        {
            (arr + i)->data = data;
            break;
        }
    }
}

void insert_At(Array *arr, int pos, int value)
{
    cout << "Position : " << pos << " Value : " << value << endl;
    for (int i = SIZE; i >= pos; i--)
        (arr + i)->data = (arr + i - 1)->data; //changing position from high to low 5=4 - 4=3 - . . . . .
    (arr + pos - 1)->data = value;
}

void Replace(Array *arr, int data1, int data2)
{
    cout << "Replacing " << data1 << " with " << data2 << endl;

    for (int i = 0; i < SIZE; i++)
    {
        if ((arr + i)->data == data1)
        {
            (arr + (i))->data = data2;
            break;
        }
    }
    cout << ": " << data1 << " Not Found " << endl;
}

void Retrive(Array *arr, int index)
{
    cout << " Id#" << (arr + index - 1)->id << " : Data " << (arr + index - 1)->data << endl;
}

void search(Array *arr, int data)
{
    cout << "Searching . . " << data << endl;
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if ((arr + i)->data == data)
        {
            cout << ":: Found " << data << endl;
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << ":: Not Found " << data << endl;
    }
}
void ASCENDING(Array *arr)
{
    int temp;
    cout << "\nASCENDING . . for output press 4 \n";

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if ((arr + i)->data > (arr + j)->data)
            {
                temp = (arr + i)->data;
                (arr + i)->data = (arr + j)->data;
                (arr + j)->data = temp;
            }
        }
    }
}

void DECENDING(Array *arr)
{
    int temp;
    cout << "\nDECENDING . . for output press 4 \n";

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if ((arr + i)->data < (arr + j)->data)
            {
                temp = (arr + i)->data;
                (arr + i)->data = (arr + j)->data;
                (arr + j)->data = temp;
            }
        }
    }
}

Array *Increase_array_Size(Array *arr) //for issue in memory .. that's why .. we increase it by double SIZE 5*2 = 10 ..
{
    int old_size = SIZE;
    int new_size = old_size + old_size; //increasing by . . old_size + old_size
    SIZE = new_size;
    Array *new_arr = new Array[SIZE];
    for (int i = 0; i < old_size; i++)
    {
        (new_arr + i)->id = (arr + i)->id; //copying data

        (new_arr + i)->data = (arr + i)->data; //copying data
    }
    delete[] arr; // pre arr deleting . . .
    arr = new_arr;

    cout << "Old_size is : " << old_size << endl;
    cout << "new Size is : " << SIZE << endl;
    for (int i = old_size; i < SIZE; i++) //filling extra with 0 0
    {
        (new_arr + i)->id = i + 1;
        (new_arr + i)->data = 0;
        cout << (new_arr + i)->id << " " << (new_arr + i)->data << endl;
    }
    arr = new_arr;
    return new_arr;
}

Array *Decrease_Array_Size(Array *arr)
{
    int old_size = SIZE;
    int new_size = old_size - 1; //Decrease by 1
    SIZE = new_size;

    Array *new_arr = new Array[SIZE];

    for (int i = 0; i < old_size; i++)
    {
        (new_arr + i)->id = (arr + i)->id; //copying data

        (new_arr + i)->data = (arr + i)->data; //copying data
    }
    delete[] arr; // pre arr deleting . . .
    arr = new_arr;

    cout << "Old_size is : " << old_size << endl;
    cout << "new Size is : " << SIZE << endl;
    for (int i = old_size; i < SIZE; i++)
    {
        (new_arr + i)->id = i + 1;
        (new_arr + i)->data = 0;
        cout << (new_arr + i)->id << " " << (new_arr + i)->data << endl;
    }
    arr = new_arr;
    return new_arr;
}
int main()
{
    Array *arr;
    arr = new Array[SIZE];
    Filling(arr);
    Output(arr);
    insert(arr, 33); //insert at end OR where they find empty space

    cout << endl;
    cout << "\t1 :\tIS EMPTY \n";
    cout << "\t2 :\tIS FULL \n";
    cout << "\t3 :\tis LIST SIZE \n";
    cout << "\t4 :\tis PRINT \n";
    cout << "\t5 :\tis INSERT \n";
    cout << "\t6 :\tis INSERT_AT \n";
    cout << "\t7 :\tis RETRIEVE_AT \n";
    cout << "\t8 :\tis REPLACE_AT \n";
    cout << "\t9 :\tis SEARCH \n";
    cout << "\t10 :\tis SORT - ASCENDING \n";
    cout << "\t11 :\tis SORT - DESCENDING \n";
    cout << "\t12 :\tis ARRAY SIZE INCREASE \n";
    cout << "\t13 :\tis ARRAY SIZE DECREASE \n\t: ";

    int Select = 0;
AGAIN:
    cin >> Select;
    switch (Select)
    {
    case 1:
        if (isEmpty(arr) == 1)
            cout << ": isEmpty : " << endl;
        else
            cout << ": Is Not Empty : " << endl;
        goto AGAIN;
        break;
    case 2:
        if (isFull(arr) == 1)
            cout << ": Is not Full : " << endl;
        else
            cout << ": Is Full :" << endl;
        goto AGAIN;
        break;
    case 3:
        cout << "The size of array is : " << list_size(arr) << endl;
        goto AGAIN;
        break;
    case 4:
        Output(arr);
        goto AGAIN;
        break;
    case 5:
        insert(arr, 10); //insert at end OR where they find empty space
        insert(arr, 20); //insert at end OR where they find empty space
        goto AGAIN;
        break;
    case 6:
        insert_At(arr, 4, 88); // positon - value
        goto AGAIN;
        break;
    case 7:
        Retrive(arr, 3); //index
        goto AGAIN;
        break;
    case 8:
        Replace(arr, 22, 99); // finder -  replace data
        goto AGAIN;
        break;
    case 9:
        search(arr, 33); //data for search
        goto AGAIN;
        break;
    case 10:
        ASCENDING(arr); //sort
        goto AGAIN;
        break;
    case 11:
        DECENDING(arr); //sort
        goto AGAIN;
        break;
    case 12:
        arr = Increase_array_Size(arr);
        goto AGAIN;
        break;
    case 13:
        arr = Decrease_Array_Size(arr);
        goto AGAIN;
        break;
    default:
        cout << "\n: : :  : : Enter Valid : : : : : : : :\n";
        goto AGAIN;
    }
}