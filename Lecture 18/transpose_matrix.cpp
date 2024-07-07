// // Transpose of matrix means row changes into column

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

//     int n = 4;
//     int m = 4;



//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if(i < j)
//             {
//                  swap(arr[i][j],arr[j][i]);
//             }
//         }
//         cout << endl;
//     }

//         for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//            cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[][4] = {{11,12,13,14},{15,16,17,18},{19,20,21,22},{23,24,25,26}};
    int m = 4;
    int n = 4;
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i > j)   // if(j > i)
            {
                swap(arr[i][j],arr[j][i]);
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}