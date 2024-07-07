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
//     int k;
//     cout << "Enter the value of k : ";
//     cin >> k;
//     int j = n - k - 1;
//     for (int i = 0; i < n - k; i++)
//     {
//         swap(arr[i], arr[j]);
//     }
//     int m = n - 1;
//     for (int i = n - k; i < n; i++)
//     {
//         swap(arr[n - k], arr[n - 1]);
//     }
//     int l = n - 1;
//     for (int i = 0; i < l; i++)
//     {
//         swap(arr[i], arr[l]);
//         l--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }




// love this code
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    int k;
    cout << "Enter the value of k ";
    cin >> k;
    // Reverse element from index 0 to (n-k-1)
    int j = n - k - 1;
    for (int i = 0; i < j; i++)
    {
        swap(arr[i], arr[j]);
        j--;
    }
    // Reverse element from (n-k) th index to (n-1) index
    int l = n - 1;
    for (int i = n - k; i < l; i++)
    {
        swap(arr[i], arr[l]);
        l--;
    }
    // Now reverse whole element form 0th to (n-1)th index
    int m = n - 1;
    for (int i = 0; i < m; i++)
    {
        swap(arr[i], arr[m]);
        m--;
    }
    // Now Print the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}