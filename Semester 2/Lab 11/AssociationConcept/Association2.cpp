#include <iostream>

using namespace std;
class Car;
class Driver
{
    string name;
    int rating;

public:
    void setter(string name, int rating)
    {
        this->name = name;
        this->rating = rating;
    }
    friend void output(Driver, Car); //with freind functionlity
};

void output(Driver d, Car c) //...... Friend Function .....
{
    cout << "The Car name is ; " << c.carName << endl;
    cout << "The Car Type is ; " << c.carType << endl;
    cout << "The name is : " << d.name << endl;
    cout << "The rating is : " << d.rating << endl;
}

class Car
{
    string carName;
    string carType;

public:
    void OutPut(Driver dr)
    {
        carName = "Toyota";
        carType = "NEW";
    }
    friend void output(Driver, Car); //with freind functionlity
};

int main()
{
    Driver dr;
    dr.setter("Abubakar", 23);
    Car car;
    car.OutPut(dr);
    output(dr, car);
}