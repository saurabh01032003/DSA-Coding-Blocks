#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int arr[] = {5, 2, 0, 4, 1, 3, 6};
    int n = sizeof(arr) / sizeof(int);

    stack<int> s;

//     // Approach-01 -O(n^2)
//     for (int i = 0; i < n; i++)
//     {
//         bool flag = true;
//         for (int j = i - 1; j >= 0; j--)
//         {
//             if (arr[j] > arr[i])
//             {
//                 flag = false;
//                 cout << arr[j] << " ";
//                 break;
//             }
//         }
//         if (flag == true)
//         {
//             cout << -1 << " ";
//         }
//     }

//     cout << endl;

// Approch-02  O(n)
for (int i = 0; i < n; i++)
{
    while (!s.empty() and s.top() < arr[i])
    {
        s.pop();
    }

    if (s.empty())
    {
        cout << -1 << " ";
    }
    else
    {
        cout << s.top() << " ";
    }

    s.push(arr[i]);
}
}

// *******************************************************************************************************************************************************************************************************
// #include <iostream>
// #include <vector>
// #include <stack>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     vector<int> arr = {5, 2, 0, 4, 1, 3, 6};
//     int n = arr.size();

    // // Approach - 01
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     bool flag = true;
    //     for (int j = i - 1; j >= 0; j--)
    //     {
    //         if (arr[j] > arr[i])
    //         {
    //             flag = false;
    //             v.push_back(arr[j]);
    //         }
    //     }
    //     if (flag == true)
    //     {
    //         v.push_back(-1);
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // Approach - 02
    
    // stack<int> s;
    // vector<int> v2;
    // for (int i = 0; i < n; i++)
    // {
    //     while (!s.empty() and s.top() < v[i])
    //     {
    //         s.pop();
    //     }

    //     if (s.empty())
    //     {
    //         v2.push_back(-1);
    //     }
    //     else
    //     {
    //         v2.push_back(s.top());
    //     }

    //     s.push(v[i]);
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v2[i] << " ";
    // }
// }