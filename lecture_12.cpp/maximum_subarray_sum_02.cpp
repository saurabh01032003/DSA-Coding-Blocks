// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(int);
//     int csum[101];
//     csum[0] = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         csum[i] = csum[i - 1] + arr[i - 1];
//     }

//     // for (int i = 0; i <= n; i++)
//     // {
//     //     cout << csum[i] << " ";
//     // }
//     int lsf = INT_MIN;
//     for (int i = 0; i <= n - 2; i++)
//     {
//         for (int j = i; j <= n - 1; j++)
//         {
//             int sum = csum[j + 1] - csum[i - 1];
//             if (sum > lsf)
//             {
//                 lsf = sum;
//             }
//         }
//     }
//     cout << "Maximum sum of the Subarray " << lsf;

//     // for (int i = 0; i <= n; i++)
//     // {
//     //     cout << csum[i] << " ";
//     // }
// }

// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr) / sizeof(int);
//     int csum[101];
//     csum[0] = arr[0];
//     for (int i = 1; i <= n; i++)
//     {
//         csum[i] = csum[i - 1] + arr[i - 1];
//     }
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = csum[j + 1] - csum[i];
//             if (sum > maxSum)
//             {
//                 maxSum = sum;
//             }
//         }
//     }
//     cout << maxSum << endl;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << csum[i] <<" ";
//     // }
// }


#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(int);

    int csum[n+1];
    csum[0] = 0;
    for (int i = 1; i < n+1; i++)
    {
        csum[i] = csum[i-1] + arr[i-1];
    }

    // for (int i = 0; i < n+1; i++)
    // {
    //     cout << csum[i] <<" ";
    // }
    int lsf = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int Sij = csum[j+1]- csum[i];
            if(Sij > lsf)
            {
                lsf = Sij;
            }

        }
    }
    cout << lsf;
}