// // #include <iostream>
// // using namespace std;
// // int partition(int arr[], int s, int e)
// // {
// //     int pivot = e;
// //     int j = s;
// //     int i = s - 1;
// //     while (j < e)
// //     {
// //         if (arr[j] < arr[pivot])
// //         {
// //             i++;
// //             swap(arr[i], arr[j]);
// //         }
// //         j++;
// //     }

// //     swap(arr[i + 1], arr[pivot]);
// //     return i+1;
// // }
// // void quick_sort(int *arr, int s, int e)
// // {
// //     // Base Case
// //     if(s >= e)
// //     {
// //         return;
// //     }

// //     // Recursive Case
// //     int pivot_idx = partition(arr, s, e);

// //     quick_sort(arr, s, pivot_idx - 1);

// //     quick_sort(arr, pivot_idx + 1, e);
// // }
// // int main()
// // {
// //     int arr[] = {60, 50, 20, 10, 40, 30};
// //     int n = sizeof(arr) / sizeof(int);
// //     int s = 0;
// //     int e = n - 1;
// //     quick_sort(arr, s, e);
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout << arr[i] << " ";
// //     }
// // }

// #include <iostream>
// using namespace std;
// int partition(int *arr, int s, int e)
// {
//     int pivot = arr[s];
//     int count = 0;
//     for (int i = s + 1; i <= e; i++)
//     {
//         if (arr[i] < pivot)
//         {
//             count++;
//         }
//     }
//     int pivotIdx = s + count;
//     swap(arr[s], arr[pivotIdx]);

//     int i = s;
//     int j = e;
//     while (i < pivotIdx and j > pivotIdx)
//     {
//         while (arr[i] < arr[pivotIdx])
//         {
//             i++;
//         }
//         while (arr[j] > arr[pivotIdx])
//         {
//             j--;
//         }
//         if(i < pivotIdx and j > pivotIdx)
//         {
//             swap(arr[i], arr[j]);
//         }
//         return pivotIdx;
//     }

//     return pivotIdx;
// }
// void quickSort(int *arr, int s, int e)
// {
//     // Base Case
//     if (s >= e)
//     {
//         return;
//     }

//     // Recursive Case
//     int pivotIndex = partition(arr, s, e);

//     quickSort(arr, s, pivotIndex - 1);

//     quickSort(arr, pivotIndex + 1, e);
// }
// int main()
// {
//     int arr[] = {3, 5, 1, 8, 2, 4};
//     int n = sizeof(arr) / sizeof(int);
//     int s = 0;
//     int e = n - 1;
//     quickSort(arr, s, e);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// Classroom Strategy
#include <iostream>
using namespace std;
// int partition(int *arr,int s, int e)
// {
//     int pivot = e;
//     int i = s-1;
//     // int j = s;

//     for(int j = s; j < e; j++)
//     {
//         if(arr[j] < arr[pivot])
//         {
//             i++;
//             swap(arr[j],arr[i]);
//         }
//     }
//     swap(arr[i+1],arr[pivot]);
//     return i+1;
// }

int partition(int *arr, int s, int e)
{
    int pivot = s;
    int i = s;
    int j = e;
    int count = 0;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i] < arr[pivot])
        {
            count++;
        }
    }

    int pivot_idx = s + count;
    swap(arr[pivot_idx], arr[pivot]);
    while (i < pivot_idx and j > pivot_idx)
    {
        while (arr[i] < arr[pivot_idx])
        {
            i++;
        }
        while (arr[j] > arr[pivot_idx])
        {
            j--;
        }
        if (i < pivot_idx and j > pivot_idx)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivot_idx;
}
void quickSort(int *arr, int s, int e)
{
    // Base Case
    if (s >= e)
    {
        return;
    }

    // Recursive Case
    int p = partition(arr, s, e);

    quickSort(arr, s, p - 1);

    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[] = {60, 50, 20, 10, 40, 30};
    int n = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = n - 1;
    quickSort(arr, s, e);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}