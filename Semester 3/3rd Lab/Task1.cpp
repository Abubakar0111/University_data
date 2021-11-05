#include <iostream>

#define UNION
#define INTERSECTION

using namespace std;

#ifdef UNION
template <typename T>
void Union(T arr1[], T arr2[], int len1, int len2)
{

    int f, i, j, k = 0;
    int union_Arr[100] = {};

    for (i = 0; i < len1; i++)
    {
        union_Arr[k] = arr1[i];
        k++;
    }
    cout << "K is : " << k << endl;
    for (i = 0; i < len1; i++)
    {
        cout << " " << arr2[i] << "\n";
    }

    for (i = 0; i < len2; i++)
    {
        f = 0;
        for (j = 0; j < len1; j++)
        {
            if (arr1[j] == arr2[i])
            {

                f = 1;
                // break;
            }
        }
        cout << "F is : " << f << endl;

        if (f == 0)
        {

            union_Arr[k] = arr2[i];
            k++;
            // for (i = 0; i < len1; i++)
            // {
            //     cout << " " << union_Arr[i] << "\n";
            // }
        }
    }

    cout << "Union of two array is:";
    for (i = 0; i < k; i++)
    {
        cout << union_Arr[i] << " ";
    }
}
#endif //UNION
#ifdef INTERSECTION

void Intersection(int arr1[], int arr2[], int len1, int len2)
{

    int intersectin_Arr[100] = {};
    int i, j, k = 0;

    for (i = 0; i < len1; i++)
    {
        for (j = 0; j < len2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                intersectin_Arr[k] = arr1[i];
                k++;
            }
        }
    }
    cout << "\nIntersection of two array is : ";
    for (i = 0; i < k; i++)
    {
        cout << intersectin_Arr[i] << " ";
    }
}
#endif //INTERSECTION

int main()
{

    int length_One, Length_Two;

    cout << "Enter size of 1st array:";
    cin >> length_One;
    int arr_ONE[length_One];

    cout << "Enter 1st array elements : \n";
    for (int i = 0; i < length_One; i++)
    {
        cin >> arr_ONE[i];
    }
    cout << "Enter size of 2nd array:";
    cin >> Length_Two;

    int arr_TWO[Length_Two];

    cout << "Enter 2nd array elements : \n";
    for (int i = 0; i < Length_Two; i++)
    {
        cin >> arr_TWO[i];
    }

#ifdef UNION
    Union(arr_ONE, arr_TWO, length_One, length_One);
#endif //UNION

#ifdef INTERSECTION
    Intersection(arr_ONE, arr_TWO, length_One, Length_Two);
#endif //INTERSECTION

    return 0;
}