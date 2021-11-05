#include <iostream>
using namespace std;
class pizza
{
private:
      int size, price, thickness;
public:
      void setsize()
      {
            cout << "Enter size of pizza: ";
            cin >> size;
      }
      void setprice()
      {
            cout << "Enter price of pizza: ";
            cin >> price;
      }
      void setthickness()
      {
            cout << "Enter thickness of pizza: ";
            cin >> thickness;
      }
      void settopping()
      {
            cout << "Enter toppings of pizza: ";
            cin >> topping;
      }
      string topping;
      void display() const
      {
            cout << "\n:::: The ordered pizza details are :::: ";
            cout<<"\nSize:"<<size;
            cout<<"\nprice; "<<price;
            cout<<"\nTopping : "<<topping; 
            cout<<"\nThickness : "<<thickness<<"\n ";
            } 
            pizza() //class constructor: cannot have a return type
            {
                  setsize();
                  setprice();
                  setthickness();
                  settopping();
            }
      };
      int main()
      {
            pizza obj;
            obj.display();
      }