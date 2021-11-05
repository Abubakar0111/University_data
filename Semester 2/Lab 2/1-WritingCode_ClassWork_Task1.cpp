#include <iostream>
using namespace std;

class arc
{
float radius;
float arc_length;
float angle;
public:
void SetRadius(float);
void SetAngle(float);
void SetArc_Length();
void display ()const
{
    cout<<"\t\t\tArc Details"<<endl;
    cout<<"Radius of the Arc is : "<<radius<<endl;
    cout<<" Arc_Length of the Arc is : "<<arc_length<<endl;
    cout<<"Angle of the Arc is : "<<angle<<endl;
}
};
void arc:: SetRadius (float r)
{
radius = r;
}
void arc:: SetAngle (float a)
{
angle = a;
}
void arc:: SetArc_Length()
{
cout<<"Enter the arc_length of the Arc" ;
cin>>arc_length;
}

int main()
{
arc obj;
obj.SetRadius(5.4);
obj. SetAngle(12.2);
obj. SetArc_Length();
obj. display();
}