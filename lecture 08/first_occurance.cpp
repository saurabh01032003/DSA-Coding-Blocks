// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int n = sizeof(arr) / sizeof(int);
//     int target;
//     cin >> target;
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         if (arr[i] == target)
//         {
//             cout << "Target found at index " << i << endl;
//         }
//     }
//     if (i == n)
//     {
//         cout << "Target Not Found";
//     }

//     return 0;
// }

// Using Flag Variable
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int n = sizeof(arr) / sizeof(int);
    int target;
    cin >> target;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == target)
        {
            flag = false;
            cout << "Target element found at index " << i << endl;

        }

    }
    if(flag)
    {
        cout << "Element not found";
    }
}