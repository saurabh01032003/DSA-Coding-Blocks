// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int arr[7] = {10,11,12,13,14,15,16};
// //     int n = sizeof(arr) / sizeof(int);
// //     int i = 0;
// //     int j = n-1;
// //     for(int i = 0 ; i < j;i++)
// //     {
// //         swap(arr[i], arr[j]);
// //         j--;
// //     }
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << arr[i] <<" ";
// //     }
// // }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[100];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int j = n - 1;
//     for (int i = 0; i < j; i++)
//     {
//         swap(arr[i], arr[j]);
//         j--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {11, 12, 13, 14, 15};
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}