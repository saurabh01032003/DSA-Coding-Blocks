// #include <iostream>
// using namespace std;
// bool matrixSearch(int mat[][4],int m,int n,int target)
// {
//     for(int i = 0; i < m; i++)
//     {
//         for(int j = 0; j < n; j++)
//         {
//             if(mat[i][j] == target)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main()
// {
//     int mat[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int m = 4;
//     int n = 4;
//     int target;
//     cin >> target;
//     if(matrixSearch(mat,m,n,target))
//     {
//         cout << "True";
//     }else{
//         cout << "False";
//     }
// }

#include <iostream>
using namespace std;
bool matrixSearch(int mat[][3], int m, int n, int target)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int arr[][3] = {{50, 80, 20}, {90, 10, 70}, {60, 10, 40}};
    int m = 3;
    int n = 3;
    bool flag = true;
    int target;
    cin >> target;
    matrixSearch(arr, m, n, target) ? cout << target << " is found " << endl : cout << target << " is not found " << endl;
}