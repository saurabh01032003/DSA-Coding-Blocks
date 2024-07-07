// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[1000];
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int fl = INT_MIN;
//     int sl = INT_MIN;
//     int tl = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > fl)
//         {
//             tl = sl;
//             sl = fl;
//             fl = arr[i];
//         }
//         else if (arr[i] > sl)
//         {
//             tl = sl;
//             sl = arr[i];
//         }
//         else if(arr[i] > tl)
//         {
//                 tl = arr[i];

//         }
//     }
//     cout << fl << " " << sl << " " << tl << " " << endl;
// }

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {20, 5, 0, 25, 15, 10};
    int n = sizeof(arr) / sizeof(int);
    int fl = INT_MIN;
    int sl = INT_MIN;
    int tl = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > fl)
        {
            tl = sl;
            sl = fl;
            fl = arr[i];
        }
        else if ((arr[i] > sl))
        {
            tl = sl;
            sl = arr[i];
        }
        else if (arr[i] > tl)
        {
            tl = arr[i];
        }
    }
    cout << "FIRST LARGEST " << fl << endl;
    cout << "SECOND LARGEST " << sl << endl;
    cout << "THIRD LARGEST " << tl << endl;
}