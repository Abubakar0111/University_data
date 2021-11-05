#include <iostream>

using namespace std;
int main()
{

    int size_of_1st_array_row, size_of_2nd_array_row;
    int size_of_1st_array_cal, size_of_2nd_array_cal;

    int sum[100][100], i, j;

    cout << "Enter number of rows For 1st Matrix : ";
    cin >> size_of_1st_array_row;

    cout << "Enter number of columns For 1st Matrix : ";
    cin >> size_of_1st_array_cal;

    int a[size_of_1st_array_row][size_of_1st_array_cal];

    for (i = 0; i < size_of_1st_array_row; ++i)
    {
        for (j = 0; j < size_of_1st_array_cal; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }

    cout << "Enter number of rows For 2nd Matrix : ";
    cin >> size_of_2nd_array_row;

    cout << "Enter number of columns For 2nd Matrix : ";
    cin >> size_of_2nd_array_cal;

    int b[size_of_2nd_array_row][size_of_2nd_array_cal];

    cout << "Enter elements of 2nd matrix: " << endl;
    for (i = 0; i < size_of_2nd_array_row; ++i)
    {
        for (j = 0; j < size_of_2nd_array_cal; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    }
    int transpose[size_of_2nd_array_row][size_of_2nd_array_cal];

    if (size_of_1st_array_cal != size_of_2nd_array_row)
    {
        cout << "\nMultiplication Not Possible!\n";
        for (int i = 0; i < size_of_2nd_array_row; ++i)
        {
            for (int j = 0; j < size_of_2nd_array_cal; ++j)
            {
                transpose[j][i] = b[i][j];
            }
        }
        int pro[100][100];
        for (i = 0; i < size_of_1st_array_row; i++)
        {
            for (j = 0; j < size_of_2nd_array_cal; j++)
            {
                pro[i][j] = 0;

                for (int k = 0; k < size_of_1st_array_cal; k++)
                    pro[i][j] = pro[i][j] + (a[i][k] * transpose[k][j]);
            }
        }
        for (i = 0; i < size_of_1st_array_row; i++)
        {
            for (j = 0; j < size_of_2nd_array_cal; j++)
            {
                cout << pro[i][j] << "  ";
            }
            cout << endl;
        }
        cout << "Sum of resultent of two matrix is: " << endl;
        int allSum = 0;
        for (i = 0; i < size_of_1st_array_row; ++i)
        {
            for (j = 0; j < size_of_1st_array_cal; ++j)
            {
                // cout << pro[i][j] << "  ";
                allSum += pro[i][j];
            }
        }
        cout << "\nAll Sum is : " << allSum << endl;

        return 0;
    }

    int pro[100][100];
    for (i = 0; i < size_of_1st_array_row; i++)
    {
        for (j = 0; j < size_of_2nd_array_cal; j++)
        {
            pro[i][j] = 0;

            for (int k = 0; k < size_of_1st_array_cal; k++)
                pro[i][j] = pro[i][j] + (a[i][k] * b[k][j]);
        }
    }

    cout << "\n\nThe Product matrix is : \n";

    for (i = 0; i < size_of_1st_array_row; i++)
    {
        for (j = 0; j < size_of_2nd_array_cal; j++)
        {
            cout << pro[i][j] << "  ";
        }
        cout << endl;
    }

    // // Adding Two matrices
    // for (i = 0; i < size_of_1st_array_row; i++)
    // {
    //     for (j = 0; j < size_of_1st_array_cal; j++)
    //     {
    //         sum[i][j] = a[i][j] + b[i][j];
    //     }
    // }

    // Displaying the resultant sum matrix.
    cout << endl
         << "Sum of resultent of two matrix is: " << endl;
    int allSum = 0;
    for (i = 0; i < size_of_1st_array_row; ++i)
    {
        for (j = 0; j < size_of_1st_array_cal; ++j)
        {
            // cout << pro[i][j] << "  ";
            allSum += pro[i][j];
        }
    }
    cout << "\nAll Sum is : " << allSum << endl;

    return 0;
}