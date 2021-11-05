//Task 1
#include <iostream>
using namespace std;
template <class q>
q smallest(q n[])
{
    for (int i = 1; i < 10; i++)
    {
        if (n[0] > n[i])
            n[0] = n[i];
    }
    return n[0];
}
class Queue
{
private:
    double list[10];

public:
    Queue()
    {
        for (int i = 0; i < 10; i++)
        {
            list[i] = 0.0;
        }
    }
    double max()
    {
        for (int i = 1; i < 10; i++)
        {
            if (list[0] < list[i])
                list[0] = list[i];
        }
        return list[0];
    }
    void sort()
    {
        double temp;
        for (int i = 0; i < 10; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (list[j] < list[i])
                {
                    temp = list[i];
                    list[i] = list[j];
                    list[j] = temp;
                }
            }
        }
        cout << "Sorted Array:\n";
        for (int i = 0; i < 10; i++)
            cout << list[i] << endl;
    }
    void queue()
    {
        cout << "Minimum No. in Array: ";
        cout << smallest(list) << endl;
    }
    void set()
    {
        cout << "Enter 10 Numbers in Array:\n";
        for (int i = 0; i < 10; i++)
            cin >> list[i];
    }
};
int main()
{
    Queue q;
    int c;
    q.set();
    while (1)
    {
        cout << "Press 1 to sort Array.\n";
        cout << "Press 2 to see max No. in Array.\n";
        cout << "Press 3 to see min No. in Array.\n";
        cout << "Press 4 to exit.\n";
        cin >> c;
        switch (c)
        {
        case 1:
            q.sort();
            system("Pause");
            system("cls");
            break;
        case 2:
            cout << "Maximum No. in Array: ";
            cout << q.max() << endl;
            system("Pause");
            system("cls");
            break;
        case 3:
            q.queue();
            system("Pause");
            system("cls");
            break;
        case 4:
            return 0;
        }
    }
}
//Task 2
#include <iostream>

using namespace std;
template <class DT>
DT area(DT radius)
{
    float const PI = 3.1614;
    DT circum = 2 * PI * radius;
    DT area = PI * (radius * radius);
    return area / 2;
}
template <class DT>
DT area(DT Length, DT Width)
{
    DT Area = Length * Width;
    return Area;
}

int main()
{
    float radius;
    int length, width;
    cout << " Input the radius of a circle : ";
    cin >> radius;
    cout << "Half Radius is : " << area(radius) << endl;
    cout << "Enter Length : ";
    cin >> length;
    cout << "Enter Width : ";
    cin >> width;
    cout << "Area of rectangular  Radius is : " << area(length, width) << endl;
}
//Task 3
#include <iostream>
using namespace std;
template <class q>
q smallest(q n[])
{
    for (int i = 1; i < 10; i++)
    {
        if (n[0] > n[i])
            n[0] = n[i];
    }
    return n[0];
}
class Queue
{
private:
    double list[10];

public:
    Queue()
    {
        for (int i = 0; i < 10; i++)
        {
            list[i] = 0.0;
        }
    }
    double max()
    {
        for (int i = 1; i < 10; i++)
        {
            if (list[0] < list[i])
                list[0] = list[i];
        }
        return list[0];
    }
    void sort()
    {
        double temp;
        for (int i = 0; i < 10; i++)
        {
            for (int j = i + 1; j < 10; j++)
            {
                if (list[j] < list[i])
                {
                    temp = list[i];
                    list[i] = list[j];
                    list[j] = temp;
                }
            }
        }
        cout << "Sorted Array:\n";
        for (int i = 0; i < 10; i++)
            cout << list[i] << endl;
    }
    void queue()
    {
        cout << "Minimum No. in Array: ";
        cout << smallest(list) << endl;
    }
    void set()
    {
        cout << "Enter 10 Numbers in Array:\n";
        for (int i = 0; i < 10; i++)
            cin >> list[i];
    }
};
int main()
{
    Queue q;
    int c;
    q.set();
    while (1)
    {
        cout << "Press 1 to sort Array.\n";
        cout << "Press 2 to see max No. in Array.\n";
        cout << "Press 3 to see min No. in Array.\n";
        cout << "Press 4 to exit.\n";
        cin >> c;
        switch (c)
        {
        case 1:
            q.sort();
            break;
        case 2:
            cout << "Maximum No. in Array: ";
            cout << q.max() << endl;
            break;
        case 3:
            q.queue();
            break;
        case 4:
            return 0;
        }
    }
}
