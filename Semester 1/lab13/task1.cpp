#include <iostream>
#include <string>
using namespace std;
struct Book 
{
    int Id;
    string title;
    string author;
    int price;
};
int main(){
    system("clear");
    int size=5;
    Book book[size];

    for(int i=0; i<size; i++)
    {
        cout<<"Enter Book "<<i+1<<" ID : ";
        cin>>book[i].Id;
        cout<<"Enter Book "<<i+1<<" Title : ";
        cin>>book[i].title;
        cout<<"Enter Book "<<i+1<<" auther : ";
        cin>>book[i].author;
        cout<<"Enter Book "<<i+1<<" price : ";
        cin>>book[i].price;
        cout<<" _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    }

    cout<<" Have same author : "<<endl;
    for(int i=0; i<3; i++)
    {
        for (int j = i; j < size; j++)
        {
            if(book[j].author==book[i].author)
            {
                cout<<book[i].title<<endl;
                break;
            }
        }
        
    }
    cout<<endl;
}
