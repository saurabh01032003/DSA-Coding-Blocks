// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {

// Brute Force == O(n*k)

//     vector<int> v = {1, 4, 2, 7, 6, 3, 5};
//     int n = v.size();

//     int k = 4;
//     int maxSum = 0;
//     for(int i = 0; i <= n-k;i++)
//     {
//         int subArraySum = 0;

           //Track subarray sum of each subarray of length 4
//         for(int j = i; j < i+k;j++)
//         {
//             subArraySum += v[j];
//         }
//         maxSum = max(maxSum,subArraySum);
//     }
//     cout << "Maximum Subarray Sum = " << maxSum << endl;
// }

// #################################################################################################################################
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 4, 2, 7, 6, 3, 5};
    int k = 4;
    int n = v.size();

    int i = 0; //To store the index of Start of window
    int j = 0; //To Store the index of End of window

    int window_Sum = 0;//To Store the window Sum

    // Compute the Sum of 1st Window

    while (j < k)
    {
        window_Sum += v[j];
        j++;
    }

    int maxSum = 0;//To track maximum window sum

    // Compute the Sum of remaining Windows
    while (j < n)
    {
        // Slide the Window
        window_Sum = window_Sum - v[i];
        i++;
        window_Sum = window_Sum + v[j];

        maxSum = max(maxSum, window_Sum);
        j++;
    }
    cout << maxSum << endl;
}