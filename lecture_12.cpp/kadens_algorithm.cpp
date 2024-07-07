// // // // Kadens algorithm is used to find Maximum Subarray Sum in O(n) computations
// // // #include <iostream>
// // // #include <climits>
// // // using namespace std;
// // // int main()
// // // {
// // //     int arr[] = {10, 20, 30, 40, 50};
// // //     int n = sizeof(arr) / sizeof(int);

// // //     // It aquires linear space O(n) as we are creating an extre space

// // //     int X[100];;
// // //     X[0] = arr[0];
// // //     int lsf = INT_MIN;//brr[0];
// // //     for (int i = 1; i <= n-1; i++)
// // //     {
// // //         X[i] = max(arr[i],X[i-1]+arr[i]);
// // //         if (X[i] > lsf)
// // //         {
// // //             lsf = X[i];
// // //         }
// // //     }
// // //     cout << lsf;

// // //     // In constant O(1) space
// // //     // int x = arr[0];
// // //     // int lsf = INT_MIN;
// // //     // for(int i = 1; i < n; i++)
// // //     // {
// // //     //     x = max(x+arr[i], arr[i]);
// // //     //     if(x > lsf)
// // //     //     {
// // //     //         lsf = x;
// // //     //     }
// // //     // }
// // //     // cout << lsf;
// // // }

// // #include <iostream>
// // #include <climits>
// // using namespace std;
// // int main()
// // {
// //     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
// //     int n = sizeof(arr) / sizeof(int);
// //     int X[101];
// //     // X[0] = arr[0];
// //     // int lsf = INT_MIN;
// //     // for(int i = 1; i < n; i++)
// //     // {
// //     //     X[i] = max(X[i-1]+arr[i],arr[i]);
// //     //     if(X[i]> lsf)
// //     //     {
// //     //         lsf = X[i];
// //     //     }
// //     // }

// //     int x = arr[0];
// //     int lsf = INT_MIN;
// //     for (int i = 1; i < n; i++)
// //     {
// //         x = max(arr[i], x + arr[i]);
// //         if (x > lsf)
// //         {
// //             lsf = x;
// //         }
// //     }
// //     cout << lsf;
// // }

// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr)/sizeof(int);

//     int x[n];
//     x[0] = arr[0];
//     int lsf = INT_MIN;
//     for (int i = 1; i < n; i++)
//     {
//         x[i] = max(arr[i], x[i-1] + arr[i]);
//         // if(x[i] > lsf)
//         // {
//         //     lsf = x[i];
//         // }
//         lsf = max(lsf,x[i]);
//     }
//     cout << lsf;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(int);

    // int X[n];
    // X[0] = arr[0];
    int x = arr[0];
    int lsf = arr[0];
    for (int i = 1; i < n; i++)
    {
        // X[i] = max(X[i-1] + arr[i], arr[i]);
        // lsf = max(lsf, X[i]);
        x = max(x+arr[i], arr[i]);
        lsf = max(lsf,x);
    }
    cout << "Largest Subarray sum is : " << lsf << endl;
}