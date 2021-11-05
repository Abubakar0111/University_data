#include <iostream>

using namespace std;
class House
{
    string Adress;
    int cost;

public:
    void setHouseAdress(string _Address, int _cost)
    {
        Adress = _Address;
        cost = _cost;
    }
    void output()
    {
        cout << "Adress : " << Adress << endl;
        cout << "Cost : " << cost << endl;
    }
};
class Room
{
    int roomNumber;

public:
    void setValues(House h, int _roomNumber, string _Adress, int _cost)
    {

        h.setHouseAdress(_Adress, _cost);
        h.output();
        cout << "Room Number : " << roomNumber << endl;
    }
};

int main()
{
    House h;
    Room r;
    r.setValues(h, 20, "F11/2", 1000);
}