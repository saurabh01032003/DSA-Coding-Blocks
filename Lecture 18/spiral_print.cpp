#include <iostream>
using namespace std;
int main()
{
    // int m;
    // int n;
    // cin >> m >> n;
    // int arr[m][n];
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    int m = 4;
    int n = 4;
    int arr[][4] = {{11, 12, 13, 14},
                    {22, 23, 24, 15},
                    {21, 26, 25, 16},
                    {20, 19, 18, 17}};
    int sr = 0;
    int sc = 0;
    int er = m - 1;
    int ec = n - 1;
    while (sr <= er and sc <= ec)
    {
        // Print Start row
        for (int i = sc; i <= ec; i++)
        {
            cout << arr[sr][i] << " ";
        }
        sr++;

        // Print End Column
        for (int i = sr; i <= er; i++)
        {
            cout << arr[i][ec] << " ";
            // ec--;
        }
        ec--;

        // Print end Row
        if (sc <= er)
        {
            for (int i = ec; i >= sc; i--)
            {
                cout << arr[er][i] << " ";
                // er--;
            }
            er--;
        }

        // Print start column
        if (sr <= er)
        {
            for (int i = er; i >= sr; i--)
            {
                cout << arr[i][sc] << " ";
            }
            sc++;
        }
    }
}