// // // Here we are using extra spaces as we have created array crr and Complexity is O(n+m) as we have n+m comparisons
// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int arr[] = {10, 30, 50, 70};
// // //     int brr[] = {20, 40, 60};
// // //     int n = sizeof(arr) / sizeof(int);
// // //     int m = sizeof(brr) / sizeof(int);
// // //     int i = 0;
// // //     int j = 0;
// // //     int crr[m + n];
// // //     int k = 0;
// // //     while (i < n and j < m)
// // //     {
// // //         if (arr[i] < brr[j])
// // //         {
// // //             crr[k] = arr[i];
// // //             i++;
// // //             k++;
// // //         }
// // //         else
// // //         {
// // //             crr[k] = brr[j];
// // //             j++;
// // //             k++;
// // //         }
// // //     }
// // //     while (i < n)
// // //     {
// // //         crr[k] = arr[i];
// // //         i++;
// // //         k++;
// // //     }
// // //     while(j < m)
// // //     {
// // //         crr[k] = brr[j];
// // //         j++;
// // //         k++;
// // //     }
// // //     for (int i = 0; i <m + n; i++)
// // //     {
// // //         cout << crr[i] << " ";
// // //     }
// // // }

// // #include <iostream>
// // #include <algorithm>
// // using namespace std;
// // int main()
// // {
// //     int arr[] = {10,30,50,70};
// //     int brr[] = {20,40,60};
// //     int n = sizeof(arr)/sizeof(int);
// //     int m = sizeof(brr)/sizeof(int);
// //     int i = 0;
// //     int j = 0;
// //     int k = 0;
// //     // Here we are creating a new array crr i.e we are using extra spaces
// //     int crr[n+m];
// //     for (k ; k < n; k++)
// //     {
// //         crr[k]= arr[i];
// //         i++;
// //     }
// //     for (k = n ; k < n+m; k++)
// //     {
// //         crr[k] = brr[j];
// //         j++;
// //     }
// //     sort (crr, crr +(n+m)); // sort function has complexity (n+m)log(n+m)

// //     for (int i = 0; i < n+m; i++)
// //     {
// //         cout << crr[i] << " ";
// //     }

// // }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 30, 50, 70};
//     int n = sizeof(arr) / sizeof(int);

//     int brr[] = {20, 40, 60};
//     int m = sizeof(brr) / sizeof(int);
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     int crr[m+n];
//     while (i < n and j < m)
//     {
//         if (arr[i] > brr[j])
//         {
//             crr[k] = brr[j];
//             k++;
//             j++;
//         }
//         else
//         {
//             crr[k] = arr[i];
//             k++;
//             i++;
//         }
//     }
//     while (i < n)
//     {
//         crr[k] = arr[i];
//         k++;
//         i++;
//     }
//     while (j < m)
//     {
//         crr[k] = brr[j];
//         k++;
//         j++;
//     }

//     for (int i = 0; i < m + n; i++)
//     {
//         cout << crr[i] << " ";
//     }
//     cout << endl;
// }

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {10,30, 50, 70};
    int n = sizeof(arr)/ sizeof(int);

    int brr[] = {20, 40, 60};
    int m = sizeof(brr)/ sizeof(int);

    int crr[n+m];
    for (int i = 0; i < n; i++)
    {
        crr[i] = arr[i];
    }
    int idx = 0;
    for(int i = n; i < n+m; i++)
    {
        crr[i] = brr[idx];
        idx++;
    }
    sort(crr, crr+n+m);
    for (int i = 0; i < n+m; i++)
    {
        cout << crr[i] << " ";
    }
}