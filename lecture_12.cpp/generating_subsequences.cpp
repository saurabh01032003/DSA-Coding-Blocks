// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int arr[] = {10,20,30};
//     int n = sizeof(arr)/sizeof(int);
//     for(int i = 0; i < pow(2,n);i++)
//     {
//         for (int j = 0; j < n;j++)
//         {
//             if((i>>j)&1==1)
//             {
//                 cout << arr[j] <<" ";
//             }
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int arr[] = {10,20,30};
//     int n = sizeof(arr)/sizeof(int);
//     for(int i = 0; i < pow(2,n) ; i++)
//     {
//         for (int j = 0;j < n; j++ )
//         {
//             if(((i >>j) & 1) == 1)
//             {
//                 cout << arr[j] <<" ";
//             }
//         }
//        cout <<endl;
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int arr[] = {10, 20, 30};
//     int n = sizeof(arr) / sizeof(int);
//     for (int i = 0; i < pow(2, n); i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if ((i >> j) & 1 == 1)
//             {
//                 cout << arr[j] << " ";
//             }
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int arr[] = {10,20,30};
//     int n = sizeof(arr)/sizeof(int);
//     for (int i = 0; i < pow(2,n); i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if((i>>j)&1 == 1)
//             {
//                 cout << arr[j] << " ";//jth index value which is to be included
//             }
//         }
//         cout << endl;
//     }
// }

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < pow(2, n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i >> j) & 1 == 1)
            {
                cout << arr[j] <<" ";
            }
        }
        cout << endl;
    }
}