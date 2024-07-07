// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 20, 30, 40,50};
//     int n = sizeof(arr) / sizeof(int);
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << arr[k] <<" ";
//             }
//             cout << endl;
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(int);
//     for (int i = 0; i <= n - 2; i++)
//     {
//         for (int j = i + 1; j <= n - 1; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = { 10,20,30,40,50};
//     int n = sizeof(arr)/sizeof(int);
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}