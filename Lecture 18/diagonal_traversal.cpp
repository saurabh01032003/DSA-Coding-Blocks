#include <iostream>
using namespace std;
void printDiagonal(int mat[][4], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        int i = 0;
        int length = min(m - i, n - j);
        for (int k = 0; k < length; k++)
        {
            cout << mat[i + k][j + k] << " ";
        }
        cout << endl;
    }

    
    for (int i = 1; i < m; i++)
    {
        int j = 0;
        int length = min(m - i, n - j);
        for (int k = 0; k < length; k++)
        {
            cout << mat[i + k][j + k] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int mat[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int m = 3;
    int n = 4;

    printDiagonal(mat, m, n);
}


// #include <iostream>
// using namespace std;
// void diagonalTraversal( int m,int n,int arr[m][n])// You cann't pass arguement like this
// {
//     for(int j = 0; j < n; j++)
//     {
//         int i = 0;
//         int length = min(m-i,n-j);
//         for(int k = 0; k < length; k++)
//         {
//             cout << arr[i+k][j+k] << " ";
//         }
//         cout << endl;
//     }

//     for(int i = 1; i < m; i++)
//     {
//         int j = 0; 
//         int length = min(m-i,n-j);
//         for(int k = 0; k < length; k++)
//         {
//             cout << arr[i+k][j+k] << " ";
//         }
//         cout << endl;
//     }

// }
// int main()
// {
//     int m,n;
//     cin >> m >> n;
//     int arr[m][n];
//     for(int i = 0; i < m; i++)
//     {
//         for(int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     diagonalTraversal(m,n,arr);
    
// }