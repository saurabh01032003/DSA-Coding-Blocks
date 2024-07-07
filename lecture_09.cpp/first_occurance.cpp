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
//     cout << "Enter target element : ";
//     cin >> target;
//     int i;
//     for ( i = 0; i < n; i++)
//     {
//         if (arr[i] == target)
//          {
//             cout <<"Element found at index : " << i;
//             break;
//         }
//     }
//     if(i==n)
//     {
//         cout <<"Element not found";
//     }

//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    int target;
    cout <<"Enter the target element : " ;
    cin >> target;
    int i;
    for( i = 0 ; i < n;i++)
    {
        if(arr[i] == target)
        {
            cout << "Element found at " << i <<"th index" << endl;
            break;
        }
    }
    if (i == n)
    {
        cout <<"Element not found ";
    }
}