#include<iostream>
using namespace std;
class android_device
{
public :
int IMEIno , Modelno;
string TYPE , MAKE ;
float Memory;
string operating_system;
public : 
void take_value()
{

cout<<"enter IMEI number : ";
cin>>IMEIno;
cout<<"enter type : ";
cin>>TYPE;
cout<<"enter make : ";
cin>>MAKE;
cout<<"enter model no : ";
cin>>Modelno;
cout<<"enter memory : ";
cin>>Memory;
cout<<"enter operating system : ";
cin>>operating_system;
}

public : 
void display_value()
{
cout<<" IMEI number" <<IMEIno;
cout<<endl;
cout<<"type "<<TYPE;
cout<<endl;
cout<<" make "<<MAKE;
cout<<endl;
cout<<" model no "<<Modelno;
cout<<endl;
cout<<" memory "<<Memory;
cout<<endl;
cout<<"operating system "<<operating_system;
}
};
int main()
{
android_device a1;
a1.take_value();
a1.display_value();
}
