#include <iostream>
using namespace std;
int f(int *arr, int i, int n, int target)
{
    // // Base Case
    // if (i == n - 1)
    // {
    //     if (arr[i] == target)
    //         return i;
    //     else
    //     {
    //         return -1;
    //     }
    // }
    if (i == n)
    {
        return -1;
    }

    // Recursive Case
    if (target == arr[i])
    {
        return i;
    }
    return f(arr, i + 1, n, target);
}
int main()
{
    int arr[] = {10, 20, 80, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    cout << f(arr, 0, n, 50);
}

// #include <iostream>
// using namespace std;
// int f(int *arr, int n, int i, int target)
// {
//     // // Base Case
//     // if (i == n - 1)
//     // {
//     //     if (arr[i] == target)
//     //     {
//     //         return i;
//     //     }
//     //     else
//     //     {
//     //         return -1;
//     //     }
//     // }

//     if (i == n)
//     {
//         return -1;
//     }

//     // Recursive Case
//     if (target == arr[i])
//     {
//         return i;
//     }

//     return f(arr, n, i + 1, target);
// }
// int main()
// {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(int);
//     int target = 50;
//     cout << f(arr, n, 0, target) << endl;
// }