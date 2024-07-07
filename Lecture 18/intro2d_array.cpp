#include <iostream>
using namespace std;
int main()
{
    // int arr[10][10];

    // int m;
    // cout << "Enter number of Rows : ";
    // cin >> m;

    // int n;
    // cout << "Enter the number of Columns : ";
    // cin >> n;

    // // Taking input in 2D array

    // // Iterate over the rows
    // for (int i = 0; i < m; i++)
    // {
    //     // Iterate over the columns for each rows
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // cout << endl;

    // // Printing Elements of 2D array
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    // // Pointer and 2D array
    // cout << &arr[0][0] << " " << arr[0] << " " << arr << endl;
    // cout << &arr[1][0] << " " << arr[1] << " " << arr + 1 << endl;
    // cout << &arr[2][0] << " " << arr[2] << " " << arr + 2 << endl;

    // // Initialising 2D array
    // int brr[3][4] = {{1, 2, 3, 4},
    //                  {5, 6, 7, 8},
    //                  {9, 10, 11, 12}};

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << brr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int brr[3][4] = {{1, 2, 3, 4}, // putting value of row is optional i.e brr[][4] is also correct
                     {5, 6, 7, 8},
                     {9, 10}}; // if you put less elements in columns then you will get '0' as default value in remaining positions

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int crr[3][4] = {};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }
}