#include <iostream>
#include <cmath>

using namespace std;
int main()
{
      system("clear");
      int size = 100;
      double sum[20];
      double boxes[size];
      srand(time(NULL));                         // for different random value
      for (int i = 0, j = 0; i < size; j++, i++) // Reset all value = 0
      {
            boxes[i] = 0;
      }
      for (int i = 0, j = 0; i < size; j++, i++) // should be between 0.8 - 1.2
      {
            int ran = i;
            ran = rand() % 100;
            boxes[i] = rand() % 2 + 0.2;
            boxes[ran] = 1 - 0.2;
            if (boxes[i] == 0.2)
            {
                  boxes[i] += rand() % 2 + 0.7;
            }
      }
      for (int i = 0; i < size; i++)
      {
            cout << boxes[i] << " ";
            if (i % 5 == 0)
            {
                  cout << endl;
            }
      }
      int i = 0,s=0;
      double avg[20];
      cout<<endl;
      for (int j = 0; j < 20; j++)
      {
            
            for (i=0 ; i < 5; i++)
            {
                  sum[j] += boxes[s];
                  s++;
            }
            // s += 4;
            avg[j] = sum[j] / 5;
            cout<<"\n->" << j+1 <<" : The evg of 5 Boxes is : " << avg[j] << endl;
      }
      for (int i = 0; i < 20; i++) // if any box is lesser then 0.8 - 1.2
      {
            if (avg[i] < 0.8)
            {
                  cout << "Report Box " << i + 1 << " : " << avg[i] << endl;
            }
      }
}