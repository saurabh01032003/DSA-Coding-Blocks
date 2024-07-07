// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[] = {1,2,3,-5,-6,-7,4,5};
//     int n = sizeof(arr)/sizeof(int);

//     int x = arr[0];
//     int lss = INT_MIN;

//     int y = arr[0];
//     int sss = INT_MAX;
//     int sum = arr[0]; 
//     for (int i = 1; i < n; i++)
//     {
//         sum += arr[i];
//         x = max(x + arr[i], arr[i]);
//         lss = max(x,lss);

//         y = min(y+arr[i] , arr[i]);
//         sss = min(y, sss);

//     }
//     int ans_1 = sum - sss;
//     int ans_2 = lss;
//     cout << max(ans_1,ans_2);

// }

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,-5,-6,-7,4,5};
    int n = sizeof(arr)/sizeof(int);

    int x = arr[0];
    int lsf = arr[0];

    int y = arr[0];
    int ssf = arr[0];

    int total_sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        total_sum += arr[i];
        x = max(x+arr[i], arr[i]);
        lsf = max(x,lsf);

        y = min(y + arr[i], arr[i]);
        ssf = min(y, ssf);
    }
    cout << "Maximum  Circular Subarray sum  is = " << max(lsf,total_sum - ssf);

}