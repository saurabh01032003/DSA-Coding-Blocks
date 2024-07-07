// // Merge two sortd array in constant time and without using extra spaces
// #include <iostream>
// using namespace std;
// int main()
// {

//     int n, m;
//     cin >> n >> m;

//     int arr[20];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int brr[10];
//     for (int i = 0; i < m; i++)
//     {
//         cin >> brr[i];
//     }

//     int i = n - 1;
//     int j = m - 1;
//     int k = n + m - 1;

//     while (i >= 0 and j >= 0)
//     {
//         if (arr[i] > brr[j])
//         {
//             arr[k] = arr[i];
//             k--;
//             i--;
//         }
//         else
//         {
//             arr[k] = brr[j];
//             k--;
//             j--;
//         }
//     }
//     while (i >= 0)
//     {
//         arr[k] = arr[i];
//         k--;
//         i--;
//     }
//     while (j >= 0)
//     {
//         arr[k] = brr[j];
//         k--;
//         j--;
//     }
//     for (int i = 0; i < n + m; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int n , m;
    cin >> n >> m;
    int arr[n+m] = {10, 30, 50, 70};
    int brr[m] = {20, 40, 60};
    int i = n-1;
    int j = m -1;
    int k = n + m - 1;
    while (i >= 0 and j >= 0)   
    {
        if(arr[i] > brr[j])
        {
            arr[k] = arr[i];
            k--;
            i--;
        }
        else{
            arr[k] = brr[j];
            k--;
            j--;
        }
    }

    while (i >=  0)
    {
        arr[k] = arr[i];
        k--;
        i--;
    }
    while(j >= 0)
    {
        arr[k] = brr[j];
        k--;
        j--;
    }

    for (int i = 0; i < m+n; i++)
    {
        cout << arr[i] << " ";
    }
}