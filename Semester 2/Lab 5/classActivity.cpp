#include<iostream>

using namespace std;
class Set{
    int a;
    public:
    Set (int num)
    {
        a=num;
    }
    void setValue(int num)
    {
        a=num;
    }
    void display(){
        cout<<"a -> "<<a<<endl;
    }
};
int main(){

   Set obj1(3);
   obj1.setValue(4);
   Set obj2(obj1);
    obj2.display();
}