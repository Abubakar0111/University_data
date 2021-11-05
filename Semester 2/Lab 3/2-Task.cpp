#include <iostream>
#include <string>
using namespace std;

class PopSalon
{
private:
      // int chocolate,English_toffee,salted_caramel,caramel,jalapeno,cheese,spiced_cheese,plain_sated,buttered, salt_and_pepper,garlic;
      double Total;
      string flavor, SizeOFPop, Wrapper, additionalTopping, Customer_Name, Mobile_Number, Quality_of_Service;

public:
      void Getflavors();
      void popSalonSize();
      void popSalon_wrapper();
      void additional_topping();
      void productPromotion();
      void displaysPopSalon();
      ~PopSalon()
      {
            cout << "\n::: Thank you for visiting PopSalon! ::::\n";
      }
};

void PopSalon::Getflavors()
{

      cout << ":::: Choose flavors ::::\nChocolate\tEnglish toffee\nSalted caramel\tCaramel\nJalapeno\tCheese\nSpiced cheese\tPlain sated\nButtered\tSalt and pepper\nGarlic.\n==>";
      getline(cin, flavor);
}
void PopSalon::popSalonSize()
{
      cout << "\n Rs. 100 for small pack \n Rs. 250 for medium sized pack \n Rs. 500 for large pack \n Rs. 750 large size tin pack  \n ==>";
      getline(cin, SizeOFPop);
      if (SizeOFPop == "small")
      {
            Total += 100;
      }
      else if (SizeOFPop == "medium")
      {
            Total += 250;
      }
      else if (SizeOFPop == "large")
      {
            Total += 500;
      }
      else if (SizeOFPop == "large tin")
      {
            Total += 750;
      }
      else
      {
            cout << "\n! Invalid input \n";
      }
}

void PopSalon::additional_topping()
{
      cout << "\n! Additional topping\nChocolate\nCaramel\nCheese\nor No \n==>";
      getline(cin, additionalTopping);
      if (additionalTopping == "Chocolate")
      {
            Total += 50;
      }
      else if (additionalTopping == "Caramel")
      {
            Total += 30;
      }
      else if (additionalTopping == "Cheese")
      {
            Total += 60;
      }
}
void PopSalon::popSalon_wrapper()
{
      cout << "\nWrapper Required Y\\N : ";
      cin >> Wrapper;
      if (Wrapper == "y" || Wrapper == "yes")
      {
            Total += 50;
      }
}

void PopSalon::productPromotion()
{
      cout << "\n :::: Product Promotion Details ::: " << endl;
      cout << "Customer Name : ";
      cin >> Customer_Name;
      cout << "Customer Mobile number : ";
      cin >> Mobile_Number;
      cout << "Quality of Service  : ";
      cin >> Quality_of_Service;
}

void PopSalon::displaysPopSalon()
{
      cout << "\n :::: Your choice of Popcorn is :::::" << endl;
      cout << "Flavor = " << flavor << endl;
      cout << "Pack Size = " << SizeOFPop << endl;
      if (additionalTopping == "No")
      {
            cout << "No Additional Toppings" << endl;
      }
      else
      {
            cout << "Additional Toppings = " << additionalTopping << endl;
      }
      if (Wrapper == "N" || Wrapper == "n")
      {
            cout << "No Gift Wrapper Required !" << endl;
      }
      else
      {
            cout << "Gift Wrapper Required = Yes " << endl;
      }
      cout << "Total Bill " << Total << endl;
}
int main()
{

      cout << "\n::::  Welcome to PopSalon :::::\n\n ";
      PopSalon pop;
      pop.Getflavors();
      pop.popSalonSize();
      pop.additional_topping();
      pop.popSalon_wrapper();
      pop.productPromotion();
      pop.displaysPopSalon();
}