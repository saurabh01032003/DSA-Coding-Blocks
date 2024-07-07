// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 6, 5, 2, 4, 3};
//     int n = sizeof(arr) / sizeof(int);

//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             // We have reached to array starting at ith index and ending at jth index
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }
//             if (sum % n == 0)
//             {
//                 count++;
//             }
//             cout << endl;
//         }
//     }
//     cout << count << endl;
// }

// // Find Number of Good subarrays using csum array {Time complexity is O(n^2) and extra space O(n) as we have created an array csum of (n+1) size}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 6, 5, 2, 4, 3};
//     int n = sizeof(arr) / sizeof(int);

//     // Creater csum array of (n+1) size
//     int csum[n + 1];
//     csum[0] = 0;
//     for (int i = 1; i < n+1; i++)
//     {
//         csum[i] = csum[i - 1] + arr[i-1];
//     }

//     for (int i = 0; i < n+1; i++)
//     {
//         cout << csum[i] <<" ";
//     }
//     cout << endl;

//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             // For subarray sum which starts at ith index and ends at jth index
//             int Sij = csum[j + 1] - csum[i];
//             cout << Sij <<" ";
//             if ((Sij % n) == 0)
//             {
//                 count++;
//             }
//         }
//     }
//     cout << endl;
//     cout << count << endl;
// }

// In O(n) - time complexity and O(n) space as we have created an extra frequency array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {1, 6, 5, 2, 4, 3};
//     int n = sizeof(arr) / sizeof(int);

//     int frequency[n];
//     frequency[0] = 1;
//     for (int i = 1; i < n; i++)
//     {
//         frequency[i] = 0;
//     }

//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//         frequency[sum % n]++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << frequency[i] << " ";
//     }
//     cout << endl;

//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int x = frequency[i];
//         if (x >= 2)
//         {
//             count += (x * (x - 1)) / 2;
//         }
//     }
//     cout << count << endl;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 6, 5, 2, 4, 3};
    int n = sizeof(arr)/sizeof(int);

    int frequency[n];
    frequency[0] = 1;
    for (int i = 1; i < n; i++)
    {
        frequency[i] = 0;
    }

    int csum = 0;
    for (int i = 0; i < n; i++)
    {
        csum += arr[i];
        frequency[csum%n]++;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x = frequency[i];
        if(x >= 2)
        {
            count += (x*(x-1))/2; //xC2 == (x*(x-1))/2 Number of Subarrays
        }
    }

    cout << count << endl;
}