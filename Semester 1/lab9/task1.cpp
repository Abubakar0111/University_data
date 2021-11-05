#include <iostream>
using namespace std;

double Sale_Price(double purchase_price, double tax)
{
    double Tax_Amount = 0, Sale_Price = 0;

    Tax_Amount = purchase_price * (tax / 100);
    Sale_Price = purchase_price + Tax_Amount;

    return Sale_Price;
}
int main()
{
    double purchase_price = 0, tax = 0;

    cout << "Enter Purchase price : ";
    cin >> purchase_price;
    cout << "Enter Tax rate : ";
    cin >> tax;
    cout<<"The sale price is "<<Sale_Price(purchase_price, tax);
}
