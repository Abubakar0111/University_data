#include <iostream>
using namespace std;
int main()
{
   char num[100];
   int count=0;
    cout<<"Enter a string / value : ";
    cin.getline(num,100);
  
    int x=0;
    while (num[x] != '\0')   ///For counting and printing the character
   {
      x++;
   }

    for(int i=0; i<x; i++)
    {
            if(num[i]=='a')
            {
                count++;
            }
            if(num[i]=='e')
            {
                count++;
            }
            if(num[i]=='i')
            {
                count++;
            }
            if(num[i]=='o')
            {
                count++;
            }
            if(num[i]=='u')
            {
                count++;
            }
    }
    cout<<" Vowel words found : "<<count<<endl;
}
