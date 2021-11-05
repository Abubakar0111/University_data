#include<iostream>

using namespace std;
int expertLevel (struct SpaceT obj[],int size);

struct SpaceT{
    string name;
    int LevelOfCPP;
    int ExpectedSalery;

};
int main(){
    int size;
    cout<<"Enter how many people space technology company is hiring : ";
    cin>>size;
    SpaceT obj[size];
    for (int i = 0; i < size; i++)
    {

        cout<<"NAME : ";
        cin>>obj[i].name;
        cout<<"Level of C++ \nPress 1 for Expert\nPress 2 for Average\nPress 3 for Biginners \n ==>  ";
        cin>>obj[i].LevelOfCPP;
        cout<<"Expected Salery : ";
        cin>>obj[i].ExpectedSalery;
    }

    int ret;
    ret=expertLevel(obj,size) ;
    cout<<"\n:::: The Expert level C++ Programing level name is ::::\n ";
    for (int i = 0; i < size; i++)
    {
       if((ret+i)==1)
       {
           cout<<"Name is : "<<obj[i].name<<endl;
       }
    }
}

int expertLevel (struct SpaceT obj[],int size){
    int random[size];

    for (int i = 0; i < size; i++)
    {
        random[i]=0;
        if(obj[i].LevelOfCPP==1)
        {
            random[i]=1;
        }
    }
    return random[size];
}