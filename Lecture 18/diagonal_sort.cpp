#include <iostream>
#include <algorithm>
using namespace std;

void diagonalSort(int arr[4][4], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        int i = 0;
        int diag_length = min(m - i, n - j);
        int brr[diag_length];
        for (int k = 0; k < diag_length; k++)
        {
            brr[k] = arr[i + k][j + k];
        }
        sort(brr, brr + diag_length);
        for (int l = 0; l < diag_length; l++)
        {
            arr[i + l][j + l] = brr[l];
        }
        // for (int y = 0; y < diag_length; y++)
        // {
        //     cout << arr[i + y][j + y] << " ";
        // }
        // cout << endl;
    }
    for (int i = 1; i < m; i++)
    {
        int j = 0;
        int diag_length = min(m - i, n - j);
        int brr[diag_length];
        for (int k = 0; k < diag_length; k++)
        {
            brr[k] = arr[i + k][j + k];
        }
        sort(brr, brr + diag_length);
        for (int l = 0; l < diag_length; l++)
        {
            arr[i + l][j + l] = brr[l];
        }
        // for (int y = 0; y < diag_length; y++)
        // {
        //     cout << arr[i + y][j + y] << " ";
        // }
        // cout << endl;
    }
}
int main()
{
    int m = 4;
    int n = 4;

    int arr[4][4] = {{1, 3, 10, 4},
                     {13, 14, 15, 2},
                     {11, 16, 9, 12},
                     {8, 7, 5, 6}};
 
    diagonalSort(arr, m, n);
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}