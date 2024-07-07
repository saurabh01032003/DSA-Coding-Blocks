// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[100];
//     int n;
//     cout << "Enter the value of n : ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Element to be found ";
//     cin >> target;

//     // For last Occurance
//     int i;
//     for (i = n - 1; i >= 0; i--)
//     {
//         if(arr[i] == target)
//         {
//             cout << "Element found at index " << i;
//             break;
//         }
//     }
//     if(i == -1)
//     {
//         cout << "Element not found";
//     }

//         return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target element : ";
    cin >> target;
    int i;
    for (i = n - 1; i >= 0; i--){
        if(target == arr[i])
        {
            cout << "Element found at " << i <<"th index from last";
            break;
        }
    }
    if (i == -1)
    {
        cout << "Element not found";
    }
}