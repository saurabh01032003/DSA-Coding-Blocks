// #include <iostream>
// using namespace std;
// void merge(int *arr, int s, int e, int m)
// {
//     int i = s;
//     int j = m + 1;
//     // int n = sizeof(arr)/sizeof(int);
//     int brr[100];
//     int k = s;
//     while (i <= m and j <= e)
//     {
//         if (arr[i] < arr[j])
//         {
//             brr[k] = arr[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             brr[k] = arr[j];
//             j++;
//             k++;
//         }
//     }

//     while (i <= m)
//     {
//         brr[k] = arr[i];
//         i++;
//         k++;
//     }
//     while (j <= e)
//     {
//         brr[k] = arr[j];
//         j++;
//         k++;
//     }

//     for(int l = s; l <= e; l++)
//     {
//         arr[l] = brr[l];
//     }
// }

// void sort(int *arr, int s, int e)
// {
//     // Base Case
//     if(s == e)
//     {
//         return;
//     }

//     // Recursive Case
//     int m = (s + e) / 2;
//     sort(arr, s, m);
//     sort(arr, m + 1, e);
//     merge(arr, s, e, m);
// }
// int main()
// {
//     int arr[] = {50, 40, 30, 20, 10, 10, 20, 30, 40, 50};
//     int n = sizeof(arr) / sizeof(int);
//     int s = 0;
//     int e = n - 1;
//     sort(arr, s, e);
//     for(int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

#include <iostream>
using namespace std;
void merge(int *arr, int s, int e, int mid)
{
    int brr[e - s + 1];
    int i = s;
    int j = mid + 1;
    int k = s;
    while (i <= mid and j <= e)
    {
        if (arr[i] <= arr[j])
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
        else if (arr[i] > arr[j])
        {
            brr[k] = arr[j];
            j++;
            k++;
        }
    }
    while (j <= e)
    {
        brr[k] = arr[j];
        j++;
        k++;
    }
    while (i <= mid)
    {
        brr[k] = arr[i];
        i++;
        k++;
    }

    // Copy all elements in brr to arr
    for (int l = s; l <= e; l++)
    {
        arr[l] = brr[l];
    }
}

void mergeSort(int *arr, int s, int e)
{
    // Base Case
    if (s > e)
    {
        // Invalid array(Empty Array)
        return;
    }

    if (s == e)
    {
        // Only one element in array
        return;
    }

    // Recursive Case
    int mid = s + (e - s) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e, mid);
}

int main()
{
    int arr[] = {50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);
    int s = 0;
    int e = n - 1;
    mergeSort(arr, s, e);
    cout << "Sorted array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}