// // #include <iostream>
// // using namespace std;
// // int f(int *arr, int n, int i)
// // {
// //     // // Base Case
// //     // if (i == n)
// //     // {
// //     //     return 0;
// //     // }
// //     if (i == n - 1)
// //     {
// //         return arr[n - 1];
// //     }

// //     // Recursive Case
// //     int A = f(arr, n, i + 1);
// //     return arr[i] + A;
// // }
// // int main()
// // {
// //     int arr[] = {10, 20, 30, 40, 50};
// //     int n = sizeof(arr) / sizeof(int);

// //     cout << f(arr, n, 0);
// // }

// #include <iostream>
// using namespace std;
// int f(int *arr, int i, int n)
// {
//     // Base Case
//     if (i == n - 1)
//     {
//         return arr[n - 1];
//     }

//     // Recursive Case
//     return arr[i] + f(arr, i + 1, n);
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(int);
//     cout << f(arr, 0, n);
// }

// #include <iostream>
// using namespace std;
// int f(int *arr, int i, int n)
// {
//     // Base Case
//     if (i == n-1)
//     {
//         return arr[n-1];
//     }

//     // Recursive Case
//     return f(arr,i+1,n) + arr[i];
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(int);
//     cout << f(arr,0, n);
// }

// #include <iostream>
// using namespace std;
// int f(int *arr, int i, int n)
// {
//     // // Base Case
//     // if (i == n - 1)
//     // {
//     //     return arr[n - 1];
//     // }

//     //Empty array exists
//     if(i == n)
//     {
//         return 0;
//     }

//     // Recursive Case
//     int A = f(arr, i + 1, n);
//     return arr[i] + A;
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(int);
//     cout << f(arr, 0, n);
// }

// #include <iostream>
// using namespace std;
// int f(int *arr, int i)
// {
//     // Base Case
//     // if (i == 0)
//     // {
//     //     return arr[0];
//     // }

//     if(i == -1)
//     {
//         return 0;
//     }
//     // Recursive Case
//     int A = f(arr, i - 1);
//     return A + arr[i];
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(int);
//     cout << f(arr, n - 1) << endl;
// }

// #include <iostream>
// using namespace std;
// int f(int *arr, int n, int i)
// {
//     // Base Case
//     if (i == n)
//     {
//         return 0;
//     }

//     // Recursive Case
//     return arr[i] + f(arr, n, i + 1);
// }
// int main()
// {
//     int arr[] = {100, 20, 80, 40, 50};
//     int n = sizeof(arr) / sizeof(int);
//     cout << f(arr, n, 0) << endl;
// }

// #include <iostream>
// using namespace std;
// int f(int *arr,int i)
// {
//     // Base Case
//     if(i == -1)
//     {
//         return 0;
//     }

//     // Recursive Case
//     return arr[i] + f(arr,i-1);
// }
// int main()
// {
//     int arr[] = {60,20,30,40,50};
//     int n = sizeof(arr)/sizeof(int);
//     cout << f(arr,n-1) << endl;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    
}