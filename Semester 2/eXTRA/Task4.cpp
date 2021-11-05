#include <iostream>

using namespace std;
int main()
{

    bool s[8] = {};
    string OnOff;
    int sw;
    do{
        // system("clear");
    cout << "\nChoose Switch For ON and OFF \nFor Exit type 000 \n==> ";
    cin >> sw;
    if (sw==000)
    {
        break;
    }
    cout<<"ON / OFF : ";
    cin>>OnOff;
    
    

    if (sw == 1)
    {
        if(OnOff=="ON")
        {
        s[0] = true;
        }
        else if (OnOff=="OFF")
        {
        s[0] = false;
        }

    }
    else if (sw == 2)
    {
        if(OnOff=="ON")
        {
        s[1] = true;
        }
        else if (OnOff=="OFF")
        {
        s[1] = false;
        }
    }
    else if (sw == 3)
    {
        if(OnOff=="ON")
        {
        s[2] = true;
        }
        else if (OnOff=="OFF")
        {
        s[2] = false;
        }
    }
    else if (sw == 4)
    {
        if(OnOff=="ON")
        {
        s[3] = true;
        }
        else if (OnOff=="OFF")
        {
        s[3] = false;
        }
    }
    else if (sw == 5)
    {
        if(OnOff=="ON")
        {
        s[4] = true;
        }
        else if (OnOff=="OFF")
        {
        s[4] = false;
        }
    }
    else if (sw == 6)
    {
        if(OnOff=="ON")
        {
        s[5] = true;
        }
        else if (OnOff=="OFF")
        {
        s[5] = false;
        }
    }
    else if (sw == 7)
    {
        if(OnOff=="ON")
        {
        s[6] = true;
        }
        else if (OnOff=="OFF")
        {
        s[6] = false;
        }
    }
    else if (sw == 8)
    {
        if(OnOff=="ON")
        {
        s[7] = true;
        }
        else if (OnOff=="OFF")
        {
        s[7] = false;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        if (s[i] == true)
        {
            cout << "The switch " << i + 1 << " is ON " << endl;
            continue;
        }
        cout << "The switch " << i + 1 << " is OFF " << endl;
    }
    }while(sw!=000);
}