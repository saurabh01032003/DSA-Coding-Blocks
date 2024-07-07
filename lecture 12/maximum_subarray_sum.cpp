// // // // #include <iostream>
// // // // #include <climits>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int arr[] = {10, 20, 30, 40, 50};
// // // //     int n = sizeof(arr) / sizeof(int);
// // // //     int lsf = INT_MIN;
// // // //     for (int i = 0; i <= n - 1; i++)
// // // //     {
// // // //         for (int j = i + 1; j < n; j++)
// // // //         {
// // // //             int sum = 0;
// // // //             for (int k = i; k <= j; k++)
// // // //             {
// // // //                 sum = sum + arr[k];
// // // //             }
// // // //             if (sum > lsf)
// // // //             {
// // // //                 lsf = sum;
// // // //             }
// // // //         }
// // // //     }
// // // //     cout << lsf;
// // // // }

// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int arr[] = {10,20,30,40,50};
// // //     int n = sizeof(arr)/sizeof(int);
// // //     int lsf = 0;
// // //     for (int i = 0; i <= n-2; i++)
// // //     {
// // //         for (int j = i+1; j < n; j++)
// // //         {
// // //             int sum = 0;
// // //             for (int k = i; k <= j; k++)
// // //             {
// // //                 sum = sum + arr[k];
// // //                 if (sum > lsf)
// // //                 {
// // //                     lsf = sum;
// // //                 }

// // //             }
// // //         }
// // //     }
// // //     cout <<"Largest subarray sum " << lsf;
// // // }

// // #include <iostream>
// // #include <climits>
// // using namespace std;
// // int main()
// // {
// //     int arr[] = {-2 ,1 ,-3 ,4 ,-1 ,2 ,1 ,-5 ,4};
// //     int n = sizeof(arr)/sizeof(int);
// //     int lsf = INT_MIN;
// //     for (int i = 0; i < n; i++) 
// //     {
// //         for (int j = i; j < n; j++)
// //         {
// //             int sum = 0;
// //             for (int k = i; k <= j; k++)
// //             {
// //                 sum = sum + arr[k];
// //                 if (sum > lsf)
// //                 {
// //                     lsf = sum;
// //                 }
// //             }
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
    
//     int sum = 0;
//     int lsf = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for( int j = i; j < n; j++)
//         {
//             // int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//                 if(sum > lsf)
//                 {
//                     lsf = sum;
//                 }
//             }
//             sum = 0;
//         }
//     }
//     cout << lsf;
// }

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(int);
    
    int lsf = INT_MIN;
    int start,end;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
                // lsf = max(lsf,sum);
                if(sum > lsf)
                {
                    start = i;
                    end = j;
                    lsf = sum;
                }
            }
        }
    }
    cout <<start <<" " << end << endl;
    cout << lsf;
    }