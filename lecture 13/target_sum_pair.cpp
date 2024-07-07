// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int arr[1000];
// //     int n;
// //     cin >> n;
// //     for (int i = 0; i < n; i++)
// //     {
// //         cin >> arr[i];
// //     }
// //     int i = 0;
// //     int j = n - 1;
// //     int target;
// //     cin >> target;
// //     int count = 0;
// //     while (i < j)
// //     {
// //         if(arr[i] + arr[j] == target)
// //         {
// //             count++;
// //             cout << arr[i] << " "<< arr[j] << endl;
// //             i++;
// //             j--;
// //         }
// //         else if (arr[i] + arr[j] > target)
// //         {
// //             j--;
// //         }
// //         else if (arr[i] + arr[j] < target)
// //         {
// //             i++;
// //         }
// //     }
// //     cout <<"Number of pairs whose sum equal to " << target << " is " << count;
// // }

// // Target Sum pair using brute force
// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int arr[] = {10, 20, 30, 40, 50, 60};
// //     int n = sizeof(arr) / sizeof(int);
// //     int Target;
// //     cin >> Target;
// //     int count = 0;
// //     for (int i = 0; i < n - 1; i++)
// //     {
// //         for (int j = i + 1; j < n; j++)
// //         {
// //             if (arr[i] + arr[j] == Target)
// //             {
// //                 count++;
// //             }
// //         }
// //     }
// //     cout << count << endl;
// // }

// // Target Sum Pair using Two Pointers method
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10,20,30,40,50,60};
//     int n = sizeof(arr)/sizeof(int);
//     int i = 0;
//     int j = n-1;
//     int target;
//     cin >> target;
//     int count = 0;
//     while (i < j)
//     {
//         if(arr[i] + arr[j] == target)
//         {
//             count++;
//             i++;
//             j--;
//         }
//         else if(arr[i] + arr[j] > target)
//         {
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
//     cout << count << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50, 60};
//     int n = sizeof(arr) / sizeof(int);

//     int target;
//     cin >> target;
//     int count = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (target == arr[i] + arr[j])
//             {
//                 count++;
//             }
//         }
//     }
//     cout << count;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);

    int i = 0;
    int j = n-1;
    int target = 60;
    int count = 0;
    while (i < j)
    {
        if(arr[i] + arr[j] > target)
        {
            j--;
        }
        else if(arr[i] + arr[j] < target)
        {
            i++;
        }
        else{
            // arr[i] + arr[j] == target
            count++;
            i++;
            j--;
        }
    }
    cout << count;
}