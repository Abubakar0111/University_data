#include<iostream>

using namespace std;
class Test {
    int a;
    int b;
    public:
    Test(){
    a=2;
    b=4;

    }
    void show(){
        cout<<"Val od a : "<<a<<endl;
        cout<<"Val od b : "<<b<<endl;
    }

};
int main(){

      Test t1;
      cout<<" T1 Displayed "<<endl;
      t1.show();
      Test t2(t1);
      cout<<" T2 Displayed "<<endl;
      t1.show();
    
}